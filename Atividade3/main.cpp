#include <iostream>
using namespace std;

int qum(){
	int numeros[10];
	for(int i = 9; i>=0; i--){
		cout << "Digite o " << 10-i << " numero: ";
		cin >> numeros[i];
	}
	for(int i = 0; i < 10; i++){
		cout << numeros[i] << " ";
	}
	return 0;
}

int qdois(){
	int numeros[5];
	int soma, subtracao;
	float divisao;
	for(int i = 0; i<5; i++){
		cout << "Digite o " << i+1 << " numero: ";
		cin >> numeros[i];
	}
	for(int i = 0; i<5; i++){
		if(i == 0){
			subtracao = numeros[i];
			soma = numeros[i];
			divisao = numeros[i];
		}else{
			soma += numeros[i];
			subtracao -= numeros[i];
			divisao /= numeros[i];
		}
	}
	cout << "Soma: " << soma << endl;
	cout << "Subtracao: " << subtracao << endl;
	cout << "Divisao: " << divisao << endl;
	return 0;
}

int qtres(){
	char caracteres[10];
	int consoantes = 0;
	for(int i=0; i<10; i++){
		cout << "Digite uma letra: ";
		cin >> caracteres[i];
		if(tolower(caracteres[i]) != 'a' && tolower(caracteres[i]) != 'e' && tolower(caracteres[i]) != 'i'
		&& tolower(caracteres[i]) != 'o' && tolower(caracteres[i]) != 'u'  ){
		consoantes ++;
		}
	}
	cout << "Numero de consoantes digitadas: " << consoantes;
	return 0;
}
int main() {
	int questao;
	do{
		cout << "Qual questao deseja exibir? ";
		cin >> questao;
	}while(questao<=0 || questao > 3);
	switch(questao){
		case 1:
			qum();
			break;
		case 2:
			qdois();
			break;
		case 3:
			qtres();
			break;
	}
	
}
