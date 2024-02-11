#include <iostream>
using namespace std;

int main() {
	int scelta, scelta1, altezza, base,lato,risultato, perimetro, diagonale;
	cout << "1)triangolo" << endl;
	cout << "2)quadrato" << endl;
	cin >> scelta;
	/*cin >> scelta1;*/
	

	if (scelta == 1) {
		cout << "scrivi l' altezza"<< endl;
		cin >> altezza;
		cout << "scrivi la base" << endl;
		cin >> base;
		risultato = base * altezza / 2;
		cout << "il risultato dell'triangolo e': " << risultato << endl;
	}
	else{
		cout << "scrivi l' altezza" << endl;
		cin >> altezza;
		cout << "scrivi il perimetro" << endl;
		cin >> perimetro;
		lato = 2 * perimetro * 4;
		cout << "il lato e': " << lato << endl;
		diagonale = 2 * lato * 2;
		cout << "la diagonale e':" << diagonale << endl;
	}


	system("pause");
	return 0;
}