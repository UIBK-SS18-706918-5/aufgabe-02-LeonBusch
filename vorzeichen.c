#include <stdio.h>
#include <stdlib.h>

float main(int argc, char ** argv) {
	float z1;

	//
	z1 = atof(argv[1]);

	//Berechnung
	if (z1 < 0) {
		printf("x ist kleiner als 0!\n");
	}
	else if (z1 > 0) {
		printf("x ist größer als 0!\n");
	}
	else {
		printf("x ist gleich 0!\n");
	}

	return 0;
}
