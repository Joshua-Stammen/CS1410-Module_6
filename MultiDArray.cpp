// File: MultiDArray.cpp
// Created by Joshua Stammen on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants,Structs, Classes
const int ROWS = 3;
const int COL = 2;

// Prototypes
void AgeInput(int iage[ROWS][COL]);
void ShowInput(int iage[ROWS][COL]);

// Main Program Program

int main()
{
    AgeInput(age);
    ShowInput(age);

    int age[ROWS][COL];
    int age2[ROWS][COL] ={{1,2,3},{21,22,23},{31,32,33}};


    return 0;
}


// Function Definitions
void AgeInput(int iage[ROWS][COL])
{
    for(int i = 0; i < ROWS; i++)
    {
    for(int j = 0; j < COL; j++) {
        cout << " Enter your age";
        cin >> age[i][j];
    }
        cout <<endl;
    }
}
void ShowInput(int iage[ROWS][COL])
{

    for( int i = 0;i < ROWS; i ++) {
        for (int j = 0; j < COL; j++) {

            cout << "Age 1 :" << age[i][j];
            cout << "Age 2 :" << age2[i][j];

        }
    }
    cout <<endl;
}
