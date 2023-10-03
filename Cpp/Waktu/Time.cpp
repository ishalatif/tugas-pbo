#include <iostream>
#include <iomanip>

class Time {
private:
    int second, minute, hour;

public:
    // Constructors
    Time(int second, int minute, int hour) : second(second), minute(minute), hour(hour) {}
    Time() : second(0), minute(0), hour(0) {}

    // Getters
    int getSecond() const { return second; }
    int getMinute() const { return minute; }
    int getHour() const { return hour; }

    // Setters
    void setSecond(int second) { this->second = second; }
    void setMinute(int minute) { this->minute = minute; }
    void setHour(int hour) { this->hour = hour; }

    // toString method
    std::string toString() const {
        return std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second);
    }

    // setTime method
    void setTime(int second, int minute, int hour) {
        this->second = second;
        this->minute = minute;
        this->hour = hour;
    }

    // nextSecond method
    Time& nextSecond() {
        ++second;
        if (second >= 60) {
            second = 0;
            ++minute;
            if (minute >= 60) {
                minute = 0;
                ++hour;
                if (hour >= 24) {
                    hour = 0;
                }
            }
        }
        return *this; // Return "*this" instance, to support chaining operations
    }
};


int main() {
    // Test Constructors and toString()
    Time t1(1, 2, 3);
    std::cout << t1.toString() << std::endl;

    Time t2; // Default constructor
    std::cout << t2.toString() << std::endl;

    // Test Setters and Getters
    t1.setHour(4);
    t1.setMinute(5);
    t1.setSecond(6);
    std::cout << t1.toString() << std::endl;
    std::cout << "Jamnya adalah: " << t1.getHour() << std::endl;
    std::cout << "Menitnya adalah: " << t1.getMinute() << std::endl;
    std::cout << "Detiknya adalah: " << t1.getSecond() << std::endl;

    // Test setTime()
    t1.setTime(58, 59, 23);
    std::cout << t1.toString() << std::endl;

    // Test nextSecond() and chaining
    std::cout << t1.nextSecond().toString() << std::endl; // Return an instance of Time. Invoke Time's toString()
    std::cout << t1.nextSecond().nextSecond().nextSecond().toString() << std::endl;  // chaining



    return 0;
}
