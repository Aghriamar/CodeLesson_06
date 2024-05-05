#include <iostream>
#include <cmath>

class MyClass {
private:
    int myData;

public:
    MyClass(int data) : myData(data) {}

    void displayData() {
        std::cout << "My data is: " << myData << std::endl;
    }
};

class Vector {
private:
    double x;
    double y;

public:
    Vector(double xVal, double yVal) : x(xVal), y(yVal) {}

    void displayCoordinates() {
        std::cout << "Vector coordinates: (" << x << ", " << y << ")" << std::endl;
    }

    double getLength() {
        return std::sqrt(x * x + y * y);
    }
};

int main() {
    MyClass obj(42);

    obj.displayData();

    Vector v(3.0, 4.0);

    v.displayCoordinates();

    std::cout << "Vector length: " << v.getLength() << std::endl;

    return 0;
}