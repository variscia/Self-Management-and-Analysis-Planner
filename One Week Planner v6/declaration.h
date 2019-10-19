int countMon = 0, countTue = 0, countWed = 0, countThu = 0, countFri=0, countSat = 0, countSun = 0;

char menuDisplayMonday(char title[], char lowerTitle[]);
char menuDisplayTuesday(char title[], char lowerTitle[]);
char menuDisplayWednesday(char title[], char lowerTitle[]);
char menuDisplayThursday(char title[], char lowerTitle[]);
char menuDisplayFriday(char title[], char lowerTitle[]);
char menuDisplaySaturday(char title[], char lowerTitle[]);
char menuDisplaySunday(char title[], char lowerTitle[]);

int dayMenu();
void deletePrint();

void displayPlans();

void addMenu();
void addmonday();
void addtuesday();
void addwednesday();
void addthursday();
void addfriday();
void addsaturday();
void addsunday();

void deleteMenu();
void deletemonday();
void deletetuesday();
void deletewednesday();
void deletethursday();
void deletefriday();
void deletesaturday();
void deletesunday();

void editMenu();
void editmonday();
void edittuesday();
void editwednesday();
void editthursday();
void editfriday();
void editsaturday();
void editsunday();

void countRead();

struct Plans
{
	char title[30];
	char time[6];
	char duration[20];
	char desc[300];
};
//array struct is used, the maximum array is equal to the maximum plan to store in one day
struct Plans planMon[10], planTue[10], planWed[10], planThu[10], planFri[10], planSat[10], planSun[10];
