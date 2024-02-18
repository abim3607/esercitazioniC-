#include <iostream>
#include "pippo.h"
using namespace std;
void visualizzaLinea(char carattere, int n) {
	for (int i = 0; i < n; i++) {
		cout << carattere;
	}

	cout << endl;
}

float aggiungiCoperto() {
	float prezzoCoperto = 2.00;
	return prezzoCoperto;
}
float aggiungiCarbonara(){
	float prezzoCarbonara = 3.50;
	return prezzoCarbonara;
}
float aggiungiMargherita() {
	float prezzoMargherita = 1.50;
	return prezzoMargherita;
}
float aggiungiGrigliata() {
	float prezzoGrigliata = 2.50;
	return prezzoGrigliata;
}
float aggiungiHamburger() {
	float prezzoHamburger = 2.00;
	return prezzoHamburger;
}
float aggiungiCocacola() {
	float prezzococacola = 1.50;
	return prezzococacola;
}
float aggiungiAcqua() {
	float prezzoAcqua = 1.00;
	return prezzoAcqua;
}
float aggiungiVino(){
	float prezzovino = 2.50;
	return prezzovino;
}
