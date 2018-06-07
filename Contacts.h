/*
 * Contacts.h
 *
 * A Child class that inherits from the Person Class, only contains a contacts
 * int as well as the accompanying storage and retrieval methods
 */
#ifndef CONTACTS_H_
#define CONTACTS_H_

#include<string>
#include"coordin.h"
#include"Person.h"

using namespace std;

class Contacts: public Person
{
    private:
       int Contact_count;

    public:
       void setContacts(int Contacts_intput);
       int getContacts();
};

//this sets the private variable
void Contacts::setContacts(int Contacts_intput)
{
    Contact_count = Contacts_intput;
};

//this reveals the private variable in a read-only capacity
int Contacts::getContacts()
{
    return Contact_count;
};

#endif
