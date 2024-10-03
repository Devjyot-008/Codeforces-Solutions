#include <iostream>
using namespace std;
int main() {
    int limak_weight , bob_weight ;
    cin >> limak_weight >> bob_weight ;

    int years =0 ;
     
    while (limak_weight <= bob_weight){
       limak_weight*=3;
       bob_weight*=2;
       years++;
    } 
    cout << years; 
    return 0;
}
    