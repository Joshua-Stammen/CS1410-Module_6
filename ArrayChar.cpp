// File: ArrayChar.cpp
// Created by Joshua Stammen on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
// Constants,Structs, Classes
const int MAX = 80;

// Prototypes


// Main Program Program

int main()
{
    char st[MAX];
   // cout << "Enter your First Name: ";
    //cin >> st;
    //cout << "Hello " <<st << endl;
    //Let the compiler calculate the space
    char hi[] = "Hello Weber State University Students!";
    cout << hi << endl;
    //To support embedded blanks, use cin.get() function
    cout << "Enter your Full Name: ";
    cin.get(st,MAX);
    cout << "Hello " <<st<<endl;
    return 0;

}
// Function Definitions