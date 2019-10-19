void addmonday()
{
    FILE *outfileMonday;
    FILE *countMonday;
	struct Plans planTemp;
    outfileMonday = fopen("addMonday.dat", "a+");
    countMonday = fopen("countMonday.dat", "w+");
    //fread(&countMon, sizeof(countMon),1,countMonday);
	system("cls");
	countMon++;
   	printf("\n\n\t::::ADD PLAN MENU::::\n\n");
	printf("\n\tDay : Monday");
	printf("\n\tTitle : ");
	scanf(" %[^\n]s", &planTemp.title);

	printf("\tTime[hh:mm] : ");
	scanf(" %[^\n]s", &planTemp.time);

	printf("\tDuration : ");
	scanf(" %[^\n]s", &planTemp.duration);

	printf("\tDescription(Max.300 Char) : ");
	scanf(" %[^\n]s", &planTemp.desc);

	planMon[countMon - 1] = planTemp;
    putw(countMon, countMonday);
	fwrite(&planMon[countMon - 1], sizeof(struct Plans),1, outfileMonday);
	fclose(outfileMonday);
	fclose(countMonday);


	printf("\n\n\tYour Plan is Successfully Added!\n\n\tPress Any Key");
	getch();
}

void addtuesday()
{
    FILE *outfileTuesday;
    FILE *countTuesday;
	struct Plans planTemp;
    outfileTuesday = fopen("addTuesday.dat", "a+");
    countTuesday = fopen("countTuesday.dat", "w+");
    //fread(&countTue, sizeof(countTue),1,countTuesday);
	system("cls");
	countTue++;
   	printf("\n\n\t::::ADD PLAN MENU::::\n\n");
	printf("\n\tDay : Tuesday");

	printf("\n\tTitle : ");
	scanf(" %[^\n]s", &planTemp.title);

	printf("\tTime[hh:mm] : ");
	scanf(" %[^\n]s", &planTemp.time);

	printf("\tDuration : ");
	scanf(" %[^\n]s", &planTemp.duration);

	printf("\tDescription(Max.300 Char) : ");
	scanf(" %[^\n]s", &planTemp.desc);

	planTue[countTue - 1] = planTemp;
	putw(countTue, countTuesday);
	fwrite(&planTue[countTue - 1], sizeof(struct Plans),1, outfileTuesday);
	fclose(outfileTuesday);
	fclose(countTuesday);

	printf("\n\n\tYour Plan is Successfully Added!\n\n\tPress Any Key");
	getch();
}

void addwednesday()
{
	FILE *outfileWednesday;
    FILE *countWednesday;
	struct Plans planTemp;
    outfileWednesday = fopen("addWednesday.dat", "a+");
    countWednesday = fopen("countWednesday.dat", "w+");
    //fread(&countWed, sizeof(countWed),1,countWednesday);
	system("cls");
	countWed++;
   	printf("\n\n\t::::ADD PLAN MENU::::\n\n");
	printf("\n\tDay : Wednesday");

	printf("\n\tTitle : ");
	scanf(" %[^\n]s", &planTemp.title);

	printf("\tTime[hh:mm] : ");
	scanf(" %[^\n]s", &planTemp.time);

	printf("\tDuration : ");
	scanf(" %[^\n]s", &planTemp.duration);

	printf("\tDescription(Max.300 Char) : ");
	scanf(" %[^\n]s", &planTemp.desc);

	planWed[countWed - 1] = planTemp;
	putw(countWed, countWednesday);
	fwrite(&planWed[countWed - 1], sizeof(struct Plans),1, outfileWednesday);
	fclose(outfileWednesday);
	fclose(countWednesday);

	printf("\n\n\tYour Plan is Successfully Added!\n\n\tPress Any Key");
	getch();
}

void addthursday()
{
	FILE *outfileThursday;
    FILE *countThursday;
	struct Plans planTemp;
    outfileThursday = fopen("addThursday.dat", "a+");
    countThursday = fopen("countThursday.dat", "w+");
    //fread(&countThu, sizeof(countThu),1,countThursday);
	system("cls");
	countThu++;
   	printf("\n\n\t::::ADD PLAN MENU::::\n\n");
	printf("\n\tDay : Thursday");

	printf("\n\tTitle : ");
	scanf(" %[^\n]s", &planTemp.title);

	printf("\tTime[hh:mm] : ");
	scanf(" %[^\n]s", &planTemp.time);

	printf("\tDuration : ");
	scanf(" %[^\n]s", &planTemp.duration);

	printf("\tDescription(Max.300 Char) : ");
	scanf(" %[^\n]s", &planTemp.desc);

	planThu[countThu - 1] = planTemp;
	putw(countThu, countThursday);
	fwrite(&planThu[countThu - 1], sizeof(struct Plans),1, outfileThursday);
	fclose(outfileThursday);
	fclose(countThursday);

	printf("\n\n\tYour Plan is Successfully Added!\n\n\tPress Any Key");
	getch();
}

void addfriday()
{
	FILE *outfileFriday;
    FILE *countFriday;
	struct Plans planTemp;
    outfileFriday = fopen("addFriday.dat", "a+");
    countFriday = fopen("countFriday.dat", "w+");
    //fread(&countFri, sizeof(countFri),1,countFriday);
	system("cls");
	countFri++;
   	printf("\n\n\t::::ADD PLAN MENU::::\n\n");
	printf("\n\tDay : Friday");

	printf("\n\tTitle : ");
	scanf(" %[^\n]s", &planTemp.title);

	printf("\tTime[hh:mm] : ");
	scanf(" %[^\n]s", &planTemp.time);

	printf("\tDuration : ");
	scanf(" %[^\n]s", &planTemp.duration);

	printf("\tDescription(Max.300 Char) : ");
	scanf(" %[^\n]s", &planTemp.desc);

	planFri[countFri - 1] = planTemp;
	putw(countFri, countFriday);
	fwrite(&planFri[countFri - 1], sizeof(struct Plans),1, outfileFriday);
	fclose(outfileFriday);
	fclose(countFriday);

	printf("\n\n\tYour Plan is Successfully Added!\n\n\tPress Any Key");
	getch();
}

void addsaturday()
{
	FILE *outfileSaturday;
    FILE *countSaturday;
	struct Plans planTemp;
    outfileSaturday = fopen("addSaturday.dat", "a+");
    countSaturday = fopen("countSaturday.dat", "w+");
    //fread(&countSat, sizeof(countSat),1,countSaturday);
	system("cls");
	countSat++;
   	printf("\n\n\t::::ADD PLAN MENU::::\n\n");
	printf("\n\tDay : Saturday");

	printf("\n\tTitle : ");
	scanf(" %[^\n]s", &planTemp.title);

	printf("\tTime[hh:mm] : ");
	scanf(" %[^\n]s", &planTemp.time);

	printf("\tDuration : ");
	scanf(" %[^\n]s", &planTemp.duration);

	printf("\tDescription(Max.300 Char) : ");
	scanf(" %[^\n]s", &planTemp.desc);

	planSat[countSat - 1] = planTemp;
    putw(countSat, countSaturday);
	fwrite(&planSat[countSat - 1], sizeof(struct Plans),1, outfileSaturday);
	fclose(outfileSaturday);
	fclose(countSaturday);

	printf("\n\n\tYour Plan is Successfully Added!\n\n\tPress Any Key");
	getch();
}

void addsunday()
{
	FILE *outfileSunday;
    FILE *countSunday;
	struct Plans planTemp;
    outfileSunday = fopen("addSunday.dat", "a+");
    countSunday = fopen("countSunday.dat", "w+");
    //fread(&countSun, sizeof(countSun),1,countSunday);
	system("cls");
	countSun++;
   	printf("\n\n\t::::ADD PLAN MENU::::\n\n");
	printf("\n\tDay : Sunday");

	printf("\n\tTitle : ");
	scanf(" %[^\n]s", &planTemp.title);

	printf("\tTime[hh:mm] : ");
	scanf(" %[^\n]s", &planTemp.time);

	printf("\tDuration : ");
	scanf(" %[^\n]s", &planTemp.duration);

	printf("\tDescription(Max.300 Char) : ");
	scanf(" %[^\n]s", &planTemp.desc);

	planSun[countSun - 1] = planTemp;
	putw(countSun, countSunday);
	fwrite(&planSun[countSun - 1], sizeof(struct Plans),1, outfileSunday);
	fclose(outfileSunday);
	fclose(countSunday);

	printf("\n\n\tYour Plan is Successfully Added!\n\n\tPress Any Key");
	getch();
}
