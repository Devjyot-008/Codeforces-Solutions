#include <iostream>
using namespace std ;
int main (){
    int t ;
    cin >> t ;
    while (t--){
        string str ;
        cin >> str ;
        string first_half , second_half ;
        if (str.length()%2 == 0){
            first_half = str.substr(0, str.length()/2);
            second_half = str.substr(str.length()/2, str.length());

            if (first_half == second_half){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl ;
            }
        } else {
            cout << "NO" << endl ;
        }
    }
}