#include<stdio.h>
#include "bool.h"
Bool domande_anagrafica(){
	char s;
	Bool c=TRUE;
	printf("sei nato?\n[s]i, [n]o\n");
	scanf(" %c",&s);
	if(s == 'n')
		c=FALSE;
	printf("hai piu' di 18 anni?\n[s]i, [n]o\n");
	scanf(" %c",&s);
	if(s == 'n')
		c=FALSE;
	printf("ti senti giovane?\n[s]i, [n]o\n");
	scanf(" %c",&s);
	if(s == 'n')
		c=FALSE;
	return c;
}
