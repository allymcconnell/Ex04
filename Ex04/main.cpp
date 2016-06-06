//
//  main.cpp
//  Ex04
//
//  Created by Ally McConnell on 6/5/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();

int main()
{
    ex01();
    ex02();
    ex03();
    ex04();
    ex05();
}

//Exercise 1
int ex01()
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
    (cout << "Average number is: ")<
    cout << "Above average numbers are: ";
    for (j= 0, j < arraySize; j++)
    {
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

//Exercise 2
int ex02()
{
    
}