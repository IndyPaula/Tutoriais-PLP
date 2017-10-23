#include <stdio.h>
#include <stdlib.h>

// Alterar o valor de uma variável definido no escopo main usando ponteiro
void change_value_using_pointer(int *old_value)
{
	*old_value = 10;
}

/*
* Ponteiros são valores correspondentes a determinado endereço de memória ao qual uma variavel ocupa/
*/
int main(int argc,char** argv)
{
	int value = 10;
	int* p_value = &value; // & -> retornar o endereço de determinada variavel | * indica que (p_value) é um ponteiro do tipo int
	int another_var_same_value = *p_value; // Ao usar novamente a notação '*' em um ponteiro, recebemos o valor naquele endereço

	int values[10]; //values é um ponteiro que aponta para o primeiro elemento de uma sequencia consecutiva de inteiros na memória
	for(int i = 0 ; i < 10;i++)
	{
		values[i] = i;
	}

	// Percorrendo a lista com ponteiros
	for(int *pointer_to_array = values; pointer_to_array < (values + 10) ; pointer_to_array++)
	{
		printf("%d\n ",*pointer_to_array); //Exibindo cada elemento no array
	}

	//Alterando o valor de uma variavel em um escopo de função
	int old_value = 80;
	printf("Old Value : %d\n", old_value);
	change_value_using_pointer(&old_value);
	printf("New Value : %d\n",old_value);
	return 0;
}
