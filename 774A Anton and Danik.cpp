#include <iostream>
using namespace std;

int main (){

    int n ;
    cin >> n ;
    int anton_ = 0 ;
    int danik_ = 0 ;

    char str[n] ;
    for (int i=0; i<n; i++){
        cin >> str[i] ;
    }

    for (int i=0; i<n; i++){
        if (str[i] == 'A'){
            anton_++;
        } else {
            danik_++;
        }
    }
    if (anton_ > danik_){
        cout << "Anton" ;
    } else if (danik_ > anton_){
        cout << "Danik" ;
    } else {
        cout << "Friendship" ;
    }

    return 0;
}