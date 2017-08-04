//
// Created by xxvms on 04/08/17.
//

#ifndef INHERITANCE_STUDENT_H
#define INHERITANCE_STUDENT_H

#include "Person.h"
class Student : public Person
{
// Student class does not have any private or protected variables or methods (together this are called members!!)

public:
    Student();
    ~Student();

    void setAge(int);
    int getAge();
    void SayHello();
};


#endif //INHERITANCE_STUDENT_H
