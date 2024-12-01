all:giovine


clean: giovine main.o domande_anagrafica.o domande_scuola.o
	rm -f main.o domande_anagrafica.o domande_scuola.o giovine

giovine:main.o domande_anagrafica.o domande_scuola.o
	gcc -o giovine main.o domande_anagrafica.o domande_scuola.o

main.o:main.c
	gcc -c -o main.o main.c

domande_anagrafica.o:domande_anagrafica.c
	gcc -c -o domande_anagrafica.o domande_anagrafica.c

domande_scuola.o:domande_scuola.c
	gcc -c -o domande_scuola.o domande_scuola.c
