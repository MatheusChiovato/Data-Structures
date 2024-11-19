#include <stdio.h>
#include <string.h>

struct Aluno{
		char nome[30];
		char sobrenome[30];
		int idade;	
		char turma[15];	
		float nSim1; //simulados valem 5
		float nSim2;
		float nPm;   //provas valem 10
		float nPb;
		float notaFinal;
};

int main(){
			
	struct Aluno pedro;
	
	pedro.nSim1=3.0;
	pedro.nSim2=4.0;
	pedro.nPm=8.0;
	pedro.nPb=7.0;
	
	pedro.notaFinal = calcularNota(pedro);
	
	
	
	return 0;
}

float calcularNota(struct Aluno aluno){
	return aluno.nSim1+aluno.nSim2+aluno.nPm+aluno.nPb;
}

