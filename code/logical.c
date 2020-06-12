#include <string.h>

int validLaptop (char *lapt) {
	int validade;
	
	validade = 1;
	if (lapt[0] == '1')
		strcpy (lapt, "Lenovo P50");	
	else if (lapt[0] == '2')
		strcpy (lapt, "Lenovo P50s");
	else if (lapt[0] == '3')
		strcpy (lapt, "Lenovo P51");
	else if (lapt[0] == '4') 
		strcpy (lapt, "Lenovo P51s");
	else if (lapt[0] == '5') 
		strcpy (lapt, "Lenovo P52");
	else if (lapt[0] == '6') 
		strcpy (lapt, "Lenovo P52s");
	else 
		validade = 0;
	
	return validade;
}

int validIssue (char *issue) {
	int validade; //length;

	validade = 1;
	//length = sizeof(db->lapt);
	//if (length != 1)
	//	validade = 0;
	//else {
	if (issue[0] == '1')
		strcpy (issue, "Broken screen");	
	else if (issue[0] == '2')
		strcpy (issue, "Broken keyboard");
	else if (issue[0] == '3')
		strcpy (issue, "Physical damage -other");
	else if (issue[0] == '4') 
		strcpy (issue, "Laptop crashing");
	else if (issue[0] == '5') 
		strcpy (issue, "Software missing");
	else if (issue[0] == '6') 
		strcpy (issue, "Other");
	else 
		validade = 0;
	//}
	
	return validade;
}

int validSerial (char *serial) {
	int validade, i;

	validade = 1;
	i = 0;
	while (serial[i] && validade) {
		if (i == 5 && serial[i] != '-')
			validade = 0;
		else {
			if ('0' <= serial[i] <= '9' || 'a' <= serial[i] <= 'z' || 'A' <= serial[i] <= 'Z')
				validade = 1;
			else
				validade = 0;
		}
		i++;
	}

	return validade;
}

int validDate (char *date) {
	int validade;

	validade = 0;
	if (date[0] >= '0' && date[0] <= '2'){
		if (date[1] >= '0' && date[1] <= '9')
			if (date [3] == '0') {
				if (date[4] >= '1' && date [4] <= '9')
					if (date[6] == '2' && date [7] == '0' && date [8] == '2' && date[9] == '0')
						validade = 1;

			}
			else if (date[3] == '1') {
				if (date[4] >= '1' && date[4] <= '2')
					if (date[6] == '2' && date [7] == '0' && date [8] == '2' && date[9] == '0')
						validade = 1;
			}
	}
	else if (date[0] == '3') {
		if (date[1] >= '0' && date[1] <= '1')
			if (date [3] == '0') {
				if (date[4] >= '1' && date [4] <= '9')
					if (date[6] == '2' && date [7] == '0' && date [8] == '2' && date[9] == '0')
						validade = 1;

			}
			else if (date[3] == '1') {
				if (date[4] >= '1' && date[4] <= '2')
					if (date[6] == '2' && date [7] == '0' && date [8] == '2' && date[9] == '0')
						validade = 1;
			} 
	}

	return validade;	
}

