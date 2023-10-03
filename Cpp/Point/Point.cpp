#include <iostream>
#include <cmath>

class Point {
private:
    int x, y;

public:
    // Konstruktor
    Point() : x(0), y(0) {}

    Point(int x, int y) : x(x), y(y) {}

    // Pengambil/penyetel publik untuk variabel privat
    int getX() const {
        return x;
    }

    void setX(int x) {
        this->x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        this->y = y;
    }

    // Mengembalikan string deskriptif mandiri dalam bentuk "(x,y)"
    std::string toString() const {
        return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
    }

    // Mengembalikan sebuah array int 2-elemen yang berisi x dan y
    int* getXY() const {
        int* results = new int[2];
        results[0] = x;
        results[1] = y;
        return results;
    }

    // Menetapkan x dan y
    void setXY(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Kembalikan jarak dari contoh ini ke titik yang diberikan di (x,y)
    double distance(int x, int y) const {
        int xDiff = this->x - x;
        int yDiff = this->y - y;
        return std::sqrt(xDiff*xDiff + yDiff*yDiff);
    }

    // Mengembalikan jarak dari instance ini ke instance Point yang diberikan
    double distance(const Point& another) const {
        int xDiff = this->x - another.x;
        int yDiff = this->y - another.y;
        return std::sqrt(xDiff*xDiff + yDiff*yDiff);
    }

    // Mengembalikan jarak dari instance ini ke (0,0)
    double distance() const {
        return std::sqrt(x*x + y*y);
    }
};

int main() {
   
    // Test constructors and toString()
    Point p1(1, 2);
    std::cout << p1.toString() << std::endl;
    //(1,2)

    Point p2; // default constructor
    std::cout << p2.toString() << std::endl;
    //(0,0)

    // Test Setters and Getters
    p1.setX(3);
    p1.setY(4);
    std::cout << p1.toString() << std::endl;
    //(3,4)
    std::cout << "X is: " << p1.getX() << std::endl;
    //X is: 3
    std::cout << "Y is: " << p1.getY() << std::endl;
    //Y is: 4

    // Test setXY() and getXY()
    p1.setXY(5, 6);
    std::cout << p1.toString() << std::endl;
    //(5,6)
    std::cout << "X is: " << p1.getXY()[0] << std::endl;
    //X is: 5
    std::cout << "Y is: " << p1.getXY()[1] << std::endl;
    //Y is: 6

    // Test the 3 overloaded versions of distance()
    p2.setXY(10, 11);
    std::cout << "Distance is: " << p1.distance(10, 11) << std::endl;
    //Distance is: 7.07
    std::cout << "Distance is: " << p1.distance(p2) << std::endl;
    //Distance is: 7.07
    std::cout << "Distance is: " << p2.distance(p1) << std::endl;
    //Distance is: 7.07
    std::cout << "Distance is: " << p1.distance() << std::endl;
    //Distance is: 7.81



    return 0;
}
