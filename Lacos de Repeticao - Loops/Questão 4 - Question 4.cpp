#include <iostream>
#include <ctime>
using namespace std;

int main(){

int copoA=0, copoB=0, copoC=0, escolha, nMovimentos, qualMovimento, movimentoAB, movimentoBC, movimentoAC;

cout << "Voce quer ser o embaralhador ou adivinhador?" << endl;
cout << "(1) - Embaralhador" << endl;
cout << "(2) - Adivinhador" << endl;
cin >> escolha;

while (escolha!=1 && escolha!=2){
    cout << endl << "Escolha uma opcao valida!" << endl;
    cout << "(1) - Embaralhador" << endl;
    cout << "(2) - Adivinhador" << endl;
    cin >> escolha;
}

if (escolha==1){
    cout << "-------------------------------------------------------" << endl;
    cout << "Voce escolheu ser o Embaralhador!" << endl;
    cout << "Escolha onde voce vai colocar a moeda" << endl;
    cout << "(1) - Copo A" << endl;
    cout << "(2) - Copo B" << endl;
    cout << "(3) - Copo C" << endl;
    cin >> escolha;

    while (escolha<1 || escolha>3){
    cout << endl << "Escolha uma opcao valida!" << endl;
    cout << "(1) - Copo A" << endl;
    cout << "(2) - Copo B" << endl;
    cout << "(3) - Copo C" << endl;
    cin >> escolha;
    }

    cout << "-------------------------------------------------------" << endl;
    
    if (escolha==1){
        copoA = 1;
        cout << "A moeda esta no Copo A" << endl;
    }else if (escolha==2){
        copoB = 1;
        cout << "A moeda esta no Copo B" << endl;
    }else if (escolha==3){
        copoC = 1;
        cout << "A moeda esta no Copo C" << endl;
    }
    
    cout << endl << "Quantos movimentos voce vai fazer? ";
    cin >> nMovimentos;

    for (int i = 1; i <= nMovimentos; i++){
        cout << endl << "Qual movimento voce ira fazer?" << endl;
        cout << "(1) - Trocar A e B" << endl;
        cout << "(2) - Trocar B e C" << endl;
        cout << "(3) - Trocar A e C" << endl;
        cin >> qualMovimento;

        while(qualMovimento<1 || qualMovimento>3){
        cout << endl << "Escolha uma opcao valida!" << endl;
        cout << "(1) - Trocar A e B" << endl;
        cout << "(2) - Trocar B e C" << endl;
        cout << "(3) - Trocar A e C" << endl;
        cin >> qualMovimento;
        }

        if (qualMovimento==1){
            movimentoAB = copoA;
            copoA = copoB;
            copoB = movimentoAB;
            movimentoAB = 0;

            cout << "Os copos A e B trocaram de lugar" << endl;
        }else if (qualMovimento==2){
            movimentoBC = copoB;
            copoB = copoC;
            copoC = movimentoBC;
            movimentoBC = 0;

            cout << "Os copos B e C trocaram de lugar" << endl;
        }else if (qualMovimento==3){
            movimentoAC = copoA;
            copoA = copoC;
            copoC = movimentoAC;
            movimentoAC = 0;

            cout << "Os copos A e C trocaram de lugar" << endl;
        }
    }
    
    cout << endl << "Agora chegou a hora de adivinhar onde esta a moeda!" << endl;
    cout << "Qual copo voce vai escolher para ver?" << endl;
    cout << "(1) - Copo A" << endl;
    cout << "(2) - Copo B" << endl;
    cout << "(3) - Copo C" << endl;
    cin >> escolha;

    while (escolha<1 || escolha>3){
    cout << endl << "Escolha uma opcao valida!" << endl;
    cout << "(1) - Copo A" << endl;
    cout << "(2) - Copo B" << endl;
    cout << "(3) - Copo C" << endl;
    cin >> escolha;
    }

    cout << endl;

    if (escolha==1 && copoA==1){
        cout << "Voce acertou!!" << endl;
    }else if (escolha==2 && copoB==1){
        cout << "Voce acertou!!" << endl;
    }else if (escolha==3 && copoC==1){
        cout << "Voce acertou!!" << endl;
    }else{
        cout << "Infelizmente voce errou :(" << endl;

        if (copoA == 1){
            cout << "A moeda estava no Copo A" << endl;
        }else if (copoB == 1){
            cout << "A moeda estava no Copo B" << endl;
        }else if (copoC == 1){
            cout << "A moeda estava no Copo C" << endl;
        }
    }
}else if (escolha==2){
    cout << "-------------------------------------------------------" << endl;
    cout << "Voce escolheu ser o Advinhador!" << endl;
    cout << "A moeda sera posicionada e os movimentos serao feitos!" << endl;
    cout << "Os movimentos que podem ser feitos sao:" << endl;
    cout << "Trocar A e B" << endl;
    cout << "Trocar B e C" << endl;
    cout << "Trocar A e C" << endl;
    cout << "-------------------------------------------------------" << endl;

    srand(time(0));
    escolha = rand()%3 + 1;
    
    if (escolha==1){
        copoA = 1;
        cout << "A moeda esta no Copo A" << endl;
    }else if (escolha==2){
        copoB = 1;
        cout << "A moeda esta no Copo B" << endl;
    }else if (escolha==3){
        copoC = 1;
        cout << "A moeda esta no Copo C" << endl;
    }

    nMovimentos = rand()%10 + 1;
    cout << "Sera(o) feito(s) " << nMovimentos << " movimento(s)" << endl << endl;

    for (int i = 1; i <= nMovimentos; i++){
        qualMovimento = rand()%3 + 1; 

        if (qualMovimento==1){
            movimentoAB = copoA;
            copoA = copoB;
            copoB = movimentoAB;
            movimentoAB = 0;

            cout << "Os copos A e B trocaram de lugar" << endl;
        }else if (qualMovimento==2){
            movimentoBC = copoB;
            copoB = copoC;
            copoC = movimentoBC;
            movimentoBC = 0;

            cout << "Os copos B e C trocaram de lugar" << endl;
        }else if (qualMovimento==3){
            movimentoAC = copoA;
            copoA = copoC;
            copoC = movimentoAC;
            movimentoAC = 0;

            cout << "Os copos A e C trocaram de lugar" << endl;
        }
    }

    cout << endl << "Agora chegou a hora de adivinhar onde esta a moeda!" << endl;
    cout << "Qual copo voce vai escolher para ver?" << endl;
    cout << "(1) - Copo A" << endl;
    cout << "(2) - Copo B" << endl;
    cout << "(3) - Copo C" << endl;
    cin >> escolha;

    while (escolha<1 || escolha>3){
    cout << "Escolha uma opcao valida!" << endl;
    cout << "(1) - Copo A" << endl;
    cout << "(2) - Copo B" << endl;
    cout << "(3) - Copo C" << endl;
    cin >> escolha;
    }

    cout << endl;

    if (escolha==1 && copoA==1){
        cout << "Voce acertou!!" << endl;
    }else if (escolha==2 && copoB==1){
        cout << "Voce acertou!!" << endl;
    }else if (escolha==3 && copoC==1){
        cout << "Voce acertou!!" << endl;
    }else{
        cout << "Infelizmente voce errou :(" << endl;

        if (copoA == 1){
            cout << "A moeda estava no Copo A" << endl;
        }else if (copoB == 1){
            cout << "A moeda estava no Copo B" << endl;
        }else if (copoC == 1){
            cout << "A moeda estava no Copo C" << endl;
        }
    }
}
}