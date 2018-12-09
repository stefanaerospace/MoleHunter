# MoleHunter

This was an exercise in classes, setting private values, and retrieving those private values.

The Main.cpp script serves a very simple function: if a person has exactly 3 contacts, print them out as a mole. 
The reason this was an exercise was because of the classes involved in creating the entities to be evaluated. 

Person.h is a base class that contains only one variable (name of the contact), and public methods to set and read this value.
Contacts.h is a child class (the parent is Person.h), similar structure to Person.h. This was the only class called in Main.cpp.
