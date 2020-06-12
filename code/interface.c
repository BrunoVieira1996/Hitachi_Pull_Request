#include <stdio.h>
#include "logical.h"

void getLaptop (char *lapt) {
	int validade;

	validade = 0;
	while (!validade) {
		printf ("Select Laptop:\n");
		printf ("1.Lenovo P50\n");
		printf ("2.Lenovo P50s\n");
		printf ("3.Lenovo P51\n");
		printf ("4.Lenovo P51s\n");
		printf ("5.Lenovo P52\n");
		printf ("6.Lenovo P52s\n");
		gets (lapt);
		validade = validLaptop (lapt);
		if (!validade)
			system("clear");			
			putchar ('\n');
	}
}

void getIssue (char *issue) {
	int validade;

	validade = 0;
	while (!validade) {
		printf ("Select Issue:\n");
		printf ("1.Broken screen;\n");
		printf ("2.Broken keyboard;\n");
		printf ("3.Physical damage -other;\n");
		printf ("4.Laptop crashing;\n");
		printf ("5.Software missing;\n");
		printf ("6.Other.\n");
		gets (issue);
		validade = validIssue (issue);
		if (!validade)
			system("clear");			
			//putchar ('\n');

	}
}

void getNote (char *note) {

	printf ("Nota:(Max. 500 characters)\n");
	gets (note);
}

void getSerial (char *serial) {
	int validade;

	validade = 0;
	while (!validade) {
		printf ("Serial Number: ");
		gets (serial);
		validade = validSerial (serial);
		if (!validade)
			system("clear");			
			//putchar ('\n');
	}
}

void getDate (char *date) {
	int validade;

	validade = 0;
	while (!validade) {
		printf ("Date (dd-mm-yyyy): ");
		gets (date);
		validade = validDate (date);
		if (!validade)
			system("clear");			
			//putchar ('\n');
	}
}

void getName (char *name) {

	printf ("Name (Up to 40 characters): ");
	gets (name);
}

void getEmail (char *email) {

	printf ("Email: ");
	gets (email);
}

