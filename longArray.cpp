#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

//Función para conocer la longitud de un array de enteros
//se pasa como parámetro el espacio en memoria del array
//el array en sí mismo.
int len(int arraySize) {
	const int memoryWeight = 4;
	int length;
	
	length = arraySize / memoryWeight;
	return length;
}

//Función para conocer la longitud de un array de decimales
//se pasa como parámetro el espacio en memoria del array. No
//el array en sí mismo.
int fLen(float arraySize) {
	const int memoryWeight = 4;
	int length;
	
	length = arraySize / memoryWeight;
	return length;
}

int main() {
	printf("--- Array lengths program ---");
	int numbers[] = {10, 20, 30};
	float numbers1[] = {10.5, 20.56, 9.99, 10.5};
	char names[20][100] = {"Matias", "Pablo", "Martin", "Gucci", "Brad"};
	int suma = 0;
	float suma1 = 0;
	int charsCont = 0;
	
	//Conocer longitud de un array de strings.
	//mientras la longitud de cada string no 
	//sea nula, el mismo será contado. De lo
	//contrario siginifica que ya no hay más
	//strings para contar.
	while(true) {
		if(strlen(names[charsCont]) != 0) {
			charsCont++;
		} else {
			break;
		}
	}
	
	printf("\n\nLongitud de numbers: %i", len(sizeof(numbers)));
	printf("\nLongitud de numbers1: %i", fLen(sizeof(numbers1)));
	printf("\nLongitud de names: %i", charsCont);
	
	return 0;
}
