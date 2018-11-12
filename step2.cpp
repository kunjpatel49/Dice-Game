//
//  main.cpp
//  step2.cpp
//
//  Created by Kunj Patel on 9/11/18.
//  Copyright © 2018 Kunj Patel. All rights reserved.
//



#include <iostream>
#include <cstdlib>    // Needed for rand() to work
#include <ctime>
using namespace std;

int main()
{
    
    // Identifying information
    cout << "Class: CS 141" << endl;
    cout << "System:  C++ in codio.com" << endl;
    cout << "Welcome to the dice game, where you and your opponent each choose" << endl;
    cout << "one of the red, green or blue dice and roll them.\n" <<endl;
    cout << "The dice contain the following sides: " << endl;
    cout << "    Red: 1 4 4 4 4 4" << endl;
    cout << "  Green: 2 2 2 5 5 5" << endl;
    cout << "   Blue: 6 3 3 3 3 3\n" << endl;
    
    cout <<"Enter the die color (R G or B): "<<endl;
    
    //Decalration of Variables:
    char userInput = ' ';
    //this is for giving out the value after if statement
    int faceVal = 0;
    
    // Getting Value according to face :
    cin >> userInput;
    int randNum = 0;
    
    //Random Nimber generator:
    randNum = (rand() % 6) +1;
    
    //Getting value for red dice:
    if (userInput == 'R')
    {
        if (randNum == 1)
        {
            faceVal = 1;
        }
        else
        {
            faceVal = 4;
        }
    }
    
    // Getting value for green dice:
    if (userInput == 'G')
    {
        if (randNum == 1 || randNum ==2 || randNum == 3)
        {
            faceVal = 2;
        }
        else
        {
            faceVal = 5;
        }
    }
    
    // Getting Value for Blue dice :
    if (userInput == 'B')
    {
        if (randNum == 1)
        {
            faceVal = 6;
        }
        else
        {
            faceVal = 3;
        }
    }
    
    //Printing the random face value generated:
    cout << "Value: " << faceVal << endl;
    
    return 0;
    
}//end main()

