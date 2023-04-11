#include <iostream>

using namespace std;

int main() {

    char a;
    cin >> a;

    int diff = a - 'a';
    for (int i = 0; i <= diff; i++) {
        cout << char('a' + i) << " ";
    }

    return 0;
}