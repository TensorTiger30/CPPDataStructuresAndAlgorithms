#include <iostream>

using namespace std;


class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle() {
            cout << "Inside the default constructor" << endl;
            this -> length = 0;
            this -> breadth = 0;
        }

        Rectangle(int length, int breadth)  {
            cout << "Inside the overloaded former constructor" << endl;
            this -> length = length;
            this -> breadth = breadth;
        }

        int area() {
            return this -> length * this -> breadth;
        }

        int perimeter() {
            return 2 * (this -> length + this -> breadth);
        }

        void setLength(int length) {
            this -> length = length;
        }

        void setBreadth(int breadth) {
            this -> breadth = breadth;
        }
        
        int getLength() {
            return this -> length;
        }

        int getBreadth() {
            return this -> breadth;
        }

        ~Rectangle() {
            cout << "Inside the destructor" << endl;
        }

};

int main() {

    Rectangle r(10,20);

    cout << "Area:" << r.area() << endl; 
    cout << "Perimeter:" << r.perimeter() << endl;   

    return 0;
}