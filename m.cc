#include <iostream>
#include "dati.h"
using namespace std;

void inizializza (Settimana_t &settimana[I_ORARI][]){
	for (int i = 0 ; i < I_ORARI; i++){
		for (int j = 0; j < J_GIORNI; j++){
			settimana[i][j].aula_1 = 0;	
			settimana[i][j].aula_2 = 0;
			settimana[i][j].aula_3 = 0;		
		}


	}

}



int main () {
	Settimana_t settimana [I_ORARI][J_GIORNI];
	inizializza ( settimana );
	
}
