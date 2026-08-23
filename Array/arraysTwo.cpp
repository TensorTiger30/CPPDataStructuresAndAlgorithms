#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    int A[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter the array value at position " << i << ":";
        cin >> A[i]; 
    }

    cout << "Print the elements of the array:" << endl;

    for(int x : A) {
        cout << x << endl;
    }
}