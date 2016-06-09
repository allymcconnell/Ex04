//
//  ex02.cpp
//  Ex04
//
//  Created by Ally McConnell on 6/7/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>


//Exercise 2

int *doubleCapacity(int *list, int size);

int main()
{
        //Declaration section
        int size, *list, *newList, doubleSize, i, j, value;
        cout << "Enter the size of an array: ";
        cin >> size;
        
        //Initializing size of array
        list = new int[size];
        
        cout << "Enter integer values: ";
        for (i=0; i
             {
                 cin >> value;
                 *(list+ i) = value;
             }
             cout << "Array Element after double in size: ";
             for (j=0; j
                  {
                      cout << *(newlist+ j)<< " ";
                  }
                  
                  system ("pause");
                  
                  return 0;
                  
                  };
                  int *doubleCapacity(int *list, int size)
                  {
                      int *p= new int[size];
                      for (int i = 0;i
                           {
                               p[i] = list[i];
                           }
                           
                           return p;
                           

}
    

