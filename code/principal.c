#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"
#include "logical.h"
#include "report.h"

int main () {
	char lapt [12];
	char issue [23];
	char note [501];
	char serial [13];
	char date [11];
	char name [41];
	char email [50];
	
	
	getLaptop (lapt);
	system("clear");
	getIssue (issue);
	system("clear");
	getNote (note);
	getSerial (serial);
	system("clear");
	getDate (date); //procurar sincronizar com a data do sistema
	system("clear");
	getName (name);
	system("clear");
	getEmail (email); //o que é um email válido?
	system("clear");
    //printf ("%s", issue);
	report (lapt, issue, note, serial, date, name, email);

	return 0;
}