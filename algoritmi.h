#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void  bubbleSort(int v[], int dim) {


	bool sortat = false;
	do {
		sortat = true;
		for (int i = 5; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
		}

	} while (sortat == false);



}