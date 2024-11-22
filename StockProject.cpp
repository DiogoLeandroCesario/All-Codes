#include <iostream>
using namespace std;

struct Baixa{
    string codigo;
    int quantidade; 
    string pessoa;
    string setor;
};

Baixa baixas[1000];

struct Produto{
    string codigo;
    string nome;
    string quantidade;
    string endereco;
};

int main(){

int escolha, contadorBaixas = 0;


for (int i = 0; i < 1000; i++){
    baixas[i].codigo = " ";
    baixas[i].quantidade = 0;
    baixas[i].pessoa = " ";
    baixas[i].setor = " ";
}

Produto produtos[10] = {
        {"61.05.001", "Parafuso Phillips M5x20", "150", "A5"},
        {"61.05.002", "Porca Sextavada M6", "200", "B12"},
        {"61.05.003", "Arruela Lisa 12mm", "300", "C14"},
        {"61.05.004", "Bucha de Nylon 8mm", "120", "D7"},
        {"61.05.005", "Fita Isolante 19mm x 20m", "50", "E3"},
        {"61.05.006", "Abracadeira de Nylon 200mm", "180", "F9"},
        {"61.05.007", "Conector Eletrico 2 pinos", "75", "G11"},
        {"61.05.008", "Lampada LED 9W Bivolt", "90", "H6"},
        {"61.05.009", "Interruptor de Tecla Simples", "60", "I13"},
        {"61.05.010", "Extensao Eletrica 5m", "40", "J2"}
    };

cout << endl << "-------------------------------------" << endl << endl 
     << "      Bem vindo ao Menu VentyX      " << endl
     << " Um menu de Administracao de estoque " << endl << endl
     << "-------------------------------------" << endl;

do{

    do{
    cout << endl << "--- Menu VentyX ---" << endl
        << "1 - Registrar baixa" << endl
        << "2 - Verificar estoque" << endl
        << "3 - Baixas Pendentes" << endl
        << "0 - Sair" << endl
        << "Escolha uma opcao: ";
        cin >> escolha;
    }while (escolha<0 || escolha>3);

    if (escolha==1){

        string codigo, pessoa, setor;
        int quantidade;
        
        cout << "Qual o codigo do produto? ";
        cin >> codigo;

        bool produtoEncontrado = false;
        
        for (int i = 0; i < 10; i++){
            if (produtos[i].codigo == codigo){
                produtoEncontrado = true;
                break;
            }
        }
            
        if (!produtoEncontrado){
            cout << endl << "Produto nao encontrado!" << endl;
            continue;
        }

        cout << "Qual a quantidade pegada? ";
        cin >> quantidade;

        if (quantidade <= 0) {
            cout << "Quantidade invalida! Escolha uma Quantidade maior que zero!" << endl;
            continue;
        }

        cout << "Quem pegou o produto? ";
        cin >> pessoa;

        cout << "Qual o destino/setor? ";
        cin >> setor;

        baixas[contadorBaixas].codigo = codigo;
        baixas[contadorBaixas].quantidade = quantidade;
        baixas[contadorBaixas].pessoa = pessoa;
        baixas[contadorBaixas].setor = setor;

        contadorBaixas++;

    } else if (escolha==2){

        cout << endl;

        for (int i = 0; i < 10; i++){
            cout << "Codigo: " << produtos[i].codigo
                 << " | Descricao: " << produtos[i].nome
                 << " | Quantidade: " << produtos[i].quantidade
                 << " | Endereco: " << produtos[i].endereco << endl;
        }

    } else if (escolha==3){
        int subEscolha;

        do{
        cout << endl << "--- Menu de Baixas Pendentes ---" << endl
            << "1 - Confirmar e Salvar Baixas" << endl
            << "2 - Alterar Baixa Pendente" << endl
            << "3 - Somente Vizualizar" << endl
            << "0 - Voltar ao Inicio" << endl
            << "Escolha uma opcao: ";
            cin >> subEscolha;
        }while (subEscolha<0 || subEscolha>3);

        do {
            if (subEscolha == 1) {
                cout << endl;
                for (int i = 0; i < contadorBaixas; i++){
                    for (int j = 0; j < 10; j++){
                        if (produtos[j].codigo == baixas[i].codigo){
                            if (stoi(produtos[j].quantidade) >= baixas[i].quantidade){
                                int quantidadeInt;
                                quantidadeInt = stoi(produtos[j].quantidade) - baixas[i].quantidade;

                                produtos[j].quantidade = to_string(quantidadeInt);

                                cout << "Baixa confirmada: " << baixas[i].quantidade
                                    << " unidades de " << produtos[j].nome << endl;

                            }else{

                                cout << "Erro: Estoque insuficiente para o produto "
                                     << produtos[j].nome << endl;

                            }

                            break;
                        }
                    }
                }

                contadorBaixas = 0; // Limpa as baixas pendentes
                break;

            }else if (subEscolha == 2){
                
                cout << endl << "-\\/- Baixas Pendentes -\\/-" << endl;

                for (int i = 0; i < contadorBaixas; i++){

                    cout << i+1 << " -"
                        << " | Codigo: " << baixas[i].codigo
                        << " | Descricao: " << baixas[i].quantidade
                        << " | Quantidade: " << baixas[i].pessoa
                        << " | Endereco: " << baixas[i].setor << endl;
                    
                }

                int indiceBaixa;

                cout << "Selecione o numero da baixa que deseja alterar: ";
                cin >> indiceBaixa;
                indiceBaixa--;
                
                if (indiceBaixa >= 0 && indiceBaixa < contadorBaixas){
                    int novaQuantidade;
                    string novaPessoa, novoSetor;

                    cout << "Digite a nova quantidade: ";
                    cin >> novaQuantidade;

                    if (novaQuantidade <= 0){
                        cout << endl << "Quantidade invalida! Escolha uma Quantidade maior que zero!" << endl;
                        break;
                    }else{

                        cout << "Digite quem pegou o produto: ";
                        cin >> novaPessoa;

                        cout << "Digite qual o destino/setor: ";
                        cin >> novoSetor;

                        baixas[indiceBaixa].pessoa = novaPessoa;
                        baixas[indiceBaixa].setor = novoSetor;
                        baixas[indiceBaixa].quantidade = novaQuantidade;
                        cout << endl << "Baixa pendente alterada com sucesso!" << endl;

                        break;
                    }

                }else{
                    cout << endl << "Numero de baixa invalido!" << endl;
                    break;
                }

            }else if (subEscolha == 3){

                cout << endl << "-\\/- Baixas Pendentes -\\/-" << endl;

                for (int i = 0; i < contadorBaixas; i++){

                    cout << i+1 << " -"
                        << " | Codigo: " << baixas[i].codigo
                        << " | Descricao: " << baixas[i].quantidade
                        << " | Quantidade: " << baixas[i].pessoa
                        << " | Endereco: " << baixas[i].setor << endl;
                    
                }

                break;

            }
            
        } while (subEscolha != 0);

    }

} while (escolha!=0);

}