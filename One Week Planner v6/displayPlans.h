void displayPlans()
{
    int i;
	system("cls");
	printf("\n\n\t::::Your Plans::::\n\n");
	FILE *infileMonday;
	FILE *countMonday;
	infileMonday = fopen("addMonday.dat", "r+");
	countMonday = fopen("countMonday.dat", "r");

		fread(&countMon, sizeof(countMon),1,countMonday);
		fread(&planMon, sizeof(struct Plans), countMon, infileMonday);

    if(countMon == 0) printf("\t%-10s %s\n","MONDAY" ,"No Plan Scheduled");
    else if(countMon > 0)
    {
        printf("\t%-10s %s\t %-25s %-20s %-15s %-10s\n","MONDAY","NO","TITLE","TIME","DURATION","DESC");
        printf("\t%10s -------------------------------------------------------------------------\n"," ");
    }
        for(i=0 ; i<countMon ; i++) //using loop to display the plan added in the struct array
			{
			    printf("\t%10s %d\t %-25s %-20s %-15s %-10s\n"," ",i+1,planMon[i].title,planMon[i].time,planMon[i].duration,planMon[i].desc);
				/*printf("\tPlan %d :\n", i+1);
				printf("\tTitle \t: %s\n", planMon[i].title);
				printf("\tTime \t: %s\n", planMon[i].time);
				printf("\tDuration: %s\n", planMon[i].duration);
				printf("\tDesc \t: %s\n\n", planMon[i].desc);*/
			}
        printf("\n");
        fclose(infileMonday);
        fclose(countMonday);

    FILE *infileTuesday;
	FILE *countTuesday;
	infileTuesday = fopen("addTuesday.dat", "r+");
	countTuesday = fopen("countTuesday.dat", "r");

        fread(&countTue, sizeof(countTue),1,countTuesday);
		fread(&planTue, sizeof(struct Plans), countTue, infileTuesday);

	if(countTue == 0) printf("\t%-10s %s\n","TUESDAY" ,"No Plan Scheduled");
	else if(countTue > 0)
    {
        printf("\t%-10s %s\t %-25s %-20s %-15s %-10s\n","TUESDAY","NO","TITLE","TIME","DURATION","DESC");
        printf("\t%10s -------------------------------------------------------------------------\n"," ");
    }

			for(i=0 ; i<countTue ; i++)
			{
			    printf("\t%10s %d\t %-25s %-20s %-15s %-10s\n"," ",i+1,planTue[i].title,planTue[i].time,planTue[i].duration,planTue[i].desc);
				/*printf("\tPlan %d :\n", i+1);
				printf("\tTitle \t: %s\n", planTue[i].title);
				printf("\tTime \t: %s\n", planTue[i].time);
				printf("\tDuration: %s\n", planTue[i].duration);
				printf("\tDesc \t: %s\n\n", planTue[i].desc);*/
			}
		printf("\n");
		fclose(infileTuesday);
        fclose(countTuesday);

    FILE *infileWednesday;
	FILE *countWednesday;
	infileWednesday = fopen("addWednesday.dat", "r+");
	countWednesday = fopen("countWednesday.dat", "r");

        fread(&countWed, sizeof(countWed),1,countWednesday);
		fread(&planWed, sizeof(struct Plans), countWed, infileWednesday);

	if(countWed == 0) printf("\t%-10s %s\n","WEDNESDAY" ,"No Plan Scheduled");
	else if(countWed > 0)
    {
        printf("\t%-10s %s\t %-25s %-20s %-15s %-10s\n","WEDNESDAY","NO","TITLE","TIME","DURATION","DESC");
        printf("\t%10s -------------------------------------------------------------------------\n"," ");
    }

			for(i=0 ; i<countWed ; i++)
			{
			    printf("\t%10s %d\t %-25s %-20s %-15s %-10s\n"," ",i+1,planWed[i].title,planWed[i].time,planWed[i].duration,planWed[i].desc);
				/*printf("\tPlan %d :\n", i+1);
				printf("\tTitle \t: %s\n", planWed[i].title);
				printf("\tTime \t: %s\n", planWed[i].time);
				printf("\tDuration: %s\n", planWed[i].duration);
				printf("\tDesc \t: %s\n\n", planWed[i].desc);*/
			}
		printf("\n");
		fclose(infileWednesday);
        fclose(countWednesday);

    FILE *infileThursday;
	FILE *countThursday;
	infileThursday = fopen("addThursday.dat", "r+");
	countThursday = fopen("countThursday.dat", "r");

        fread(&countThu, sizeof(countThu),1,countThursday);
		fread(&planThu, sizeof(struct Plans), countThu, infileThursday);

	if(countThu == 0) printf("\t%-10s %s\n","THURSDAY" ,"No Plan Scheduled");
	else if(countThu > 0)
    {
        printf("\t%-10s %s\t %-25s %-20s %-15s %-10s\n","THURSDAY","NO","TITLE","TIME","DURATION","DESC");
        printf("\t%10s -------------------------------------------------------------------------\n"," ");
    }
			for(i=0 ; i<countThu ; i++)
			{
			    printf("\t%10s %d\t %-25s %-20s %-15s %-10s\n"," ",i+1,planThu[i].title,planThu[i].time,planThu[i].duration,planThu[i].desc);
				/*printf("\tPlan %d :\n", i+1);
				printf("\tTitle \t: %s\n", planThu[i].title);
				printf("\tTime \t: %s\n", planThu[i].time);
				printf("\tDuration: %s\n", planThu[i].duration);
				printf("\tDesc \t: %s\n\n", planThu[i].desc);*/
			}
		printf("\n");
		fclose(infileThursday);
        fclose(countThursday);

    FILE *infileFriday;
	FILE *countFriday;
	infileFriday = fopen("addFriday.dat", "r+");
	countFriday = fopen("countFriday.dat", "r");

        fread(&countFri, sizeof(countThu),1,countFriday);
		fread(&planFri, sizeof(struct Plans), countFri, infileFriday);

	if(countFri == 0) printf("\t%-10s %s\n","FRIDAY" ,"No Plan Scheduled");
	else if(countFri > 0)
    {
        printf("\t%-10s %s\t %-25s %-20s %-15s %-10s\n","FRIDAY","NO","TITLE","TIME","DURATION","DESC");
        printf("\t%10s -------------------------------------------------------------------------\n"," ");
    }

			for(i=0 ; i<countFri ; i++)
			{
			    printf("\t%10s %d\t %-25s %-20s %-15s %-10s\n"," ",i+1,planFri[i].title,planFri[i].time,planFri[i].duration,planFri[i].desc);
				/*printf("\tPlan %d :\n", i+1);
				printf("\tTitle \t: %s\n", planFri[i].title);
				printf("\tTime \t: %s\n", planFri[i].time);
				printf("\tDuration: %s\n", planFri[i].duration);
				printf("\tDesc \t: %s\n\n", planFri[i].desc);*/
			}
		printf("\n");
		fclose(infileFriday);
        fclose(countFriday);

    FILE *infileSaturday;
	FILE *countSaturday;
	infileSaturday = fopen("addSaturday.dat", "r+");
	countSaturday = fopen("countSaturday.dat", "r");

        fread(&countSat, sizeof(countSat),1,countSaturday);
		fread(&planSat, sizeof(struct Plans), countSat, infileSaturday);

	if(countSat == 0) printf("\t%-10s %s\n","SATURDAY" ,"No Plan Scheduled");
	else if(countSat > 0)
    {
        printf("\t%-10s %s\t %-25s %-20s %-15s %-10s\n","SATURDAY","NO","TITLE","TIME","DURATION","DESC");
        printf("\t%10s -------------------------------------------------------------------------\n"," ");
    }

			for(i=0 ; i<countSat ; i++)
			{
			    printf("\t%10s %d\t %-25s %-20s %-15s %-10s\n"," ",i+1,planSat[i].title,planSat[i].time,planSat[i].duration,planSat[i].desc);/*
				printf("\tPlan %d :\n", i+1);
				printf("\tTitle \t: %s\n", planSat[i].title);
				printf("\tTime \t: %s\n", planSat[i].time);
				printf("\tDuration: %s\n", planSat[i].duration);
				printf("\tDesc \t: %s\n\n", planSat[i].desc);*/
			}
		printf("\n");
		fclose(infileSaturday);
        fclose(countSaturday);

    FILE *infileSunday;
	FILE *countSunday;
	infileSunday = fopen("addSunday.dat", "r+");
	countSunday = fopen("countSunday.dat", "r");

        fread(&countSun, sizeof(countSun),1,countSunday);
		fread(&planSun, sizeof(struct Plans), countSun, infileSunday);

	if(countSun == 0) printf("\t%-10s %s\n","SUNDAY" ,"No Plan Scheduled");
	else if(countSun > 0)
    {
        printf("\t%-10s %s\t %-25s %-20s %-15s %-10s\n","SUNDAY","NO","TITLE","TIME","DURATION","DESC");
        printf("\t%10s -------------------------------------------------------------------------\n"," ");
    }

			for(i=0 ; i<countSun ; i++)
			{
			    printf("\t%10s %d\t %-25s %-20s %-15s %-10s\n"," ",i+1,planSun[i].title,planSun[i].time,planSun[i].duration,planSun[i].desc);
				/*printf("\tPlan %d :\n", i+1);
				printf("\tTitle \t: %s\n", planSun[i].title);
				printf("\tTime \t: %s\n", planSun[i].time);
				printf("\tDuration: %s\n", planSun[i].duration);
				printf("\tDesc \t: %s\n\n", planSun[i].desc);*/
			}
		printf("\n");
		fclose(infileSunday);
		fclose(countSunday);

	printf("\n\tPress Any Key to Go Back . . .");
	getch();
}
