#include <iostream>

using namespace std;

int main() {

    int a;

    if (3 <= a && a <= 5) {
        cout << "spring" << endl;
    }
    else if (6 <= a && a <= 8) {
        cout << "summer" << endl;
    }
    else if (9 <= a && a <= 11) {
        cout << "fall" << endl;
    }
    else {
        cout << "winter" << endl;
    }
    
    return 0;
}