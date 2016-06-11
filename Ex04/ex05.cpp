//
//  ex05.cpp
//  Ex04
//
//  Created by Ally McConnell on 6/7/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#ifndef Course_h
#define Couse_h

#include <iostream>
using namespace std;
#include <string>

class Course
{
public:
    Course(const string& courseName, int capacity);
    Course(const Course&);
    ~ Course();
    string getCoursName()const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string * getStudents()const;
    int getNumberOfStudents()const;
    void clear(Course& courseName);
    
private:
    string courseName;
    string & students;
    int numberOfStudents;
    int capacity;
    
};

#endif

#include "Course.h"
using namespace std:

//default constructor
Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this -> courseName = courseName;
    this -> capacity = capacity;
    students = new string[capacity];
    
}
//copy constructor
Course::Course(const Course& course)
{
    numberOfStudents = course.numberOfStudents;
    courseName = course.courseName;
    capacity = course.capacity;
    students = new string[capacity];
}

Course::~Course()
{
    delete [] students;
}
string Course::getCourseName()const
{
    return courseName;
}
void Course::addStudent(const string& name)
{
    if (numberOfStudents >= capacity)
    {
        string numberOfStudents_new[capacity*10];
        for(int i=0; i < numberOfStudents; i++)
        {
            numberOfStudents_new[i]=students[i];
        }
        numberOfStudents++;
    }
    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
    for (int i=0; i<numberOfStudents; i++)
    {
        //condition test
        if (students[i]==name)
        {
            for(int j=i; j<numberOfStudents; j++)
        }
        students[j]= students[j+1];
    }
    numberOfStudents--;
}
}
}
}

void Course::clear(Course& courseName)
{
    courseName.students= '\0';
    courseName.numberOfStudents= 0;
}
string * Course::getStudents()const{
    return students;
}

int Course::getNumberOfStudents()const
{
    return numberOfStudents;
}

#include "Course.h"
using namespace std;

int main()
{
    //adding course
    Course c("C++", 5);
    //creating copy constructor
    Course c1(c);
    //add students to course c
    c.addStudent("Rose");
    c.addStudent("Mary");
    c.addStudent("John");
    c.addStudent("Jack");
    c1.addStudent("Rosy");
    //display students for course
    string * students = c.getStudents();
    cout << "Students Name: " << endl;
    for (int i = 0; i<c.getNumberOfStudents();i++)
        cout << students[i] << "";
    cout << "\n\nNumber of students are" << c.getNumberOfStudents() << "in" << c.getCourseName();
    //dropping students
    c.dropStudent("John");
    //display student list after dropping
    students = c.getStudents();
    cout << "\n\nAfter dropping student \n";
    cout << "\nStudents name: " << endl;
    for (int i = 0; i<c.getNumberOfStudents(); i++)
        cout << students[i] << "";
    //display student list
    students = c1.getStudents();
    cout << "\n\nNumber of students are: " << c.getNumberOfStudents() << "in" << c.getCoursName();
    cin.get();
    return 0;

}
