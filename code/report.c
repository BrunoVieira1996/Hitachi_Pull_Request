#include <stdio.h>

void report (char *lapt, char *issue, char *note, char *serial, char *date, char *name, char *email) {
	FILE *fp;

	fp = fopen ("queixa.txt", "w");
	fprintf (fp, "Laptop: %s\n", lapt);
	fprintf (fp, "\n");
	fprintf (fp, "Issue: %s\n", issue);
	fprintf (fp, "\n");
	fprintf (fp, "Note: %s\n", note);
	fprintf (fp, "\n");
	fprintf (fp, "Serial: %s\n", serial);
	fprintf (fp, "\n");
	fprintf (fp, "Data: %s\n", date);
	fprintf (fp, "\n");
	fprintf (fp, "Name: %s\n", name);
	fprintf (fp, "\n");
	fprintf (fp, "Email: %s\n", email);
	fprintf (fp, "\n");
	fclose (fp);
}