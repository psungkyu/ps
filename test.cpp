#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << boolalpha;
    int num(100);
    int a[] = {1, 2, 3, 4, 5};

    for (auto c : a) {
        cout << c << endl;
    }

    return 0;
}