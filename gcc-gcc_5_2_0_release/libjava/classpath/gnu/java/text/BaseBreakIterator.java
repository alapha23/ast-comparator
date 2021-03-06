/* BaseBreakIterator.java -- Base class for default BreakIterators
   Copyright (C) 1999, 2001, 2004 Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */


package gnu.java.text;

import java.text.BreakIterator;
import java.text.CharacterIterator;
import java.text.StringCharacterIterator;

/**
 * @author Tom Tromey <tromey@cygnus.com>
 * @date March 22, 1999
 */

public abstract class BaseBreakIterator extends BreakIterator
{
  public BaseBreakIterator ()
  {
    // It isn't documented, but break iterators are created in a
    // working state; their methods won't throw exceptions before
    // setText().
    iter = new StringCharacterIterator("");
  }

  public int current ()
  {
    return iter.getIndex();
  }

  public int first ()
  {
    iter.first();
    return iter.getBeginIndex();
  }

  /**
   * Return the first boundary after <code>pos</code>.
   * This has the side effect of setting the index of the
   * CharacterIterator.
   */
  public int following (int pos)
  {
    iter.setIndex(pos);
    int r = next ();
    return r;
  }

  public CharacterIterator getText ()
  {
    return iter;
  }

  public int last ()
  {
    iter.last();
    // Go past the last character.
    iter.next();
    return iter.getEndIndex();
  }

  public int next (int n)
  {
    int r = iter.getIndex ();
    if (n > 0)
      {
        while (n > 0 && r != DONE)
          {
            r = next ();
            --n;
          }
      }
    else if (n < 0)
      {
        while (n < 0 && r != DONE)
          {
            r = previous ();
            ++n;
          }
      }
    return r;
  }

  public void setText (CharacterIterator newText)
  {
    iter = newText;
  }

  protected CharacterIterator iter;
}
