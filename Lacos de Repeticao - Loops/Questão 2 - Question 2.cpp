#include <iostream>
using namespace std;

int main(){

int n, somaDivisores=0;

cout << "Escolha um numero para verificar se eh perfeito: ";
cin >> n;

while (n<=1){
    cout << "Escolha um numero maior que 1: ";
    cin >> n;
}

for(int i=1; i<n; i++){
    if(n%i==0){
        cout << i << " eh um divisor de " << n << endl;
        somaDivisores += i;
    }
}

cout << "A soma dos divisores eh: " << somaDivisores << endl;

if (n == somaDivisores){
    cout << n << " eh um numero perfeito!" << endl;
}else{
    cout << n << " nao eh um numero perfeito!" << endl;
}

}