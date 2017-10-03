// File: FuncArray.cpp
// Created by Joshua Stammen on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>

using namespace std;

// Constants,Structs, Classes
const int SIZE = 3;
// Prototypes
//Arrays are passed by reference
void AgeInput(int iage[SIZE]);
void ShowInput(int iage[SIZE]);
//void AgeInput(int age[]); another notation
// Main Program Program

int main() {
    {
        //Define an array of 3 integers
        int age[SIZE];
        //Declare and initialized an array of three members
        int age2[SIZE] = {99,21,33};

        //Take input
       AgeInput(age);
        ShowInput(age);

        cout << "\nDone !" << endl;

        return 0;
    }

    return 0;

}
// Function Definitions
 void AgeInput(int iage[SIZE])
{
    for(int  i= 0; i < SIZE; i++)
    {
        cout<< " Enter your age: ";
        cin >> iage[i];
    }

}
void ShowInput(int iage[SIZE])
{
    for(int  i= 0; i < SIZE; i++)
    {
        cout<< " \nAge "<< i << " is " << iage[i];

    }

}