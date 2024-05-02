#include <iostream>
#include <string>
#include<cmath>
#define Pi 3.14


using namespace std;
namespace Math {
    class Shape
    {
    protected:

        double Width;
        double length;
        double Third_Side; //wll be needed in some situations

    public:


        Shape() {
            cout << "What Shape Will I be This Time?" << endl;
            cout << "Enter the value for the width" << endl;
            cin >> Width;
            cout << "Enter the value for the length (If Circle, enter the same value as the Width)" << endl;
            cin >> length;
            cout << "Enter the value for the third side for the Parameter (If not a triangle, Please put 0 or input any value)" << endl;
            cin >> Third_Side;
        }

        virtual void Parameter() {
            cout << "This is just a blue print. Please Choose a shape (circle, triangle, rectangle)" << endl;
        }

        virtual void Area() {
            cout << "This is just a blue print. Please Choose a shape (circle, triangle, rectangle)" << endl;
        }
    };

    class Triangle : public Shape {


    public:
        Triangle() {
            cout << "I am a right angled triangle!! " << endl;

        }
        void Area() override {
            double result = Width * length / 2;
            cout << "Area = " << result << endl;
        }
        void Parameter() override {

            double result = Width + length + Third_Side;
            cout << "Parameter = " << result << endl;
        }
        void Inscribed_Circle_Diameter() {
            double Diameter = ((Width * length) / (Width + length + Third_Side)) * 2; //Formula I found on the internet!

            cout << "Diameter = " << Diameter << endl;
        }
    };



    class Rectangle : public Shape {


    public:
        Rectangle() {
            cout << "I am a right angled triangle!! " << endl;

        }
        void Area() override {
            double result = Width * length;
            cout << "Area = " << result << endl;
        }
        void Parameter() override {

            double result = (Width + length) * 2;
            cout << "Parameter = " << result << endl;
        }
        void Inscribed_Circle_Diameter() {
            double Diameter = Width; //diameter of the inscribed circle is equal to the width of a rectangle 

            cout << "Diameter = " << Diameter << endl;
        }
    };
    class Circle : public Shape {


    public:
        Circle() {
            cout << "I am a right angled triangle!! " << endl;

        }
        void Area() override {
            double result = Width * Width * Pi;
            cout << "Area = " << result << endl;
        }
        void Parameter() override {

            double result = Width * 2 * Pi;
            cout << "Parameter = " << result << endl;
        }
        void Inscribed_Square_Side() {
            double Side = sqrt((Width * Width) + (Width * Width)); //Side of the Inscribed square is equal to the diagonal made by to radii of the circle

            cout << "Diameter = " << Side << endl;
        }
    };
}





int main()
{
    /*Math::Triangle triangle1;
    triangle1.Area();
    triangle1.Parameter();
    triangle1.Inscribed_Circle_Diameter();*/
    Math::Rectangle rectangle;
    rectangle.Area();
    rectangle.Parameter();
    rectangle.Inscribed_Circle_Diameter();

    /*Math::Circle circle;
    circle.Area();
    circle.Parameter();
    circle.Inscribed_Square_Side();*/
}
