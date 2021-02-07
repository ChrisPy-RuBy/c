#include <stdio.h>
#include <time.h>


int main () {
	char *dateString = "2020-08-12";
	struct tm * parsedTime;
	int year, month, day;

	if(sscanf(dateString, "%d-%d-%d", &year, &month, &day) != EOF) {
		time_t rawTime;
		time(&rawTime);
		parsedTime = localtime(&rawTime);




	}
}
