#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class lingkaran {
private:
    double radius;
    string warna;

public:
    // Konstruktor (overloading)
    lingkaran
() : radius(1.0), warna("merah") {}
    
    lingkaran
(double r) : radius(r), warna("merah") {}
    
    lingkaran
(double r, const string& c) : radius(r), warna(c) {}

    // Metode umum
    double getRadius() const {
        return radius;
    }

    string getwarna() const {
        return warna;
    }

    double getArea() const {
        return radius * radius * M_PI;
    }
};

int main() {
    // Test Constructors and toString()
    lingkaran
 c1(2.0, "biru");  // Gunakan konstruktor ke-3
    cout << "Radiusnya adalah: " << c1.getRadius() << endl; 
    //Radiusnya adalah: 2.0
    cout << "Warnanya adalah: " << c1.getwarna() << endl;
    //Warnanya adalah: biru
    cout << "Luasnya adalah: " << fixed << setprecision(2) << c1.getArea() << endl;
    //Luasnya adalah: 12.57

    // Test Constructors and toString()
    lingkaran
 c2(2.0);  // Gunakan konstruktor ke-2
    cout << "Radiusnya adalah: " << c2.getRadius() << endl;
    //Radiusnya adalah: 2.0
    cout << "Warnanya adalah: " << c2.getwarna() << endl;
    //Warnanya adalah: merah
    cout << "Luasnya adalah: " << fixed << setprecision(2) << c2.getArea() << endl;
    //Luasnya adalah: 12.57

    // Test Constructors and toString()
    lingkaran
 c3;  // Gunakan konstruktor ke-1
    cout << "Radiusnya adalah: " << c3.getRadius() << endl;
    //Radiusnya adalah: 1.0
    cout << "Warnanya adalah: " << c3.getwarna() << endl;
    //Warnanya adalah: merah
    cout << "Luasnya adalah: " << fixed << setprecision(2) << c3.getArea() << endl;
    //Luasnya adalah: 3.14



    return 0;
}
