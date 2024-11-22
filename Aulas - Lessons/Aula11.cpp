#include <iostream>
#include <locale.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

string jogo[3][3] = {{"-","-","-"},
                     {"-","-","-"},
                     {"-","-","-"}};


cout << "  1 2 3" << endl;
for (int i = 0; i < 3; i++){
    cout << i+1 << " ";
    for (int j = 0; j < 3; j++){
        cout << jogo[i][j];
        if (i!=0 && j!=2 || i!=1 && j!=2 || i!=2 && j!=2){
            cout << "|";
        }
    }
    cout << endl;
}

int linha, coluna;
bool escolhaValida;

do{
escolhaValida = true;

cout << "Escolha a linha para jogar: ";
cin >> linha;

cout << "Escolha a coluna para jogar: ";
cin >> coluna;

linha--;
coluna--;

if (linha<0 || linha>3 || coluna<0 || coluna>3 || jogo[linha][coluna] != "-"){
    escolhaValida = false;
}


}while (!escolhaValida);







}