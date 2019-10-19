#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "declaration.h"
#include "displayPlans.h"
#include "menu.h"
#include "editMenu.h"
#include "deleteMenu.h"
#include "addMenu.h"
#include "countRead.h"

int main()
{
	char mainChoice;
    countRead();
	while(mainChoice!='0')
	{
	system("cls");
	printf("\n\n\t::::ONE-WEEK PLANNER::::\n\n");
	printf("\t[1] See your Plans\n\t[2] Add Plan\n\t[3] Edit Plan\n\t[4] Delete Plan");
	printf("\n\n\t[0] Exit");
	printf("\n\n\tEnter your Choice: ");
	scanf(" %c", &mainChoice);
		switch(mainChoice)
		{
			case '1': displayPlans(); break;
			case '2': addMenu(); break;
			case '3': editMenu(); break;
			case '4': deleteMenu(); break;
		}
	}
}
