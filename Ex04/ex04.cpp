//
//  ex04.cpp
//  Ex04
//
//  Created by Ally McConnell on 6/7/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#ifndefRECTANGLE_H
#defineRECTANGLE_H

#include <iostream>
using namespace std;
#include <string>

class Rectangle2D
{
public:
    Rectangle2D();
    Rectangle2D(double double, double, double);
    //get funcitons
    double getX()const;
    double getY()const;
    double getWidth()const;
    double getHeight()const;
    //set functions
    void setX(double const);
    void setY(double const);
    void setWidth(double const);
    void setHeight(double const);
    //to calculate area and perimeter
    double getArea()const;
    double getPerimeter()const;
    //declaration of contains and overlap function
    bool contains(double, double);
    bool contains(const Rectangle2D& r);
    bool overlaps(const Rectangle2D& r);
    
private:
    double x;
    double y;
    double width;
    double height;
    
    
};

#endif


#include "Rectangle2D.h"
using namespace std;

//create a no argument object
Rectangle2D::~Rectangle2D()
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
    
}

//creates an object with specified values
Rectangle2D::Rectangle2D(double x, double y, double w, double h)
{
    x = x;
    y = y;
    width = w;
    height = h;
}
//get functions to get the centre , width and height of a rectangle
double Rectangle2D::getX()const
{
    return x;
}
double Rectangle2D::getY()const
{
    return y;
}
double Rectangle2D::getWidth()const
{
    return width;
}
double Rectangle2D::getHeight()const
{
    return height
}
//set functions for values
void Rectangle2D::setX(const double x)
{
    x = X;
}
void Rectangle2D::setY(const double y)
{
    y = Y;
}
void Rectangle2D::setWdith(const double W)
{
    width = W;
}
void Rectangle2D::setHeight(const double H)
{
    height = H;
}
//functions to calculate
double Rectangle2D::getArea()const
{
    return width * height;
}
double Rectangle2D::getPerimeter()const
{
    return 2*(width+height);
}

//check points
bool Rectangle2D::contains(double x, double y)
{
    double pointX = x;
    double pointY = y;
    
    if (pointX < (this->x + (.5*this->width))&&pointX>
        (this ->x-(.5*this->width))&&
        pointY< (this -> + (.5*this ->height)) && pointY
        > (this -> y- (.5*this-> height)))
        return true;
        else
            return false;
}

//function for checking overlapping
bool Rectangle2D::overlaps(const Rectangle2D& r)
{
    double r1w = this->width;
    double r1h = this-> height;
    double r2w = r.width;
    double r2h = h.height;
    if (r2w <= 0|| r2h <= 0|| r1w <= 0 || r1h <=0)
        return false;
    double r1x = this->x;
    double r1y = this ->y;
    double r2x = r.x;
    double r2y = r.y;
    r2w = r2w + r2x;
    r2h = r2w + r2y;
    r1w = r1w + r1x;
    r1h = r1h + r1y;
    
    if ((r2w < r2X || r2w > r1x) && (r2h , r2y || r2h > r1y)&& (r1w < r1x || r1w > r2x)&& (r1h < r1y || r1h > r2y))
        return true;
    else
        return false;
}

//fuctions for checking inside rectangle
bool Rectangle2D::contains (const Rectangle2D& r)
{
    if (this -> x -(this->width/2) > r.x - (r.width/2)
        && this->x+(this->width/2)< r.x + (r.width/2)
        && this -> y- (this ->height/2) <r.y - (r.height/2)
        && this -> y + (this-> height/2) r.y + (r.height/2))
        return true;
    else
        return false;
}

#include "Rectangle2D.h"

int main()
{
    Rectangle2D r1(2,2,5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4):
    
    cout << "The area of the rectangle (2, 2, 5.5, 4.9) = " << r1.getArea() << endl;
    cout << "The perimeter of the rectangle (2, 2, 5.5, 4.9) = " << r1.getPerimeter() << endl;
    if (r1.contains(3,3))
        cout << "The point (3,3) is inside the rectangle (2, 2, 5.5, 4.9)" << endl;
    else
        cout << "The point (3,3) is outside the rectangle (2,2, 5.5, 4.9)" << endl;
    
    if (r1.contains(r2))
        cout << "The rectangle (4, 5, 10.5, 3.2) is inside the rectangle (2, 2, 5.5, 4.9)" << endl;
    
    if (r1.overlaps(r3))
        cout << "The rectangle (3, 5, 2.3, 5.4) overlaps the rectangle (2, 2, 5.5, 4.9)" << endl;
    else
        cout << "The rectangle (3, 5, 2.3, 5.4) does not overlap the rectangle (2, 2, 5.5, 4.9)" << endl;
    
    return 0;
}