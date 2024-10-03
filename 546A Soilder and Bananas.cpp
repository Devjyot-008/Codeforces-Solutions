#include <iostream>
using namespace std ; 

int main() {
    int k, n, w;
    cin >> k>>n>>w ;

    int total_cost = 0;
    for (int i = 1; i <= w; i++) {
        total_cost += i * k; 
    }

    int borrowed = total_cost - n;
    if (borrowed < 0) {
        borrowed = 0;
    }

    cout << borrowed;

    return 0;
}