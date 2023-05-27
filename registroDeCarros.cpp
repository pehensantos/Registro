#include <iostream>
#include <vector>
#include <cstring>
#include <locale.h>

using namespace std;

struct vetCar{                         //Declaração do conteúdo do regstro.
	char modelo[10], cor[10], placa[10];
	int ano;
}


int main(){                            
	setlocale(LC_ALL,"");              //Ajusta o programa ao "encoding" do console.  <locale.h>
	
	vector<vetCar> carros(2);        //Atribuição do conteúdo do registro ao vetor "carros".
	int i=0;
	
	for(i=0; i<2; i++){                //Entrada de dados do vetor.
		cin>>carros[i].modelo;
		cin>>carros[i].cor;
		cin>>carros[i].placa;
		cin>>carros[i].ano;
		cout<<"\n";
	}
	for(i=0; i<2; i++){                //Saída de dados do vetor.
		cout<<"Carro do vetor, posição "<< i<<":"<<endl;
		cout<<"modelo:";
		cout<<carros[i].modelo<<endl; 
		cout<<"cor:";
		cout<<carros[i].cor<<endl;
		cout<<"placa:";
		cout<<carros[i].placa<<endl;
		cout<<"ano:";
		cout<<carros[i].ano<<endl;
		cout<<"\n";
	}
	for(i=0; i<2; i++){                                 //Retorna os carros vermelhos do vetor.
		if (strcmp(carros[i].cor, "vermelho") == 0){    //Compara a string ao valor da variável. <cstring>
			cout<<"Carro vermelho:"<<endl;
			cout<<"modelo:";
			cout<<carros[i].modelo<<endl;
			cout<<"placa:";
			cout<<carros[i].placa<<endl;
			cout<<"ano:";
			cout<<carros[i].ano<<endl;
			cout<<"\n";
		}
}
	
	return 0;
}
