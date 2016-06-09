//
//  ex03.cpp
//  Ex04
//
//  Created by Ally McConnell on 6/7/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>


int minIndex(double *list, int size);

int main()
{
    //Declare the pointer variable
    double *list;
    //Declare the variable
    int num;
    cout << "Enter array the size: ";
    cin >> num;
    //Create the pointer variable
    list = new double[num];
    //Read input from user
    for (int i=0; i)
         {
             cout << "Enter number" << i+1 << ":";
             cin >> list[i];
         }
    //Display the index of min value
         cout << "\n The index of the minimun value is" << minIndex(list num)+1 << endl;
    //Display smalles element in array
    cout << "The minimum value is" <<
         system ("pause");
         
         return 0;
         
}