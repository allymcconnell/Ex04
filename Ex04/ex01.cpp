//
//  main.cpp
//  Ex04
//
//  Created by Ally McConnell on 6/5/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>

//Exercise 1
//PT -- 12/20

int main()

{
    //declare variable
    int i, j, arraySize, Sum = 0, count = 0, value;
    double average = 0;
    
    //declare pointer variable
    int *numbers;
    //read the size of an array
    cout << "Enter arrary size: ";
    cin >> arraySize;
    
    numbers = new int[arraySize];
    cout << "Enter integer values: ";
    for (i=0, i < arraySize; i++)
    {
        cin >> value;
        *(numbers + i) = value;
        Sum = Sum + value;
    }
    
    //calculate the average of the numbers
    average = Sum/arraySize;
    //PT - this won't compile. All you need is cout << "Average number is: " << average << endl;
    (cout << "Average number is: ")<
    cout << "Above average numbers are: ";
    //PT and this isn't quite right: for (j=0; j<arraySize; j++)
    for (j= 0, j < arraySize; j++)
    {
        //PT if (*(numbers + j) > average) ...
        if (*(numbers= &j)> average)
        {
            cout << *(numbers + j) << " ";
            count++;
        }
        cout << "Total of above average is";
    }
    
    system ("pause");
    //return the value
    return 0;
}

