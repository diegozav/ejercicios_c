
#include <stdio.h>
#include <string.h>
#include <ctype.h>


//Fes un programa en C que mostra un menú per pantalla 
//per saber què s'ha de fer amb una frase que es llegirà a continuació.
// El menú té tres opcions: 
//  (1) passar la frase a majúscules, 
//  (2) passar-la a minúscula, 
//  (0) sortir i acabar el programa. 

void printMenu(){
	printf("Selecciona una opción\n");
    printf("(1) passar la frase a majúscules\n");
    printf("(2) passar-la a minúscula\n");
    printf("(0) sortir i acabar el programa\n\n");

}

void toUpperCase(char text[50]){
	int i = 0;
	int length = strlen(text);
	for (i = 0; i < length; i++) {
		printf("%c", toupper(text[i]));
	}
	printf("\n\n");
}



//1. Crear función toUpperCase()
//2. Crear función toLowerCase() tolower()
//3. Crear bucle while y opción para salir del programa

int main () {
	int option = -1;
	char text[50];

	while (option != 0) {
		printMenu();
		scanf("%d", &option);
		printf("Introduce texto\n");
		gets(text);

		if (option == 1) { //mayusculas 
			toUpperCase(text);
		}
		else if (option == 2) { //minusculas
			//toLowerCase(text);
		}

	}

    return 1;
}





