#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
	int a;

	if (argc == 2){
	// Einlesen der Seitenlängen
	a = atoi(argv[1]);

	// Berechnung der Fakultaet
	int i;	
	int b = 1;
	for(i = 1; i <= a; i++){
		b = i * b;
	}
	// Ausgabe
	printf("die Fakultät von %i ist %i\n", a, b);

	}
	else {
		printf("Fehler falsche Anzahl von Argumenten\n");
	}
	return 0;
}
