/*
 * Child.cpp
 *
 *  Created on: May 15, 2018
 *      Author: Zeeshan
 */


//
//  Child.cpp
//
//
//  Created by Zeeshan Abidi on 5/15/18.
//

#include <stdio.h>

class child : public Human{

}


private:
    string Dad;
    string Mom;

    child()
    {
        //default constructor
    }



public:     //constructor with 2 parent arguements
    child(string Dad, string Mom)
    {
        this -> Dad = Dad;
        this -> Mom = Mom;

    }
    void work(string work)
    {
        workplace = work;
    }
    string getWork()
    {
    return workplace;

    }

}
