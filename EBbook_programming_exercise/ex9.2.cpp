/*
Extend the above program to display the area of circles. This requires addition of a
new derived class ‘circle’ that computes the area of a circle. Remember, for a circle we need
only one value, its radius, but the get_data() function in base class requires two values to be
passed.(Hint: Make the second argument of get_data() function as a default one with zero
value.)
*/

/*
plan-
    1- base class - shape
        - two double values
    2- classes triangle and rectangle from base
    3- in base class get_data()
    4- display display_area() - virtual function
    5- add a circle class and define its area
*/

#include <iostream>
#define PI 3.14
class Shape
{
private:
    double length_height;
    double breadth_base;

public:
    // void get_data()
    // {
    //     std::cin >> length_height >> breadth_base;
    // }
    void get_data(double length, double breadth)
    {
        length_height = length;
        breadth_base = breadth;
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

class Circle : public Shape
{
    void display_area()
    {
        double area;
        // double length = Shape::lengthHeight();
        // double height = Shape::breadthBase();
        area = PI * Shape::lengthHeight() * Shape::lengthHeight();
        // area = PI * Shape::lengthHeight * Shape::lengthHeight;
        std::cout << "Area of circle: " << area;
    }
};

int main()
{
    Shape *s[3];

    Triangle t;
    s[0] = &t;
    Rectangle r;
    s[1] = &r;
    Circle c;
    s[2] = &c;

    std::cout << "Enter the height and base of triangle: ";
    double height, base;
    std::cin >> height >> base;
    s[0]->get_data(height, base);

    std::cout << "Enter the length and breadth of rectangle: ";
    double length, breadth;
    std::cin >> length >> breadth;
    s[1]->get_data(length, breadth);

    std::cout << "Enter the radius of circle: ";
    double radius;
    std::cin >> radius;
    s[2]->get_data(radius, 0);

    s[0]->display_area();
    s[1]->display_area();
    s[2]->display_area();
}