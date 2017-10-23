#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Necessária para fazer operações com strings

#define STRING_SIZE 100

/*
*  Uma string é na verdade um array de caracteres (Ex: "Hello World" -> ['H','e','l','l','o',' ','W','o','r','l','d','\o'] )
*  OBS: Ao final de toda string existe um carater especial '\o' que indica o fim da string
*/
int main(int argc,char** argv)
{
	//Receber uma string( mesmo com espaços ) como input
	char string_buffer[STRING_SIZE];
	fgets( string_buffer, //Ponteiro onde a string será escrta
	       STRING_SIZE, //Tamanho permitido de escrita (Importante :  é preciso que a memória esteja alocada )
	       stdin //Meio por onde se receberá os dados ( standard input -> stdin )
	);
	
	//Exibir uma string
	printf("%s \n" , string_buffer );

	//Calcular tamanho da string
	size_t string_size = strlen(string_buffer);
	printf("String Size: %d\n",string_size);
	//Copiar uma string em outra variavel
	char *other_string = (char*) calloc(STRING_SIZE,sizeof(char)); //Alocando espaço na memória de tamanho (STRING_SIZE * tamanho em bytes de um char)
	strcpy( other_string, string_buffer ); //Copiando valor de string_buffer em other_string 
	
	//Verificando igualdade entre strings
	if( strcmp(other_string,string_buffer )  == 0 )
	{
		printf("Iguais\n");
	}else{
		printf("Diferentes\n");
	}
	
	//Concatenando strings
	const char *hello_string = "Hello ";
	const char *world_string = "World";
	char concat_string[50];
	strcat(concat_string,hello_string);
	strcat(concat_string,world_string);
	printf("%s \n",concat_string);
	return 0;
}
