#include <iostream>

//inscerire le librerie
#include "pippo.h"
//Richiamare i file di programma
//dichiarare le variabili globali

using namespace std;

int main() {
	int scelta, tavolo, persone;
	float subtotale = 0.0;
	do {
		system("cls");
		cout << "numero del tavolo(1-10)" << endl;
		cin >> tavolo;
	} while (tavolo > 10 or tavolo < 1);
	//} while (tavolo > 10 and tavolo < 1);
	do{
		system("cls");
		cout << "quante persone mangiano" << endl;
		cin >> persone;
	} while (persone < 1);


	

	do{
	

		system("cls");
		visualizzaLinea('%', 30);
		cout << "cibi: " << endl;
		cout << "\t10- per la carbonara: "<< aggiungiCarbonara() << endl;
		cout << "\t11- per l'hamburger:" << aggiungiHamburger() << endl;
		cout << "\t12- per Grigliata:" << aggiungiGrigliata() << endl;
		cout << "\t13- per la Margherita:"<< aggiungiMargherita() << endl;
		cout << "bevande: " << endl;
		cout << "\t1- per la cocacola:"<< aggiungiCocacola() << endl;
		cout << "\t2- per la Acqua:" << aggiungiAcqua() << endl;
		cout << "\t3- per il vino:" << aggiungiVino() << endl;
		cout << "0- per terminare" << endl;
		visualizzaLinea('%', 30);
		cout << "fai una scelta" << endl;
		cin >> scelta;



		switch (scelta){
		case 10:
			//richiamare il primo programma
			subtotale += aggiungiCarbonara();
			break;
		case 11:
			//richiamare il secondo programma
			subtotale += aggiungiHamburger();
			break;
		case 12:
			//richiamare il terzo programma
			subtotale += aggiungiGrigliata();
			break;

		case 13:
			subtotale += aggiungiMargherita();

			break;
		case 1:
			//richiamare il zero programma
			subtotale += aggiungiCocacola();
			break;
	
		case 2:
			subtotale += aggiungiAcqua();
			break;
		case 3:
			subtotale += aggiungiVino();
			break;
		case 0:
			//esco
			visualizzaLinea('_', 30);
			cout << "il numero del tavolo e': " << tavolo << endl;
			cout << "il subtotale e': " << subtotale << endl;
			cout << "il numero di persone e': " << persone << endl;
			cout << "il totale del coperto e':" << aggiungiCoperto()*persone << endl;
			visualizzaLinea('=', 30);
			cout << "il conto e': " << (subtotale + aggiungiCoperto()*persone)<< endl;


			break; 
		default:
			//messaggio di erorre
			cout << "la scelta non e' coretta " << endl;
			break;
		}


	} while (scelta != 0);

	system("pause");
	return 0;
}