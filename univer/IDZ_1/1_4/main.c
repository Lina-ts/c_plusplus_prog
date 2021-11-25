#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct monument
{
	char name[20];
	char location[20];
	char type[10];
	char architect[10];
	int year;
};

void add (char*);
void edit (char*);
void show (char*);
void search_type (char*);
void search_old (char*);
void del (char*);

int int main(int argc, char * argv[])
{
	char file[50]="monument.dat";
	char menu;
	if (argc>1)
		strcpy (file, argv[1]);
	do
	{
		system ("CLS");
		puts("1. Add");
		puts("2. Edit");
		puts("3. Show");
		puts("4. Search type and year < 1800");



	}
	return 0;
}