#include <stdio.h> 

#define MAX_Stack 50
	
int indice = 0;

void push( int vec[MAX_Stack], int num){

	vec[indice] = num;

	indice++;
}

int pop(int vec[MAX_Stack]){

	int return_pop = 0;

	if(indice == 0){
		printf("Operação não pode ser concluida\n");
	} 
else{
	
	return_pop = vec[indice];

	indice--;
	}

	return return_pop; 
}

void ImprimeStack( int vec[MAX_Stack]){

	int i;

	for (i = indice -1; i >= 0; --i)
	{
		printf("%d\n", vec[i]);
	}
}

int main(int argc, char const *argv[])
{
	int vec[MAX_Stack];

	int valores, i =0;

	printf("Digite os valores para serem armazenados na pilha, até que zero seja lido:\n");

	scanf("%d", &valores);

	while(valores != 0){

		if(valores != 0){
		
		push(vec, valores);
		}

		scanf("%d", &valores);
	}

	ImprimeStack(vec);

	

}