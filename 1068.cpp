#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    if (a >= 90) {
        cout << "A" << endl;
    }
    else if (a >= 70) {
        cout << "B" << endl;
    }
    else if (a >= 40) {
        cout << "C" << endl;
    }
    else if (a >= 0) {
        cout << "D" << endl;
    }
    
    return 0;
}