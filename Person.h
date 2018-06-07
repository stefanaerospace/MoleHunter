/*
 * Person_class.h
 *
 * A base class for people, only contains a field for a Name string
 */
#ifndef PERSON_H_
#define PERSON_H_

#include"coordin.h"
#include<string>

using namespace std;

class Person
{

    private:
        string Name;

    public:
        void setName(string Name2);
        string getName();
};

//this sets the private variable
void Person::setName(string Name2)
{
   Name = Name2;
};

//this reveals the private variable
string Person::getName()
{
  return Name;
};
#endif
