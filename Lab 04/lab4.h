#ifndef TIMEFUNCTIONS_H
#define TIMEFUNCTIONS_H
#include <stdio.h>

int loginHour, loginMin;
int logoutHour, logoutMin;

int loginDone = 0;
int logoutDone = 0;

void readLoginTime()
{
    printf("Enter Login Time (HH MM): ");
    scanf("%d %d", &loginHour, &loginMin);
    loginDone = 1;
}

void readLogoutTime()
{
    printf("Enter Logout Time (HH MM): ");
    scanf("%d %d", &logoutHour, &logoutMin);
    logoutDone = 1;
}

int convertToMinutes(int hour, int minute)
{
	
    return (hour * 60) + minute;
}

void convertToHHMM(int minutes)
{
    int hour = minutes / 60;
    int minute = minutes % 60;

    printf("%d Hours %d Minutes\n", hour, minute);
}

void displayDifference()
{
	if (loginDone == 0 || logoutDone ==0)
	{
    	printf("Please enter Login and Logout Time first.\n");
    	return;
	}
    int loginTotal;
    int logoutTotal;
    int diff;

    loginTotal = convertToMinutes(loginHour, loginMin);
    logoutTotal = convertToMinutes(logoutHour, logoutMin);

    if (logoutTotal >= loginTotal)
        diff = logoutTotal - loginTotal;
    else
        diff = (24 * 60 - loginTotal) + logoutTotal;

    printf("Total System Usage : ");
    convertToHHMM(diff);
}

void displayInMinutes()
{
	if (loginDone == 0 || logoutDone ==0)
	{
    	printf("Please enter Login and Logout Time first.\n");
    	return;
	}

    int loginTotal;
    int logoutTotal;
    int diff;

    loginTotal = convertToMinutes(loginHour, loginMin);
    logoutTotal = convertToMinutes(logoutHour, logoutMin);

    if (logoutTotal >= loginTotal)
        diff = logoutTotal - loginTotal;
    else
        diff = (24 * 60 - loginTotal) + logoutTotal;

    printf("Total System Usage : %d Minutes\n", diff);
}

#endif