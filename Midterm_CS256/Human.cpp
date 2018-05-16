//
//  NewProject.cpp
//
//
//  Created by Zeeshan Abidi on 5/15/18.
//

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Human {
    private:
    string name;
    int age;
    char sex;

    private Human () {         //default contstructor
        string = "";
        age = 0;
        sex = '';
    }

    protected Human (string name, int age, char sex){
        this -> name = name;
        this -> age = age;
        this -> sex = sex;
    }
    public:
    //accessors and mutators
    void setName(string name)
    {
        this -> name = name;
    }
    string getName()
    {
        return name;
    }

    void setAge(int age)
    {
        this -> age = age;
    }
    int getAge ()
    {
        return age;
    }

    void setSex()
    {
        this -> sex = sex;
    }
    string getSex()
    {
        return sex;
    }

    public virtual void work();

    friend class Parent;
    friend class Child;


    int main ()
    {
        Parent Homer("Homer", 36, 'M');
        Parent Marge ("Marge", 34, 'F');
        Child Lisa("Lisa", 12, 'F');
        Child Bart("Bart", 10, 'M');
        Child Maggie("Maggie", 3, 'F');

    }

}



