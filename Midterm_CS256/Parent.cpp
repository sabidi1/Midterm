/*
 * Parent.cpp
 *
 *  Created on: May 15, 2018
 *      Author: Zeeshan
 */


//
//  Parent.cpp
//
//
//  Created by Zeeshan Abidi on 5/15/18.
//

#include <stdio.h>




class Parent : public Human
{
    private:
    vector <Child > children;

    public
    friend child();

    //Setters
    void setChildName(string name)
    {
        name2 = name;

    }
    void setChildAge(int inputAge) { age2 = inputAge; }
    void setChildSex(char inputSex) { sex2 = inputSex; }

    //Getters
    string getChildName() { return name2; }
    int getChildAge() { return age2; }
    char getChildSex() { return sex2; }
}

