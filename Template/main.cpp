#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T diff();
        ~Arithmetic();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this -> a = a;
    this -> b = b;
}

template <class T>
T Arithmetic<T>::add() {
    return this -> a + this -> b;
}

template <class T>
T Arithmetic<T>::diff() {
    return this -> a - this -> b;
}

template <class T>
Arithmetic<T>::~Arithmetic() {
}

int main() {
    Arithmetic<int> intArt(100, 200);

    cout << "Add (int):" << intArt.add() << endl;
    cout << "Diff (int):" << intArt.diff() << endl;

    Arithmetic<float> floatArt(100.10, 200.40);

    cout << "Add (int):" << floatArt.add() << endl;
    cout << "Diff (int):" << floatArt.diff() << endl;
}