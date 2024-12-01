#include<stdio.h>
#include "domande_anagrafica.h"
#include "domande_scuola.h"
int main(){
	Bool risultato_anagrafica = domande_anagrafica();
	Bool risultato_scuola = domande_scuola();
	if(risultato_anagrafica*risultato_scuola)
		printf("sei giovane\n");
	else
		printf("sei giovane dentro\n");
}
