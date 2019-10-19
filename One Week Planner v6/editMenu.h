void editmonday()
{
	int selectEdit;
	char partEdit;

	FILE *outfileMonday;
	FILE *countMonday;

    outfileMonday = fopen("addMonday.dat","w+");
    //taking input from the menuDisplay
	selectEdit = (int)menuDisplayMonday("EDIT", "Edit") - 48; //since menuDisplay is char, it must be redeclared with int
    if(countMon != 0 && selectEdit != 0)
    {
	system("cls");
	printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

			printf("\t[1] Title \t: %s\n", planMon[selectEdit - 1].title);
			printf("\t[2] Time \t: %s\n", planMon[selectEdit - 1].time);
			printf("\t[3] Duration\t: %s\n", planMon[selectEdit - 1].duration);
			printf("\t[4] Desc \t: %s\n", planMon[selectEdit - 1].desc);

	printf("\n\t[0] Back\n");
	while(partEdit != '0')
	{
	printf("\n\tEnter Part to Edit: ");
	scanf(" %c", &partEdit);
	switch(partEdit)
	{
		case '1':
			printf("\n\tTitle \t: ");
			scanf(" %[^\n]s", planMon[selectEdit - 1].title);
			break;
		case '2':
			printf("\n\tTime \t: ");
			scanf(" %[^\n]s", planMon[selectEdit - 1].time);
			break;
		case '3':
			printf("\n\tDuration : ");
			scanf(" %[^\n]s", planMon[selectEdit - 1].duration);
			break;
		case '4':
			printf("\n\tDesc : ");
			scanf(" %[^\n]s", planMon[selectEdit - 1].desc);
			break;
	}
    }
    }
	fwrite(&planMon, sizeof(struct Plans),countMon, outfileMonday);

	fclose(outfileMonday);
}

void edittuesday()
{
	int selectEdit;
	char partEdit;

	FILE *outfileTuesday;
	FILE *countTuesday;

    outfileTuesday = fopen("addTuesday.dat","w+");

	selectEdit = (int)menuDisplayTuesday("EDIT", "Edit") - 48;
    if(countTue != 0 && selectEdit != 0)
    {
	system("cls");
	printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

			printf("\t[1] Title \t: %s\n", planTue[selectEdit - 1].title);
			printf("\t[2] Time \t: %s\n", planTue[selectEdit - 1].time);
			printf("\t[3] Duration\t: %s\n", planTue[selectEdit - 1].duration);
			printf("\t[4] Desc \t: %s\n", planTue[selectEdit - 1].desc);

	printf("\n\t[0] Back\n");
	while(partEdit != '0')
	{
	printf("\n\tEnter Part to Edit: ");
	scanf(" %c", &partEdit);
	switch(partEdit)
	{
		case '1':
			printf("\n\tTitle \t: ");
			scanf(" %[^\n]s", planTue[selectEdit - 1].title);
			break;
		case '2':
			printf("\n\tTime \t: ");
			scanf(" %[^\n]s", planTue[selectEdit - 1].time);
			break;
		case '3':
			printf("\n\tDuration : ");
			scanf(" %[^\n]s", planTue[selectEdit - 1].duration);
			break;
		case '4':
			printf("\n\tDesc : ");
			scanf(" %[^\n]s", planTue[selectEdit - 1].desc);
			break;
	}
    }
    }
    fwrite(&planTue, sizeof(struct Plans),countTue, outfileTuesday);

	fclose(outfileTuesday);
}

void editwednesday()
{
	int selectEdit;
	char partEdit;

    FILE *outfileWednesday;
	FILE *countWednesday;

    outfileWednesday = fopen("addWednesday.dat","w+");

	selectEdit = (int)menuDisplayWednesday("EDIT", "Edit") - 48;
    if(countWed != 0 && selectEdit != 0)
    {
	system("cls");
	printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

			printf("\t[1] Title \t: %s\n", planWed[selectEdit - 1].title);
			printf("\t[2] Time \t: %s\n", planWed[selectEdit - 1].time);
			printf("\t[3] Duration\t: %s\n", planWed[selectEdit - 1].duration);
			printf("\t[4] Desc \t: %s\n", planWed[selectEdit - 1].desc);

	printf("\n\t[0] Back\n");
	while(partEdit != '0')
	{
	printf("\n\tEnter Part to Edit: ");
	scanf(" %c", &partEdit);
	switch(partEdit)
	{
		case '1':
			printf("\n\tTitle \t: ");
			scanf(" %[^\n]s", planWed[selectEdit - 1].title);
			break;
		case '2':
			printf("\n\tTime \t: ");
			scanf(" %[^\n]s", planWed[selectEdit - 1].time);
			break;
		case '3':
			printf("\n\tDuration : ");
			scanf(" %[^\n]s", planWed[selectEdit - 1].duration);
			break;
		case '4':
			printf("\n\tDesc : ");
			scanf(" %[^\n]s", planWed[selectEdit - 1].desc);
			break;
	}
    }
    }
    fwrite(&planWed, sizeof(struct Plans),countWed, outfileWednesday);

	fclose(outfileWednesday);
}
void editthursday()
{
	int selectEdit;
	char partEdit;

    FILE *outfileThursday;
	FILE *countThursday;

    outfileThursday = fopen("addThursday.dat","w+");

	selectEdit = (int)menuDisplayThursday("EDIT", "Edit") - 48;
    if(countThu != 0 && selectEdit != 0)
    {
	system("cls");
	printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

			printf("\t[1] Title \t: %s\n", planThu[selectEdit - 1].title);
			printf("\t[2] Time \t: %s\n", planThu[selectEdit - 1].time);
			printf("\t[3] Duration\t: %s\n", planThu[selectEdit - 1].duration);
			printf("\t[4] Desc \t: %s\n", planThu[selectEdit - 1].desc);

	printf("\n\t[0] Back\n");
	while(partEdit != '0')
	{
	printf("\n\tEnter Part to Edit: ");
	scanf(" %c", &partEdit);
	switch(partEdit)
	{
		case '1':
			printf("\n\tTitle \t: ");
			scanf(" %[^\n]s", planThu[selectEdit - 1].title);
			break;
		case '2':
			printf("\n\tTime \t: ");
			scanf(" %[^\n]s", planThu[selectEdit - 1].time);
			break;
		case '3':
			printf("\n\tDuration : ");
			scanf(" %[^\n]s", planThu[selectEdit - 1].duration);
			break;
		case '4':
			printf("\n\tDesc : ");
			scanf(" %[^\n]s", planThu[selectEdit - 1].desc);
			break;
	}
    }
    }
    fwrite(&planThu, sizeof(struct Plans),countThu, outfileThursday);

	fclose(outfileThursday);
}
void editfriday()
{
	int selectEdit;
	char partEdit;

    FILE *outfileFriday;
	FILE *countFriday;

    outfileFriday = fopen("addFriday.dat","w+");

	selectEdit = (int)menuDisplayFriday("EDIT", "Edit") - 48;
    if(countFri != 0 && selectEdit != 0)
    {
	system("cls");
	printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

			printf("\t[1] Title \t: %s\n", planFri[selectEdit - 1].title);
			printf("\t[2] Time \t: %s\n", planFri[selectEdit - 1].time);
			printf("\t[3] Duration\t: %s\n", planFri[selectEdit - 1].duration);
			printf("\t[4] Desc \t: %s\n", planFri[selectEdit - 1].desc);

	printf("\n\t[0] Back\n");
	while(partEdit != '0')
	{
	printf("\n\tEnter Part to Edit: ");
	scanf(" %c", &partEdit);
	switch(partEdit)
	{
		case '1':
			printf("\n\tTitle \t: ");
			scanf(" %[^\n]s", planFri[selectEdit - 1].title);
			break;
		case '2':
			printf("\n\tTime \t: ");
			scanf(" %[^\n]s", planFri[selectEdit - 1].time);
			break;
		case '3':
			printf("\n\tDuration : ");
			scanf(" %[^\n]s", planFri[selectEdit - 1].duration);
			break;
		case '4':
			printf("\n\tDesc : ");
			scanf(" %[^\n]s", planFri[selectEdit - 1].desc);
			break;
	}
    }
    }
    fwrite(&planFri, sizeof(struct Plans),countFri, outfileFriday);

	fclose(outfileFriday);
}

void editsaturday()
{
	int selectEdit;
	char partEdit;

	FILE *outfileSaturday;
	FILE *countSaturday;

    outfileSaturday = fopen("addSaturday.dat","w+");

	selectEdit = (int)menuDisplaySaturday("EDIT", "Edit") - 48;
    if(countSat != 0 && selectEdit != 0)
    {
	system("cls");
	printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

			printf("\t[1] Title \t: %s\n", planSat[selectEdit - 1].title);
			printf("\t[2] Time \t: %s\n", planSat[selectEdit - 1].time);
			printf("\t[3] Duration\t: %s\n", planSat[selectEdit - 1].duration);
			printf("\t[4] Desc \t: %s\n", planSat[selectEdit - 1].desc);

	printf("\n\t[0] Back\n");
	while(partEdit != '0')
	{
	printf("\n\tEnter Part to Edit: ");
	scanf(" %c", &partEdit);
	switch(partEdit)
	{
		case '1':
			printf("\n\tTitle \t: ");
			scanf(" %[^\n]s", planSat[selectEdit - 1].title);
			break;
		case '2':
			printf("\n\tTime \t: ");
			scanf(" %[^\n]s", planSat[selectEdit - 1].time);
			break;
		case '3':
			printf("\n\tDuration : ");
			scanf(" %[^\n]s", planSat[selectEdit - 1].duration);
			break;
		case '4':
			printf("\n\tDesc : ");
			scanf(" %[^\n]s", planSat[selectEdit - 1].desc);
			break;
	}
    }
    }
    fwrite(&planSat, sizeof(struct Plans),countSat, outfileSaturday);

	fclose(outfileSaturday);
}

void editsunday()
{
	int selectEdit;
	char partEdit;

	FILE *outfileSunday;
	FILE *countSunday;

    outfileSunday = fopen("addSunday.dat","w+");

	selectEdit = (int)menuDisplaySunday("EDIT", "Edit") - 48;
    if(countSun != 0 && selectEdit != 0)
    {
	system("cls");
	printf("\n\n\t::::EDIT PLAN MENU::::\n\n");

			printf("\t[1] Title \t: %s\n", planSun[selectEdit - 1].title);
			printf("\t[2] Time \t: %s\n", planSun[selectEdit - 1].time);
			printf("\t[3] Duration\t: %s\n", planSun[selectEdit - 1].duration);
			printf("\t[4] Desc \t: %s\n", planSun[selectEdit - 1].desc);

	printf("\n\t[0] Back\n");
	while(partEdit != '0')
	{
	printf("\n\tEnter Part to Edit: ");
	scanf(" %c", &partEdit);
	switch(partEdit)
	{
		case '1':
			printf("\n\tTitle \t: ");
			scanf(" %[^\n]s", planSun[selectEdit - 1].title);
			break;
		case '2':
			printf("\n\tTime \t: ");
			scanf(" %[^\n]s", planSun[selectEdit - 1].time);
			break;
		case '3':
			printf("\n\tDuration : ");
			scanf(" %[^\n]s", planSun[selectEdit - 1].duration);
			break;
		case '4':
			printf("\n\tDesc : ");
			scanf(" %[^\n]s", planSun[selectEdit - 1].desc);
			break;
	}
    }
    }
    fwrite(&planSun, sizeof(struct Plans),countSun, outfileSunday);

	fclose(outfileSunday);
}
