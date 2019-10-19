void countRead()
{
    FILE *countMonday, *countTuesday, *countWednesday, *countThursday, *countFriday, *countSaturday, *countSunday;
    FILE *infileMonday, *infileTuesday, *infileWednesday, *infileThursday, *infileFriday, *infileSaturday, *infileSunday;

    countMonday = fopen("countMonday.dat", "r+");
    countTuesday = fopen("countTuesday.dat", "r+");
    countWednesday = fopen("countWednesday.dat", "r+");
    countThursday = fopen("countThursday.dat", "r+");
    countFriday = fopen("countFriday.dat", "r+");
    countSaturday = fopen("countSaturday.dat", "r+");
    countSunday = fopen("countSunday.dat", "r+");

    infileMonday = fopen("addMonday.dat", "r+");
    infileTuesday = fopen("addTuesday.dat", "r+");
    infileWednesday = fopen("addWednesday.dat", "r+");
    infileThursday = fopen("addThursday.dat", "r+");
    infileFriday = fopen("addFriday.dat", "r+");
    infileSaturday = fopen("addSaturday.dat", "r+");
    infileSunday = fopen("addSunday.dat", "r+");


    fread(&countMon, sizeof(countMon),1,countMonday);
    fread(&countTue, sizeof(countTue),1,countTuesday);
    fread(&countWed, sizeof(countWed),1,countWednesday);
    fread(&countThu, sizeof(countThu),1,countThursday);
    fread(&countFri, sizeof(countFri),1,countFriday);
    fread(&countSat, sizeof(countSat),1,countSaturday);
    fread(&countSun, sizeof(countSun),1,countSunday);

    fread(&planMon, sizeof(struct Plans), countMon, infileMonday);
    fread(&planTue, sizeof(struct Plans), countTue, infileTuesday);
    fread(&planWed, sizeof(struct Plans), countWed, infileWednesday);
    fread(&planThu, sizeof(struct Plans), countThu, infileThursday);
    fread(&planFri, sizeof(struct Plans), countFri, infileFriday);
    fread(&planSat, sizeof(struct Plans), countSat, infileSaturday);
    fread(&planSun, sizeof(struct Plans), countSun, infileSunday);

    fclose(countMonday);
    fclose(countTuesday);
    fclose(countWednesday);
    fclose(countThursday);
    fclose(countFriday);
    fclose(countSaturday);
    fclose(countSunday);

    fclose(infileMonday);
    fclose(infileTuesday);
    fclose(infileWednesday);
    fclose(infileThursday);
    fclose(infileFriday);
    fclose(infileSaturday);
    fclose(infileSunday);
}
