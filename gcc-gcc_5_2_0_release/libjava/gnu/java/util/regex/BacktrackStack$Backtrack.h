
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_BacktrackStack$Backtrack__
#define __gnu_java_util_regex_BacktrackStack$Backtrack__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace regex
        {
            class BacktrackStack$Backtrack;
            class CharIndexed;
            class REMatch;
            class REToken;
        }
      }
    }
  }
}

class gnu::java::util::regex::BacktrackStack$Backtrack : public ::java::lang::Object
{

public: // actually package-private
  BacktrackStack$Backtrack(::gnu::java::util::regex::REToken *, ::gnu::java::util::regex::CharIndexed *, ::gnu::java::util::regex::REMatch *, ::java::lang::Object *);
  ::gnu::java::util::regex::REToken * __attribute__((aligned(__alignof__( ::java::lang::Object)))) token;
  ::gnu::java::util::regex::CharIndexed * input;
  ::gnu::java::util::regex::REMatch * match;
  ::java::lang::Object * param;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_BacktrackStack$Backtrack__
