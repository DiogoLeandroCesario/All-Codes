#include <iostream>
using namespace std;

int main(){

/*
    int idade;

    cout << "Informe sua idade" << endl;
    cin >> idade;

    if (idade<16){
        cout << "nao pode votar...";

    }else if (idade >= 16 && idade <= 17 || idade >= 70){
        cout << "voto facultativo...";

    }else{
        cout << "voto obrigatorio!";
    }

    string doenca, idosa;

    cout << "Voce e idoso?" << endl << "sim ou nao" << endl;
    cin >> idosa;

    cout << "Voce tem doenca?" << endl << "sim ou nao" << endl;
    cin >> doenca;


    if (idosa == "sim" || doenca == "sim"){
        cout << "Voce tem direito ao beneficio!";

    }else{
        cout << "Voce nao tem direito!";
    }
*/

    int idade; string sabeLer, sabeEscrever, temCPF;

    cout << "qual a sua idade?" << endl;
    cin >> idade;

    cout << "voce sabe ler? (sim/nao)" << endl;
    cin >> sabeLer;

    cout << "voce sabe escrever? (sim/nao)" << endl;
    cin >> sabeEscrever;

    cout << "voce tem CPF? (sim/nao)" << endl;
    cin >> temCPF;

    if (idade >= 18 && sabeLer == "sim" && sabeEscrever == "sim" && temCPF == "sim"){
        cout << "Pague 5k pra fazer a CNH!!!";

    }else {
        cout << "some!!!";
    }
    

}