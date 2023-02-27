#include <stdio.h>
typedef enum Week {SUN = 0, MON, TUE, WED, THU, FRI, SAT}DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int first_of_month[] = {2, 5, 5, 1, 3, 6, 1, 4, 0, 2, 5, 0};
    int dow = (first_of_month[month - 1] + day - 1) % 7;
    return dow;
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case 0: printf("Sunday.\n"); break;
		case 1: printf("Monday.\n"); break;
		case 2: printf("Tuesday.\n"); break;
		case 3: printf("Wednesday.\n"); break;
		case 4: printf("Thursday.\n"); break;
		case 5: printf("Friday.\n"); break;
		case 6: printf("Saturday.\n"); break;
	}
}