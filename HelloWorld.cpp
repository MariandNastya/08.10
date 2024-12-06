#include <iostream>
using namespace std;

int x = 0;

void print() {
    cout << "Hello, World!" << endl;
}

int main() {
    for (int i = 0; i < 1; i++) {
        x++;
    }
    print();
    return 0;
}