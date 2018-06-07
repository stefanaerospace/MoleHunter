/*
 * Main.cpp
 *
 * The main source code file for the MoleHunter exercise
 *
 * Classes used:
 *  Person.h
 *  Contacts.h
 */

#include<iostream>
#include<string>
#include<list>
#include<array>
#include"coordin.h"


int main()
{
    using namespace std; 

    Contacts Roger;
    Contacts Mary;
    Contacts Joe;
    Contacts Susan;
    
    Contacts Suspects[] = {Roger, Mary, Joe, Susan}; 
    string Names[]      = {"Roger", "Mary", "Joe", "Susan"};
    int Contacts[]      = {1,2,3,4};

    for(int i = 0; i<4; i++)
    {
        Suspects[i].setName(Names[i]);
        Suspects[i].setContacts(Contacts[i]);
    }
   

    for(int i = 0; i<4; i++)
    {
       if(Suspects[i].getContacts() == 3)
       {
            cout<<"This person could be a mole: "<<Suspects[i].getName()<<endl;
       }
    }
}

