#include <iostream>
using namespace std;
const int SIZE = 3;

int main()
 {
    //Define an array of 3 integers
    int age[SIZE];
     //Declare and initialized an array of three members
     int age2[SIZE] = {99,21,33};

     //Take input
     for(int  i= 0; i < SIZE; i++)
     {
         cout<< " Enter your age: ";
         cin >> age[i];
     }
     for(int  i= 0; i < SIZE; i++)
     {
         cout<< " \nAge "<< i << " is " << age[i];
         cout<< " \nAge2 "<< i << " is " << age2[i];
     }

     cout << "\nDone !" << endl;

    return 0;
}