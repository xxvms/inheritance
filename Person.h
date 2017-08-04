//
// Created by xxvms on 04/08/17.
//

#ifndef INHERITANCE_PERSON_H
#define INHERITANCE_PERSON_H

#include <iostream>
#include <string>

class Person // This is base class
{

private:
    std::string firstName;
    std::string lastName;

protected:

    int age; // age can be used only inside derived class

public:


    Person();

    Person(std::string fName, std::string lName);

    Person(std::string fName, std::string lName, int age);

    ~Person();

    void SetFirstName(std::string fName);
    std::string GetFirstName();

    void SetLastName(std::string lName);
    std::string GetLastName();

    void SayHello();

};

#endif //INHERITANCE_PERSON_H
