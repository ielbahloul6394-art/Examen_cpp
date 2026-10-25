#include <iostream>
using namespace std;

void modifier(int &a, int b) {
    a += 5;
    b += 10;
    
}

int main() {
    int x = 10, y = 20;

    modifier(x, y);

    cout << x << " - " << y << endl;

    return 0;
}