#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Cube.h"
#include "Parallelogram.h"
using namespace std;

int main()
{
    /*Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    circle.SetDimension(10.0);
    circle.ShowArea();
    
    rectangle.SetDimension(5.5, 10.0);
    rectangle.ShowArea();

    triangle.SetDimension(5.5, 10.0);
    triangle.ShowArea();*/
    
    int v;
    cout << "1. Rectangle\n2. Triangle\n3. Circle\n4. Trapezoid\n5. Cube\n6. Parallelogram\n--> ";
    cin >> v;

    Figure* ptr = nullptr;
    switch (v)
    {
    case 1:
        ptr = new Rectangle();
        ptr->SetDimension(10, 5);
        break;
    case 2:
        ptr = new Triangle();
        ptr->SetDimension(10, 15);
        break;
    case 3:
        ptr = new Circle();
        ptr->SetDimension(10);
        break;
    case 4:
        ptr = new Trapezoid(5, 15, 6);
        break;
    case 5:
        ptr = new Cube();
        ptr->SetDimension(5);
        break;
    case 6:
        ptr = new Parallelogram(7, 15, 5);
        break;
    default:
        break;
    }
    ptr->ShowArea();
    delete ptr;

    return 0;
}