/*
Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called triangle and
rectangle from the base shape. Add to the base class, a member function get_data() to
initialize base class data members and another member function display_area() to compute
and display the area of figures. Make display_area() as a virtual function and redefine this
function in the derived classes to suit their requirements.

Using these three classes, design a program that will accept dimensions of a triangle or a
rectangle interactively, and display the area.

Remember the two values given as input will be treated as lengths of two sides in the case of
rectangles and as base and height in the case of triangles, and used as follows:

    Area of rectangle = x * y
    Area of triangle = ½ * x * y
*/

/*
plan-
    1- base class - shape
        - two double values
    2- classes triangle and rectangle from base
    3- in base class get_data()
    4- display display_area() - virtual function
*/

#include <iostream>

class Shape
{
private:
    double length_height;
    double breadth_base;

public:
    void get_data()
    {
        std::cin >> length_height >> breadth_base;
    }

    virtual void display_area() {}

    double breadthBase() const { return breadth_base; }
    void setBreadthBase(double breadthBase) { breadth_base = breadthBase; }

    double lengthHeight() const { return length_height; }
    void setLengthHeight(double lengthHeight) { length_height = lengthHeight; }
};

class Triangle : public Shape
{
private:
public:
    void display_area()
    {
        double area;
        area = (0.5) * Shape::lengthHeight() * Shape::breadthBase();
        std::cout << "Area of triangle: " << area;
    }
};

class Rectangle : public Shape
{
private:
public:
    void display_area()
    {
        double area;
        area = Shape::lengthHeight() * Shape::breadthBase();
        std::cout << "Area of rectangle: " << area;
    }
};

int main()
{
    Shape *s[2];

    Triangle t;
    s[0] = &t;
    Rectangle r;
    s[1] = &r;

    std::cout << "Enter the height and base of triangle: ";
    s[0]->get_data();

    std::cout << "Enter the length and breadth of triangle: ";
    s[1]->get_data();

    s[0]->display_area();
    s[1]->display_area();
}