#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	//Se dă un şir format din n numere naturale distincte.Calculați suma elementelor din secvenţa ce uneşte cel mai mic şi cel mai mare element din şir.
	int v[100], d = 0;
	citire(v, d);
	int s = sumaSecventaMaxMin(v, d);
	cout << "Suma elementelor formate din secventa cuprinsa inte elementul minim si cel maxim (inclusiv) este: " << s << endl;
}