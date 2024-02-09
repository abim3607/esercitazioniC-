#include <iostream>
#include <string> // per usare to_string()

using namespace std;

int gg1, gg2, mm1, mm2, aaaa1, aaaa2;

bool controllabisestille(int aaaa) {
	if (aaaa % 400 == 0 || (aaaa % 4 == 0 && !(aaaa % 100 == 0))) {
		//		cout << "l' anno e' bisitile";
		return true;
	}
	//	cout << "l'anno non e' bisitile";
	return false;
}


int da_mese_a_giorni(int aaaa, int mm) {
	int giorni = 0;
	switch (mm) {
		/*
		 Con piena padronanza del costrutto switch, metto il break solo quando il valore cambia.
		*/
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		giorni = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		giorni = 30;
		break;
	case 2:
		if (controllabisestille(aaaa) == true) {
			giorni = 29;
		}
		else {
			giorni = 28;
		}
		break;
	default:
		break;
	}
	return giorni;
}

int leggiAnno() {
	int aaaa = 0;
	while (aaaa < 1950 or aaaa > 2050)
	{
		cout << "\tinserisci l'anno (1950-2050): ";
		cin >> aaaa;

	}
	return aaaa;
}

int leggiMese() {
	int mm = 0;
	while (mm < 1 or mm > 12)
	{
		cout << "\tinserisci il mese (1-12): ";
		cin >> mm;
	}
	return mm;
}

int leggiGiorno(int anno, int mese) {
	int gg = 0;

	while (gg < 1 or gg > da_mese_a_giorni(anno, mese))
	{
		cout << "\tinserisci giorno (1-" << da_mese_a_giorni(anno, mese) << "): "; // \t tabulazione
		cin >> gg;
	}
	return gg;
}

int differenza_tra_date(int anno1, int mese1, int giorno1, int anno2, int mese2, int giorno2) {
	/*
	 data più recente (più grande): anno1, mese1, giorno1   (es. 2024 05 07 )
	 data meno recente (più piccola): anno2, mese2, giorno2 (es. 2020 03 03 )
	*/
	int giorni = 0;
	for (int anno_corrente = anno2; anno_corrente < anno1; ++anno_corrente) {
		if (controllabisestille(anno_corrente)) {
			giorni += 366;
		}
		else {
			giorni += 365;
		}
	}

	//no va


	//for (int mese_corrente = 1; mese_corrente < mese1; ++mese_corrente) {
	//	giorni += (da_mese_a_giorni(anno1, mese1));

	//}
	//giorni += da_mese_a_giorni(anno2, mese2) - giorno2 + 1;
	//giorni += giorno1 - 1;

	return giorni;
}

void Tester(){
	int aaaa1,aaaa2,mm1,mm2,gg1,gg2,ris,expected;

	for(int m=1; m<=12; m++){
		cout << "mese " << m << " giorni: " << da_mese_a_giorni(2024,m) << endl;
	}

	aaaa1=2024; mm1=01; gg1=01;
	aaaa2=2020;	mm2=01;	gg2=01;
	ris=differenza_tra_date(aaaa1, mm1, gg1, aaaa2, mm2, gg2);
	expected=1461;
	if(ris == expected){
		cout << "Test1 eseguito con successo" << endl;
	} else {
		cout << "Test1 fallito: "+to_string(aaaa2)+"/"+to_string(mm2)+"/"+to_string(gg2)+" - "+to_string(aaaa1)+"/"+to_string(mm1)+"/"+to_string(gg1)+" = "+to_string(ris)+" invece di "+to_string(expected) << endl;
	}
	
	aaaa1=2024; mm1=01; gg1=20;
	aaaa2=2020;	mm2=01;	gg2=01;
	ris=differenza_tra_date(aaaa1, mm1, gg1, aaaa2, mm2, gg2);
	expected=1480;
	if(ris == expected){
		cout << "Test2 eseguito con successo" << endl;
	} else {
		cout << "Test2 fallito: "+to_string(aaaa2)+"/"+to_string(mm2)+"/"+to_string(gg2)+" - "+to_string(aaaa1)+"/"+to_string(mm1)+"/"+to_string(gg1)+" = "+to_string(ris)+" invece di "+to_string(expected) << endl;
	}
	
	aaaa1=2024; mm1=02; gg1=01;
	aaaa2=2020;	mm2=01;	gg2=01;
	ris=differenza_tra_date(aaaa1, mm1, gg1, aaaa2, mm2, gg2);
	expected=1492;
	if(ris == expected){
		cout << "Test3 eseguito con successo" << endl;
	} else {
		cout << "Test3 fallito: "+to_string(aaaa2)+"/"+to_string(mm2)+"/"+to_string(gg2)+" - "+to_string(aaaa1)+"/"+to_string(mm1)+"/"+to_string(gg1)+" = "+to_string(ris)+" invece di "+to_string(expected) << endl;
	}

	aaaa1=2024; mm1=03; gg1=1;
	aaaa2=2020;	mm2=01;	gg2=1;
	ris=differenza_tra_date(aaaa1, mm1, gg1, aaaa2, mm2, gg2);
	expected=1521;
	if(ris == expected){
		cout << "Test4 eseguito con successo" << endl;
	} else {
		cout << "Test4 fallito: "+to_string(aaaa2)+"/"+to_string(mm2)+"/"+to_string(gg2)+" - "+to_string(aaaa1)+"/"+to_string(mm1)+"/"+to_string(gg1)+" = "+to_string(ris)+" invece di "+to_string(expected) << endl;
	}
	
	aaaa1=2024; mm1=03; gg1=31;
	aaaa2=2024;	mm2=01;	gg2=1;
	//ris=differenza_tra_date(aaaa1, mm1, gg1, aaaa2, mm2, gg2);
	ris=differenza_tra_date(aaaa2, mm2, gg2, aaaa1, mm1, gg1);
	expected=90;
	if(ris == expected){
		cout << "Test5 eseguito con successo" << endl;
	} else {
		cout << "Test5 fallito: "+to_string(aaaa2)+"/"+to_string(mm2)+"/"+to_string(gg2)+" - "+to_string(aaaa1)+"/"+to_string(mm1)+"/"+to_string(gg1)+" = "+to_string(ris)+" invece di "+to_string(expected) << endl;
	}
	
}

void menu(){
	cout << "inserisci la prima data piu' recente: \n"; // \n carattere a capo
	aaaa1 = leggiAnno();
	mm1 = leggiMese();
	gg1 = leggiGiorno(aaaa1, mm1);

	cout << "inserisci la seconda data: \n";
	aaaa2 = leggiAnno();
	mm2 = leggiMese();
	gg2 = leggiGiorno(aaaa2, mm2);


	cout << "la differenza tra le due date in giorni e': " << differenza_tra_date(aaaa1, mm1, gg1, aaaa2, mm2, gg2) << endl;	
}

int main() {
	// menu();
	Tester();
	
	system("pause");
	return 0;
}
