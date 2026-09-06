#include <iostream>
#include <stdio.h>

using namespace std;

int length(char input[]) {
    int i = 0;
    while (input[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char input[] = {'w', 'e', 'l', 'c', 'o', 'm', 'e', '\0'};
    char inputTwo[] = "welcome";

    cout << "Length of input One = " << length(input) << endl;
    cout << "Length of input Two = " << length(inputTwo) << endl;

    return 0 ;
}