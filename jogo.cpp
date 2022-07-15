#include <iostream>
#include <cstdlib> /*para usar a funçao rand*/
#include <ctime>/*para usar a função time... biblioteca mantem todas as datas e horas desde 1970, e continua mutavel.*/

/*chcp 65001 no prompt para corrigir acentuação*/

using namespace std;

int main (){

    cout << "************************" << endl;
    cout << "Bem-vindos ao jogo da adivinhação" << endl;
    cout << "************************" << endl;

    cout << "Escolha seu nível de dificuldade: " << endl;
    cout << "Fácil (F), Médio (M), Difícil (D) " << endl;

     char dificuldade;
     cin >> dificuldade; /* cin recebe o valor da variavel*/
      
      int numero_de_tentativas;
        if(dificuldade == 'F'){
            numero_de_tentativas = 15;
        }
        else if(dificuldade='M'){
            numero_de_tentativas=10;
        }
        else{
            numero_de_tentativas=5;
        }

        srand(time(NULL));/*NULL ou 0*/
        const int NUMERO_SECRETO=rand() % 100; /*rand devolve um numero infinito, usar % 100 para somar o resto.*/
        /*Para que o valor do número secreto variasse entre as execuções do nosso jogo, usamos as funções srand() e rand().

        A primeira serve pra determinar a semente que vai ser usada na hora de gerar os valores pseudo-aleatórios do nosso programa, e a segunda para retornar um valor aleatório.

    Escreva o trecho que usamos no nosso jogo para fazer o sorteio de um número aleatório entre 0 e 99 usando essas funções*/

        bool nao_acertou = true;
        int tentativas = 0;

        double pontos = 1000.0; 

    for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++){

        int chute;
       cout << "tentativa" << tentativas << endl;
       cout << "Qual o seu chute?";
       cin >> chute;

       double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
       pontos = pontos-pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;
        cout << "O valor do seu chute é: " << chute << endl;
       
       if(acertou){
        cout << "Parabéns! Você acertou o número secreto!" << endl;
        nao_acertou = false;
        break;
       }
       else if(maior){
        cout << "Seu chute foi maior que o número secreto!" << endl;
       }
       else{
        cout << "Seu chute foi menor que o nùmero secreto!" << endl;
       }
    }
        
        
    
    cout << "Fim de jogo" << endl;
    if(nao_acertou)
    {
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else{
        cout << "Você acertou em " << tentativas << "tentativas" << endl;
        /*Para lidar com valores financeiros: devemos escrever R$ 12,50, com duas casas depois da vírgula... Para isso usamos o .precision; para obter a precisão das duas casas decimais, e  << fixed para fixar o valor 0.00, ao invés de notação cientfica.*/
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
        cout << "valeu" << endl;
    }  
}