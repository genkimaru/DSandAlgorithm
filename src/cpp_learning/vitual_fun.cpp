#include <iostream>
#include <string>
using namespace std;

class Shape
{

public:
    Shape(int width, int length)
    {
        cout << "shape constructor run " << endl;
    }
     virtual int area()
    {
        cout << "area is : " << endl;
        return 0;
    }

private:
    int width;
    int length;
};

class Square : public Shape
{

public:
    Square(int width, int length) : Shape(width, length)
    {
        this->width = width;
        this->length = length;
        cout << "Square constructor run " << endl;
    }
    int area()
    {
        int a = this->width * this->length;
        cout << " Square area called , area is : " << a << endl;

        return a;
    }

private:
    int width;
    int length;
};

int main()
{
    Shape * p ;
    Square s(10, 20);

    p = &s;

    p->area();
}