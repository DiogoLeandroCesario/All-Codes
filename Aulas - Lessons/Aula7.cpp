#include <iostream>
using namespace std;

int main(){

    /*cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    cout << "4" << endl;
    cout << "5" << endl;
    cout << "6" << endl;
    cout << "7" << endl;
    cout << "8" << endl;
    cout << "9" << endl;
    cout << "10" << endl;*/

    /*int n, num = 1;
    cout << "Escolha um numero:";
    cin >> n;
    while (num<=n){
        cout << num << endl;
        num = num + 1;
    }*/
    
    double preco, soma = 0;
    int n, i=1;

    cout << "Digite o numero de produtos: ";
    cin >> n;

    while (i<=n){
        cout << "Qual o preco do produto " << i << ": ";
        cin >> preco;

        soma = soma + preco;
        i++;
    }
    
    cout << "A soma dos precos eh: " << soma;










}