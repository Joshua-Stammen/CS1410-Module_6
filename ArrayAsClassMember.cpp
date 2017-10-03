// File: ArrayAsClassMember.cpp
// Created by Joshua Stammen on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
// Constants,Structs, Classes
const int MAX = 10;
class Stack
{
private:
    int st[MAX];    //stack: array of integers
    int top;        //number of top of stack
public:
    Stack()    //Constructor
    {
        top = -1;
    }
    void push(int var) //put member on stack
    {
        st[++top] = var;
    }
    int pop() // take number off stack
    {
        return st[top--];
    }
};

// Prototypes


// Main Program Program

int main() {
    Stack s1;

    s1.push(11);
    s1.push(44);
    s1.push(22);
    s1.push(33);
    cout << " 1. " << s1.pop() << endl; //33
    cout << " 2. " << s1.pop() << endl; //22
    cout << " 3. " << s1.pop() << endl; //44
    cout << " 4. " << s1.pop() << endl; //11



    return 0;

}
// Function Definitions