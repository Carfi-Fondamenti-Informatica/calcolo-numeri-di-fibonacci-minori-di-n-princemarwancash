#include <iostream>
using namespace std;
int main(){
    int num1=0;
    int num2=1;
    int risultato=0;
    int i=0;
    int n=0;
    cin >> n ;
    cout << 1 << endl;
    for (i = 0; i<=n ; i++) {
        risultato = num1 + num2;
        cout << risultato << endl;
        num1 = num2;
        num2 = risultato;
    }
    return 0;
}
