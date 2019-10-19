void deletemonday()
{
	int i,selectDelete;

    FILE *outfileMonday, *countMonday;

    outfileMonday = fopen("addMonday.dat", "w+");
    countMonday = fopen("countMonday.dat", "w+");

	selectDelete = (int)menuDisplayMonday("DELETE", "Delete") - 48;
	if(countMon !=0 && selectDelete != 0)
	{
		for( i = selectDelete; i < countMon; i++) planMon[i-1] = planMon[i];
		countMon--;
		deletePrint();
	}
	putw(countMon, countMonday);
	fwrite(&planMon, sizeof(struct Plans),countMon, outfileMonday);
	fclose(outfileMonday);
	fclose(countMonday);
}

void deletetuesday()
{
	int i,selectDelete;

	FILE *outfileTuesday, *countTuesday;

    outfileTuesday= fopen("addTuesday.dat", "w+");
    countTuesday = fopen("countTuesday.dat", "w+");

	selectDelete = (int)menuDisplayTuesday("DELETE", "Delete") - 48;
	if(countTue !=0 && selectDelete != 0)
	{
		for( i = selectDelete; i < countTue; i++) planTue[i-1] = planTue[i];
		countTue--;
        deletePrint();
    }
    putw(countTue, countTuesday);
	fwrite(&planTue, sizeof(struct Plans),countTue, outfileTuesday);
	fclose(outfileTuesday);
	fclose(countTuesday);
}

void deletewednesday()
{
	int i,selectDelete;

	FILE *outfileWednesday, *countWednesday;

    outfileWednesday = fopen("addWednesday.dat", "w+");
    countWednesday = fopen("countWednesday.dat", "w+");

	selectDelete = (int)menuDisplayWednesday("DELETE", "Delete") - 48;
	if(countWed !=0 && selectDelete != 0)
	{
		for( i = selectDelete; i < countWed; i++) planWed[i-1] = planWed[i];
		countWed--;
        deletePrint();
    }
    putw(countWed, countWednesday);
	fwrite(&planWed, sizeof(struct Plans),countWed, outfileWednesday);
	fclose(outfileWednesday);
	fclose(countWednesday);
}

void deletethursday()
{
	int i,selectDelete;

	FILE *outfileThursday, *countThursday;

    outfileThursday = fopen("addThursday.dat", "w+");
    countThursday = fopen("countThursday.dat", "w+");

	selectDelete = (int)menuDisplayThursday("DELETE", "Delete") - 48;
	if(countThu !=0 && selectDelete != 0)
	{
		for( i = selectDelete; i < countThu; i++) planThu[i-1] = planThu[i];
        countThu--;
        deletePrint();
    }
    putw(countThu, countThursday);
	fwrite(&planThu, sizeof(struct Plans),countThu, outfileThursday);
	fclose(outfileThursday);
	fclose(countThursday);
}


void deletefriday()
{
	int i,selectDelete;

	FILE *outfileFriday, *countFriday;

    outfileFriday = fopen("addFriday.dat", "w+");
    countFriday = fopen("countFriday.dat", "w+");

	selectDelete = (int)menuDisplayFriday("DELETE", "Delete") - 48;
	if(countFri !=0 && selectDelete != 0)
	{
		for( i = selectDelete; i < countFri; i++) planFri[i-1] = planFri[i];
		countFri--;
        deletePrint();
    }
    putw(countFri, countFriday);
	fwrite(&planFri, sizeof(struct Plans),countFri, outfileFriday);
	fclose(outfileFriday);
	fclose(countFriday);
}

void deletesaturday()
{
	int i,selectDelete;

	FILE *outfileSaturday, *countSaturday;

    outfileSaturday = fopen("addSaturday.dat", "w+");
    countSaturday = fopen("countSaturday.dat", "w+");

	selectDelete = (int)menuDisplaySaturday("DELETE", "Delete") - 48;
	if(countSat !=0 && selectDelete != 0)
	{
		for( i = selectDelete; i < countSat; i++) planSat[i-1] = planSat[i];
		countSat--;
        deletePrint();
	}
	putw(countSat, countSaturday);
	fwrite(&planSat, sizeof(struct Plans),countSat, outfileSaturday);
	fclose(outfileSaturday);
	fclose(countSaturday);
}

void deletesunday()
{
	int i,selectDelete;

	FILE *outfileSunday, *countSunday;

    outfileSunday= fopen("addSunday.dat", "w+");
    countSunday = fopen("countSunday.dat", "w+");

	selectDelete = (int)menuDisplaySunday("DELETE", "Delete") - 48;
	if(countSun !=0 && selectDelete != 0)
	{
		for( i = selectDelete; i < countSun; i++) planSun[i-1] = planSun[i];
		countSun--;
		deletePrint();
	}
	putw(countSun, countSunday);
	fwrite(&planSun, sizeof(struct Plans),countSun, outfileSunday);
	fclose(outfileSunday);
	fclose(countSunday);
}

void deletePrint()
{
	printf("\n\n\tYour Plan is Successfully Deleted!\n\n\tPress Any Key");
	getch();
}
