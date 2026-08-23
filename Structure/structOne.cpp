#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {

    struct Rectangle r1 = {10,5};

    cout << "Print the length of rectangle R1:" << r1.length << endl;

    cout << "Print the breadth of rectangle R1:" << r1.breadth << endl;

    cout << "Size of rectangle R1:" << sizeof(r1) << " Bytes" << endl;

    struct Rectangle r;
    int operation;

    cout << "Enter the lenght of the rectangle:";
    cin >> r.length;

    cout << "Enter the breadth of the rectangle:";
    cin >> r.breadth;

    cout << "What you want to calculate for rectangle (1 -> Perimeter/ 2 -> Area) ?";
    cin >> operation;

    switch (operation) {
        case 1 : cout << "Perimeter of rectangle:" << 2 * (r.length + r.breadth);
            break; 
        case 2 : cout << "Area of rectangle:" << (r.length * r.breadth); 
            break;
        default:
            cout<< "Invalid operation requested";
    }

    return 0;
}