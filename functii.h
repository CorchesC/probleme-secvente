#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisare(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
int elementMaximPoz(int v[], int dim) {
	int eMax = -1;
	int poz = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] > eMax) {
			eMax = v[i];
			poz = i;
		}
	}
	return poz;
}
int elementMinimPoz(int v[], int dim) {
	int eMin = 9999;
	int poz = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] < eMin) {
			eMin = v[i];
			poz = i;
		}
	}
	return poz;
}
int sumaSecventaMaxMin(int v[], int dim) {
	int pMax = elementMaximPoz(v, dim);
	int pMin = elementMinimPoz(v, dim);
	int sum = 0;
	for (int i = 0; i < dim; i++) {
		if (i >= pMin && i <= pMax) {
			sum += v[i];
		}
	}
	return sum;
}