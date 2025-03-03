#include<iostream>
using namespace std;
class Shapes
{
public:
float area;
void calculateArea(float radius) {
    area = 3.14 * radius * radius;
    cout << "Area of Circle: " << area << endl;
}

void calculateArea(float length, float breadth) {
    area = length * breadth;
    cout << "Area of Rectangle: " << area << endl;
}

void calculateArea(float base, float height, int) {
    area = 0.5 * base * height;
    cout << "Area of Triangle: " << area << endl;
}
};
int main()
{
    Shapes shape;
    shape.calculateArea(5.0f);  
    shape.calculateArea(4.0f, 6.0f);
    shape.calculateArea(3.0f, 7.0f, 0); 
    
    return 0;
}