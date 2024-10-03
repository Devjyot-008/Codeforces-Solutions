#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = n/5; 
    if (n% 5 != 0) {
        m++;
    }
    cout << m;
}