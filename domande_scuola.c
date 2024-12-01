#include<stdio.h>
#include "bool.h"
Bool domande_scuola(){
	char s;
	Bool c=TRUE;
	printf("ti piace la scuola?\n[s]i, [n]o\n");
	scanf(" %c",&s);
	if(s == 'n')
		c=FALSE;
	printf("sei mai stato bocciato?\n[s]i, [n]o\n");
	scanf(" %c",&s);
	if(s == 'n')
		c=FALSE;
	printf("rispondi si!?\n[s]i, [n]o\n");
	scanf(" %c",&s);
	if(s == 'n')
		c=FALSE;
	return c;		
}
