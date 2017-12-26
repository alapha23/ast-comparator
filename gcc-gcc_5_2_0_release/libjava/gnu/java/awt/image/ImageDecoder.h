
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_image_ImageDecoder__
#define __gnu_java_awt_image_ImageDecoder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace image
        {
            class ImageDecoder;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class ImageConsumer;
      }
    }
    namespace net
    {
        class URL;
    }
  }
}

class gnu::java::awt::image::ImageDecoder : public ::java::lang::Object
{

public:
  ImageDecoder(::java::lang::String *);
  ImageDecoder(::java::net::URL *);
  ImageDecoder(::java::io::InputStream *);
  ImageDecoder(::java::io::DataInput *);
  ImageDecoder(JArray< jbyte > *, jint, jint);
  virtual void addConsumer(::java::awt::image::ImageConsumer *);
  virtual jboolean isConsumer(::java::awt::image::ImageConsumer *);
  virtual void removeConsumer(::java::awt::image::ImageConsumer *);
  virtual void startProduction(::java::awt::image::ImageConsumer *);
  virtual void requestTopDownLeftRightResend(::java::awt::image::ImageConsumer *);
  virtual void produce(::java::util::Vector *, ::java::io::InputStream *) = 0;
public: // actually package-private
  ::java::util::Vector * __attribute__((aligned(__alignof__( ::java::lang::Object)))) consumers;
  ::java::lang::String * filename;
  ::java::net::URL * url;
  JArray< jbyte > * data;
  jint offset;
  jint length;
  ::java::io::InputStream * input;
  ::java::io::DataInput * datainput;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_image_ImageDecoder__