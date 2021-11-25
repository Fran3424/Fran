#pragma once
#include <time.h>
#include <iostream>
#include "Funciones.h"
#include <stdlib.h>
#include "Estructura.h"
#include <algorithm>
#include <vector>
using namespace std;

void llenarbaraja(cartas bar[56]) { //lenar bara se lleva por parametro el arreglo de estructura
	char corazon = 3; // se declara una variable para los corazones
	char trebol = 5; // se declara una variable para los treboles
	char diamante = 4; // se declara una variable para los diamantes
	char espada = 6; // se declara una variable para las espadas
	int reiniciador = 1; // reiniciador para sacar numeros de 1 a 13 
	for (int i = 0; i < 14; i++) // del cero al 13 se llenaran los corazones
	{
		bar[i].numero = reiniciador++; // se utiliza el reiniciador para que no pase de 13 los numeros
		bar[i].palo = corazon; // en ese rango se ponen corazones
		bar[10].palo = "J \3";
		bar[10].numero = 10;
		bar[11].palo = "k \3";
		bar[11].numero = 10;
		bar[12].palo = "Q \3";
		bar[12].numero = 10;
		bar[13].palo = "AS \3";
		bar[13].numero = 11;

	}

	reiniciador = 1; // se reinicia el reiniciador en 1
	for (int i = 14; i < 28; i++) // del 13 al 26 se llenaran los treboles
	{
		bar[i].numero = reiniciador++; // se utiliza el reiniciador para que no pase de 13 los numeros
		bar[i].palo = trebol; // en ese rango se ponen corazones
		bar[24].palo = "J \5";
		bar[24].numero = 10;
		bar[25].palo = "k \5";
		bar[25].numero = 10;
		bar[26].palo = "Q \5";
		bar[26].numero = 10;
		bar[27].palo = "AS \5";
		bar[27].numero = 11;

	}
	reiniciador = 1; // se reinicia el reiniciador
	for (int i = 28; i < 42; i++) // del 26 al 39 se llenaran los diamantes

	{
		bar[i].numero = reiniciador++; // se utiliza el reiniciador para que no pase de 13 los numeros
		bar[i].palo = diamante; // en ese rango se ponen corazones
		bar[38].palo = "J \4";
		bar[38].numero = 10;
		bar[39].palo = "k \4";
		bar[39].numero = 10;
		bar[40].palo = "Q \4";
		bar[40].numero = 10;
		bar[41].palo = "AS \4";
		bar[41].numero = 11;
	}

	reiniciador = 1; // se reinicia el reiniciador en 1
	for (int i = 42; i < 55; i++) // del 39 al 52 se llenaran las espadas

	{
		bar[i].numero = reiniciador++; // se utiliza el reiniciador para que no pase de 13 los numeros
		bar[i].palo = espada; // en ese rango se ponen las espadas
		bar[52].palo = "J \6";
		bar[52].numero = 10;
		bar[53].palo = "k \6";
		bar[53].numero = 10;
		bar[54].palo = "Q \6";
		bar[54].numero = 10;
		bar[55].palo = "AS \6";
		bar[55].numero = 11;

	}

}

int  sacarcarta(cartas bar[56], cartas repetido[56]) {
	srand(time(NULL));
	int cart;
	bool repitio1 = false;
	bool repitio2 = false;
	do {

		cart = 1 + rand() % (55 - 1);


	} while (repetido[cart].numero == bar[cart].numero && repetido[cart].palo == bar[cart].palo);

	if ( repitio1==false) {
		
		repetido[cart].numero = bar[cart].numero;
		repetido[cart].palo = bar[cart].palo;
		
	}


	for (int i = 0; i < 1; i++) {
		{
			system("cls");
			cout << "[";
			cout << bar[cart].numero;
			cout << bar[cart].palo;
			cout << "]";
			cout << "\n";
			system("pause");
		}

	}
  
	cart = bar[cart].numero;
	return cart;

}
	
int calcularpuntaje(int cart, int &punts,cartas bar[56]) {
	punts = cart + punts;
	if (cart == 11 && punts > 21) {
		cart = 1;
		punts = (punts + cart) - 11;
	}
	return punts;

}
	
bool continuarjugando(int cont, bool& termino) {
	if (cont==2)
	{
		termino = true;
	}

	return termino;
}
	
