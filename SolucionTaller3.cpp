#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <math.h>

using namespace std;

main (){

// Variables de menu principal
int opc1=0;

	do{
		// Variables de sumatoria de cuadrados
		int iC=1, suma=0, cuadrado=0;
			
		// Variables de numero fibonacci
		int iF=1, a=1, b=1, c=0;
					
		// Variables de nota definitiva
		double nota1, nota2, nota3, promedio;
		
		// Variables Sucesion
		int iS=1, sumaS=0, potencia=1, nS=0;
		
		// Variables de salir
		int opc2=0;
		
		cout << "\n\n                           .: TALLER No. 3 :.                           ";
		cout << "\n                   .: DANIEL ALBERTO SALAZAR ERAZO :.                           \n\n";
		cout << "1 Sumatoria de los cuadrados de los 100 primeros numeros.\n";
		cout << "2 Sucesion Fibonacci de los primeros 25 digitos.\n";
		cout << "3 Calcular nota definitiva.\n";
		cout << "4 Suma de sucesion de los n numeros.\n";
		cout << "5 Salir.\n\n";
		cout << "Ingrese el numero de la opcion: ";
		cin >> opc1;
		cout << "\n";

			switch(opc1){

				case 1:
					// Sumatoria de cuadrados
					cout << "SUMA DE CUADRADOS\n\n";
						while(iC <= 100){
							cuadrado = iC * iC;
							suma += cuadrado;
							cout << cuadrado << " ";
							iC++;
						}
					cout << "\n\nLa suma de los primeros 100 numeros cuadrados es: " << suma << endl;
					break;

				case 2:
					// Numero Fibonacci	
					cout << "FIBONACCI\n\n";
					cout << "Serie Fibonacci de los primeros 25 digitos: \n" << "0";
						while(iF<25){
						cout << " " << a ; 
						iF++;
						c=a+b;
						a=b;
						b=c;
						}
					break;

				case 3:
					// Nota definitiva
						cout << "NOTA DEFINITIVA\n";
						// Pregunta Nota 1
						do{
							cout << "\nIngrese la nota 1: ";
							cin >> nota1;
						}while(nota1 <= 0 || nota1 >= 6);
						
						// Pregunta Nota 2
						do{
							cout << "\nIngrese la nota 2: ";
							cin >> nota2;
						}while(nota2 <= 0 || nota2 >= 6);
						
						// Pregunta Nota 3
						do{
							cout << "\nIngrese la nota 3: ";
							cin >> nota3;
						}while(nota3 <= 0 || nota3 >= 6);
						
						// Imprime las notas ingresadas
						cout << "\nNota 1: " << nota1 << " Nota 2: " << nota2 << " Nota 3: " << nota3 << endl;
						
						// Calcula promedio
						promedio = (nota1 + nota2 + nota3)/3;	
						
						
						// Imprime nota mayor
						if(nota1 >= nota2 && nota1 >= nota3){
							cout << "\nDefinitiva mayor: " << nota1 << endl;
						}
						else if (nota2 > nota3) {
							cout << "\nDefinitiva mayor: " << nota2 << endl;
						}
						else {
							cout << "\nDefinitiva mayor: " << nota3 << endl;
						}
						
						// Imprime nota menor
						if(nota1 <= nota2 && nota1 <= nota3){
							cout << "\nDefinitiva menor: " << nota1 << endl;
						}
						else if (nota2 < nota3) {
							cout << "\nDefinitiva menor: " << nota2 << endl;
						}
						else {
							cout << "\nDefinitiva menor: " << nota3 << endl;
						}
						
						// Imprime el promedio
						cout << "\nPromedio: " << promedio << endl;
					break;

				case 4:
					// Sucesion
					cout << "SUCESION\n";
					cout << "\nIngrese el numero de la sucesion: ";
					cin >> nS;
					cout << "\nSucesion:\n";
						while(iS <= nS){
							potencia = pow (iS , iS);
							sumaS += potencia;
							cout << " " << potencia;
							iS++;
						}
					cout << "\n\nLa suma de la sucesion de "<< nS <<" es:";
					cout << " " << sumaS ;					
					break;

				case 5:
					// Salir
					cout << "Seguro que desea salir ...?\n";
					cout << "\n1 SI";
					cout << "\n2 NO";
					cout << "\n\nIngrese el numero de la opcion: ";
					cin >> opc2;
						if(opc2==1){
						return 0;
						}
						else {
						return main();
						}
					break;

				default:
						return main();
					break;
			} 
		} while (opc1 != 5);

	system("pause");
}
