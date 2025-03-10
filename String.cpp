#include <iostream>
#include "String.h"

int STRING::String::numStrings = 0;

STRING::String::String()
{
  len = 1;
  str = new char[len];
  std::strcpy(str,"");
  numStrings++;
  std::cout<< numStrings <<": default object created\n";
}

STRING::String::String(const char* s)
{
  len = std::strlen(s);
  str = new char[len + 1];
  std::strcpy(str, s);
  numStrings++;
  std::cout<< numStrings <<": 1 object created\n";
}

STRING::String::~String()
{
  std::cout<<"1 object deleted\n";
  numStrings--;
  delete [] str;
}

std::ostream& STRING::operator<<(std::ostream& os, const String& s)
{
  os<<s.str;
  return os;
}

STRING::String::String(const String& other)
{
  len = other.len;
  str = new char[len+1];
  std::strcpy(str, other.str);
  numStrings++;
  std::cout<< numStrings <<": 1 object created\n";
}

String& STRING::String::operator=(const String& other)
{
    if(this == &other)
        return *this;
  delete [] str;
  len = other.len;
  str = new char[len + 1];
  std::strcpy(str, other.str);
  return *this;
}
