#include <iostream>
using namespace std;

int main(){

int n, a=1, b=1, c;

cout << "Escolha qual termo voce quer descobrir: ";
cin >> n;

while (n<1){
    cout << "Escolha um termo maior que 0 (zero): ";
    cin >> n;
}

if(n==1){
    cout << n;

}else if(n==2){
    cout << "1 1";

}else if(n>2){

    cout << "1 1 ";

    for (int i = 2; i < n; i++){
        c=a+b;
        a=b;
        b=c;
        cout << c << " ";
    }
}

}