#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

// Structure as call by value
void funByValue(struct Rectangle r) {
    cout << "Inside funByValue()" << endl;
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;
}

// Structure as call by reference
void funByReference(struct Rectangle *r) {
    cout << "Inside funByReference()" << endl;
    r -> length = 20;
    r -> breadth = 40;  
    cout << "Length: " << r -> length << endl;
    cout << "Breadth: " << r -> breadth << endl;
}

int main() {
    cout << "Inside main()" << endl;
    struct Rectangle r = {10, 2};
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;
    funByValue(r);
    funByReference(&r);
    funByValue(r);
    return 0;
}