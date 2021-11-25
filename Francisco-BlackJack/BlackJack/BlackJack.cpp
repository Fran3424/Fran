#include <time.h>
#include <iostream>
#include "Funciones.h"
#include <stdlib.h>
#include "Estructura.h"
#include <vector>
using namespace std;
int main()
{
	int carta = 0;
	int puntos1 = 0;
	int puntos2 = 0;
	int puntos3 = 0;
	bool gano = false;
	bool termino1 = false;
	bool termino2 = false;
	bool termino3 = false;
	int continuar = 0;
	llenarbaraja(baraja);
	//Jugador1***************************************************************************************************************	
	carta = sacarcarta(baraja, repetido);
	puntos1 = calcularpuntaje(carta, puntos1,baraja);
	cout << "puntaje del jugador 1:\t" << puntos1 << "\n";
	system("pause");
	system("cls");
	carta = sacarcarta(baraja, repetido);
	puntos1 = calcularpuntaje(carta, puntos1,baraja);
	cout << "puntaje del jugador 1:\t" << puntos1 << "\n";
	system("pause");
	//Jugador 2*****************************************************************************************************************
	system("cls");
	carta = sacarcarta(baraja, repetido);
	puntos2 = calcularpuntaje(carta, puntos2,baraja);
	cout << "puntaje del jugador 2:\t" << puntos2 << "\n";
	system("pause");
	system("cls");
	carta = sacarcarta(baraja, repetido);
	puntos2 = calcularpuntaje(carta, puntos2,baraja);
	cout << "puntaje del jugador 2:\t" << puntos2 << "\n";
	system("pause");
	//jugador 3******************************************************************************************************************
	system("cls");
	carta = sacarcarta(baraja, repetido);
	puntos3 = calcularpuntaje(carta, puntos3,baraja);
	cout << "puntaje del jugador 3:\t" << puntos3 << "\n";
	system("pause");
	system("cls");
	carta = sacarcarta(baraja, repetido);
	puntos3 = calcularpuntaje(carta, puntos3,baraja);
	cout << "puntaje del jugador 3:\t" << puntos3 << "\n";
	system("pause");

	if (puntos1 == 21 ) {
		gano = true;
	}

	if (puntos2 == 21) {
		gano = true;
	}

	if (puntos3 == 21) {
		gano = true;
	}



	//****************************************************Ciclo Jugar************************************************************************************
	while (gano == false) {

		if (puntos1 == 21 or puntos2 == 21 or puntos3 == 21) {
			gano = true;
		}

//Jugador1***********************************************************************************************************************************************
		if (termino1 == false) {
			do {
				system("cls");
				cout << "\nEl Puntaje del jugador 1 es:\t" << puntos1;
				cout << "\n¿Desea continuar 1 para si o 2 para no?" << "\n";
				cin >> continuar;
				system("pause");
			} while (continuar < 1 or continuar>2);
		}
		termino1 = continuarjugando(continuar, termino1);

		if (termino1 == true) {
			cout << "\nEl puntaje del jugador1:\t" << puntos1 << "\n";
			system("pause");
		}

		if (termino1 == false) {
				carta = sacarcarta(baraja,repetido);
			puntos1 = calcularpuntaje(carta, puntos1,baraja);
			system("cls");
			cout << "\nEl puntaje del jugador1:\t" << puntos1 << "\n";
			system("pause");
		}

				if (puntos1 > 21) {
					system("cls");
					cout << "Sus puntos se sobrepasaron de 21 jugador 1 haz perdido \n";
					system("pause");
					puntos1 = 0;
					termino1 = true;
				}
				if (puntos1 == 21) {
					gano = true;
					termino1 = true;
					termino2 = true;
					termino3 = true;
					system("cls");
					cout << "\nEl ganador es el jugador 1";
				}
			
			 if (puntos1 > 21) {
				puntos1 = 0;
				termino1 = true;
			}

//jugador 2************************************************************************************************************************************************************************

			 if (termino2 == false) {
				 do {
					 system("cls");
					 cout << "\nEl Puntaje del jugador 2 es:\t" << puntos2;
					 cout << "\n¿Desea continuar 1 para si o 2 para no?" << "\n";
					 cin >> continuar;
					 system("pause");
				 } while (continuar < 1 or continuar>2);
			 }
			 termino2 = continuarjugando(continuar, termino2);

			 if (termino2 == true) {
				 cout << "\nEl puntaje del jugador2:\t" << puntos2 << "\n";
				 system("pause");
			 }

			 if (termino2 == false) {
				 carta = sacarcarta(baraja, repetido);
				 puntos2 = calcularpuntaje(carta, puntos2, baraja);
				 system("cls");
				 cout << "\nEl puntaje del jugador2:\t" << puntos2 << "\n";
				 system("pause");

			 }

			 if (puntos2 > 21) {
				 system("cls");
				 cout << "Sus puntos se sobrepasaron de 21 jugador 2 haz perdido \n";
				 system("pause");
				 puntos2 = 0;
				 termino2 = true;
			 }
			 if (puntos2 == 21) {
				 gano = true;
				 termino1 = true;
				 termino2 = true;
				 termino3 = true;
				 system("cls");
				 cout << "\nEl ganador es el jugador 2";
			 }

			 if (puntos2 > 21) {
				 puntos2 = 0;
				 termino2 = true;
			 }

//jugador3**************************************************************************************************************************************************************************************************************

			 if (termino3 == false) {
				 do {
					 system("cls");
					 cout << "\nEl Puntaje del jugador 3 es:\t" << puntos3;
					 cout << "\n¿Desea continuar 1 para si o 2 para no?" << "\n";
					 cin >> continuar;
					 system("pause");
				 } while (continuar < 1 or continuar>2);
			 }
			 termino3 = continuarjugando(continuar, termino3);

			 if (termino3 == true) {
				 cout << "\nEl puntaje del jugador3:\t" << puntos3 << "\n";
				 system("pause");
			 }

			 if (termino3 == false) {
				 carta = sacarcarta(baraja, repetido);
				 puntos3 = calcularpuntaje(carta, puntos3, baraja);
				 system("cls");
				 cout << "\nEl puntaje del jugador3:\t" << puntos3 << "\n";
				 system("pause");

			 }

			 if (puntos3 > 21) {
				 system("cls");
				 cout << "Sus puntos se sobrepasaron de 21 jugador 3 haz perdido \n";
				 system("pause");
				 puntos3 = 0;
				 termino3 = true;
			 }
			 if (puntos2 == 21) {
				 gano = true;
				 termino1 = true;
				 termino2 = true;
				 termino3 = true;
				 system("cls");
				 cout << "\nEl ganador es el jugador 3";
			 }

			 if (puntos3 > 21) {
				 puntos3 = 0;
				 termino3 = true;
			 }
































		} 










}

