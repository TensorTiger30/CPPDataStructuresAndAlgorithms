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

// get a pointer to a reactangle
struct  Rectangle *getPointerToAStruct() {
    cout << "Inside getPointerToAStruct()" << endl;
    // struct Rectangle *r = (struct Rectangle *) malloc(sizeof(struct Rectangle)); // C syntax
    struct Rectangle *r = new Rectangle(); // C++ syntax

    // set the values
    r -> length = 50;
    r -> breadth = 60;

    return r;
}

int main() {
    cout << "Inside main()" << endl;
    struct Rectangle r = {10, 2};
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;
    funByValue(r);
    funByReference(&r);
    funByValue(r);
    struct  Rectangle *p = getPointerToAStruct();
    cout << "Length: " << p -> length << endl;
    cout << "Breadth: " << p -> breadth << endl;
    return 0;
}