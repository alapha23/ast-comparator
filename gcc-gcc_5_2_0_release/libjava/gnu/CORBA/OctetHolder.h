
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_OctetHolder__
#define __gnu_CORBA_OctetHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
        class OctetHolder;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
    }
  }
}

class gnu::CORBA::OctetHolder : public ::java::lang::Object
{

public:
  OctetHolder();
  OctetHolder(jbyte);
  void _read(::org::omg::CORBA::portable::InputStream *);
  ::org::omg::CORBA::TypeCode * _type();
  void _write(::org::omg::CORBA::portable::OutputStream *);
private:
  static ::org::omg::CORBA::TypeCode * t_octet;
public:
  jbyte __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_OctetHolder__
