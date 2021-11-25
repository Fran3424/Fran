#pragma once
#include <string>
#include <iostream>
using namespace std;
struct cartas {  // se declara la estructura
    int numero; // se definen los datos que puede poseer int para numeros
    string palo; // string para el palo

};
cartas baraja[56]; // se crea el vector
cartas repetido[56];