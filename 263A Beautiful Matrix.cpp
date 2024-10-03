#include <iostream>
using namespace std;
int main() {
    int n, r=0, c=0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> n;
            if (n == 1) {
                r = i;
                c = j;
            }
        }
    }
    int m;
    if (r > 2){
        m = r - 2;
    } else {
        m = 2 - r;
    }
    if (c > 2){
        m += c - 2;
    } else {
     m += 2 - c;
    }
    cout << m;

    return 0;
}