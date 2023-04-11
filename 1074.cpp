#include <iostream>

using namespace std;

int main() {

    int a;
    cin >> a;

    do {
        if (a == 0) {
            break;
        }
        cout << a << endl;
    }
    while (a--);
    
    return 0;
}