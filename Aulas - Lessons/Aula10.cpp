#include <iostream>
#include <locale.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

int tamanho, soma=0, pares=0, impares=0,maiorNum=0,escolha, posicao=0;
double media=0;

cout << "Quantas idades voce vai declarar?" << endl;
cin >> tamanho;

int idades [tamanho];

for (int i = 0; i < tamanho; i++){
    cout << "Qual a " << i+1 << "º idade? ";
    cin >> idades[i];

    soma += idades[i];

        if (idades[i]%2==0){
            pares++;
        }else {
            impares++;
        }
        
        
        if (idades[i]>maiorNum){
            maiorNum = idades[i];
        }
        
}

media = soma/tamanho;

for (int i = 0; i < tamanho; i++){
    cout << idades[i] << endl;
}

bool achouValor=false;

do{
cout << "Qual idade voce quer descobrir a posicao? ";
cin >> escolha;

for (int i = 0; i < tamanho; i++){
    if (escolha==idades[i]){
        achouValor = true;
    }
}

}while (!achouValor);


for (int i = 0; i < tamanho; i++){
    posicao++;
    if (escolha==idades[i]){
        cout << "A idade esta na " << posicao << "º posicao" << endl;
    }
}


cout << "A soma das idades eh: " << soma << endl;
cout << "A media das idades eh: " << media << endl;
cout << "Tem " << pares << " pares nas idades mencionadas" << endl;
cout << "Tem " << impares << " impares nas idades mencionadas" << endl;
cout << "A maior idade eh: " << maiorNum << endl;

cout << "------------------------------------------------------" << endl;






}