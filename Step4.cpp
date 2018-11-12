
#include <iostream>
#include <cstdlib>    // Needed for rand() to work
using namespace std;

int main()
{
    
    // Identifying information
    cout << "Class: CS 141" << endl;
    cout<<"Lab : Tues 5am"<<endl;
    cout << "System:  C++ in codio.com" << endl;
    cout << "Welcome to the dice game, where you and your opponent each choose" << endl;
    cout << "one of the red, green or blue dice and roll them.\n" <<endl;
    cout << "The dice contain the following sides: " << endl;
    cout << "    Red: 1 4 4 4 4 4" << endl;
    cout << "  Green: 2 2 2 5 5 5" << endl;
    cout << "   Blue: 6 3 3 3 3 3\n" << endl;
    cout <<"Enter the die colors (R G or B): "<<endl;
    
    //Decalration of functions
    char userInput = ' ';
    
    //this is for giving out the value after if statement
    int faceVal=0;
    
    // Getting Value according to face :
    cin >> userInput;
    int randNum=0;
    
    //Second declaration of variables for player two:
    char userInput2 = ' ';
    int faceVal2=0;
    cin >> userInput2;
    
    //Variables for score records:
    int scoreOut = 0;
    int scoreOut2 = 0;
    
    //Loop Counters
    int counter = 1;
    int srNum = 1;
    
    //Second rand() function:
    int randNum2=0;
    
    //Lopping the results for 50 iterations representing 50 dice thrown:
    while(counter <= 50)
    {
        randNum = (rand() % 6)+1;
        
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
        
        // Getting value for green dice :
        if (userInput == 'G')
        {
            if (randNum == 1 || randNum == 2 || randNum == 3)
            {
                faceVal = 2;
            }
            else
            {
                faceVal = 5;
            }
        }
        
        // Getting Value for Blue dice:
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
        
        //Printing the value of face (required in one of the steps):
        //cout << "Value: " << faceVal << endl;
        
        //Getting the random face value for the second player or dice:
        //Getting value for red dice randomly for second player:
        randNum2 = (rand() % 6)+1;
        if (userInput2 == 'R')
        {
            if (randNum2 == 1)
            {
                faceVal2 = 1;
            }
            else
            {
                faceVal2 = 4;
            }
        }
        
        //Getting value for green dice randomly for second player:
        if (userInput2 == 'G')
        {
            if (randNum2 == 1 || randNum2 == 2 || randNum2 == 3)
            {
                faceVal2 = 2;
            }
            else
            {
                faceVal2 = 5;
            }
        }
        
        //Getting value for blue dice randomly for second player:
        if (userInput2 == 'B')
        {
            if (randNum2 == 1)
            {
                faceVal2 = 6;
            }
            else
            {
                faceVal2 = 3;
            }
        }
        
        //Printing here the required output:
        if (faceVal > faceVal2)
        {
            scoreOut++;
        }
        else
        {
            scoreOut2++;
        }
        cout <<" " <<srNum << "." << userInput << ":" << faceVal << " " << userInput2 << ":" << faceVal2
        << ", Score:  "<< scoreOut << " to  "<< scoreOut2 << endl;
        counter++;
        srNum++;
    }
    
    return 0;
}//end main()
