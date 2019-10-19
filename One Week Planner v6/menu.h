
void addMenu() //function for add plan menu
{
	char inputAdd;

	while (inputAdd != '0')
	{
	system("cls");
	printf("\n\n\t::::ADD PLAN MENU::::\n\n");

	inputAdd = dayMenu(); //taking input from the dayMenu function

	switch(inputAdd)
	{
		case '1': addmonday(); break;
		case '2': addtuesday(); break;
		case '3': addwednesday(); break;
		case '4': addthursday(); break;
		case '5': addfriday(); break;
		case '6': addsaturday(); break;
		case '7': addsunday(); break;
	}
}
}

void editMenu()
{
	char inputEdit;

	while(inputEdit != '0')
	{
		system("cls");
		printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

		inputEdit = dayMenu();
		switch(inputEdit)
		{
			case '1': editmonday(); break;
			case '2': edittuesday(); break;
			case '3': editwednesday(); break;
			case '4': editthursday(); break;
			case '5': editfriday(); break;
			case '6': editsaturday(); break;
			case '7': editsunday(); break;
		}
	}
}

void deleteMenu()
{
	char inputDelete;

	while (inputDelete != '0')
	{
	system("cls");
	printf("\n\n\t::::DELETE PLAN MENU::::\n\n");

	inputDelete = dayMenu();
	switch(inputDelete)
	{
		case '1': deletemonday(); break;
		case '2': deletetuesday(); break;
		case '3': deletewednesday(); break;
		case '4': deletethursday(); break;
		case '5': deletefriday(); break;
		case '6': deletesaturday(); break;
		case '7': deletesunday(); break;
	}
	}
}

int dayMenu()
{
	int i,col;
	char inputDay;
	char showDays[7][20]={"Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

	printf("\tSelect Day: \n");
	for (i=0; i<7; i++) printf("\t[%d] %s\n", i+1, showDays[i]);
	printf("\n\t[0] Back to Main");

	printf("\n\n\tEnter your Choice: ");
	scanf(" %c", &inputDay);

	return inputDay;
}

char menuDisplayMonday(char title[], char lowerTitle[])
{
	char select;
	int i;

	system("cls");
	printf("\n\n\t::::%s PLAN MENU::::\n\n", title);
	printf("\tDay : Monday\n\n");

	if(countMon == 0)
	{
		printf("\tThere are no activity planned\n\n\tPress any key to go back...");
		getch();
	}
	else if(countMon >= 1)
	{
		for(i=0 ; i<countMon ; i++) printf("\t[%d] %s(%s)\n",i+1, planMon[i].title, planMon[i].time);
		printf("\n\t[0] Back\n");
		printf("\n\tSelect Plan to %s: ", lowerTitle);
		scanf(" %c", &select);
		while((int)select - 48 < 0 || (int)select - 48 > countMon)
		{
        printf("\tPlease enter the correct number!\n\t");
        scanf(" %c",&select);
		}
	}
	return select;
}

char menuDisplayTuesday(char title[], char lowerTitle[])
{
	char select;
	int i;
	system("cls");
	printf("\n\n\t::::%s PLAN MENU::::\n\n", title);
	printf("\tDay : Tuesday\n\n");
	if(countTue == 0)
	{
		printf("\tThere are no activity planned\n\n\tPress any key to go back...");
		getch();
	}
	else if(countTue >= 1)
	{
		for(i=0 ; i<countTue ; i++) printf("\t[%d] %s(%s)\n",i+1, planTue[i].title, planTue[i].time);
		printf("\n\t[0] Back\n");
		printf("\n\tSelect Plan to %s: ", lowerTitle);
		scanf(" %c", &select);
		while((int)select - 48 < 0 || (int)select - 48 > countTue)
		{
        printf("\tPlease enter the correct number!\n\t");
        scanf(" %c",&select);
		}
	}
	return select;
}
char menuDisplayWednesday(char title[], char lowerTitle[])
{
	char select;
	int i;
	system("cls");
	printf("\n\n\t::::%s PLAN MENU::::\n\n", title);
	printf("\tDay : Wednesday\n\n");
	if(countWed == 0)
	{
		printf("\tThere are no activity planned\n\n\tPress any key to go back...");
		getch();
	}
	else if(countWed >= 1)
	{
		for(i=0 ; i<countWed ; i++) printf("\t[%d] %s(%s)\n",i+1, planWed[i].title, planWed[i].time);
		printf("\n\t[0] Back\n");
		printf("\n\tSelect Plan to %s: ", lowerTitle);
		scanf(" %c", &select);
		while((int)select - 48 < 0 || (int)select - 48 > countWed)
		{
        printf("\tPlease enter the correct number!\n\t");
        scanf(" %c",&select);
		}
	}
	return select;
}
char menuDisplayThursday(char title[], char lowerTitle[])
{
	char select;
	int i;
	system("cls");
	printf("\n\n\t::::%s PLAN MENU::::\n\n", title);
	printf("\tDay : Thursday\n\n");
	if(countThu == 0)
	{
		printf("\tThere are no activity planned\n\n\tPress any key to go back...");
		getch();
	}
	else if(countThu >= 1)
	{
		for(i=0 ; i<countThu ; i++) printf("\t[%d] %s(%s)\n",i+1, planThu[i].title, planThu[i].time);
		printf("\n\t[0] Back\n");
		printf("\n\tSelect Plan to %s: ", lowerTitle);
		scanf(" %c", &select);
		while((int)select - 48 < 0 || (int)select - 48 > countThu)
		{
        printf("\tPlease enter the correct number!\n\t");
        scanf(" %c",&select);
		}
	}
	return select;
}
char menuDisplayFriday(char title[], char lowerTitle[])
{
	char select;
	int i;
	system("cls");
	printf("\n\n\t::::%s PLAN MENU::::\n\n", title);
	printf("\tDay : Friday\n\n");
	if(countFri == 0)
	{
		printf("\tThere are no activity planned\n\n\tPress any key to go back...");
		getch();
	}
	else if(countFri >= 1)
	{
		for(i=0 ; i<countFri ; i++) printf("\t[%d] %s(%s)\n",i+1, planFri[i].title, planFri[i].time);
		printf("\n\t[0] Back\n");
		printf("\n\tSelect Plan to %s: ", lowerTitle);
		scanf(" %c", &select);
		while((int)select - 48 < 0 || (int)select - 48 > countFri)
		{
        printf("\tPlease enter the correct number!\n\t");
        scanf(" %c",&select);
		}
	}
	return select;
}
char menuDisplaySaturday(char title[], char lowerTitle[])
{
	char select;
	int i;
	system("cls");
	printf("\n\n\t::::%s PLAN MENU::::\n\n", title);
	printf("\tDay : Saturday\n\n");
	if(countSat == 0)
	{
		printf("\tThere are no activity planned\n\n\tPress any key to go back...");
		getch();
	}
	else if(countSat >= 1)
	{
		for(i=0 ; i<countSat ; i++) printf("\t[%d] %s(%s)\n",i+1, planSat[i].title, planSat[i].time);
		printf("\n\t[0] Back\n");
		printf("\n\tSelect Plan to %s: ", lowerTitle);
		scanf(" %c", &select);
		while((int)select - 48 < 0 || (int)select - 48 > countSat)
		{
        printf("\tPlease enter the correct number!\n\t");
        scanf(" %c",&select);
		}
	}
	return select;
}

char menuDisplaySunday(char title[], char lowerTitle[])
{
	char select;
	int i;
	system("cls");
	printf("\n\n\t::::%s PLAN MENU::::\n\n", title);
	printf("\tDay : Sunday\n\n");
	if(countSun == 0)
	{
		printf("\tThere are no activity planned\n\n\tPress any key to go back...");
		getch();
	}
	else if(countSun >= 1)
	{
		for(i=0 ; i<countSun ; i++) printf("\t[%d] %s(%s)\n",i+1, planSun[i].title, planSun[i].time);
		printf("\n\t[0] Back\n");
		printf("\n\tSelect Plan to %s: ", lowerTitle);
		scanf(" %c", &select);
		while((int)select - 48 < 0 || (int)select - 48 > countSun)
		{
        printf("\tPlease enter the correct number!\n\t");
        scanf(" %c",&select);
		}
	}
	return select;
}
