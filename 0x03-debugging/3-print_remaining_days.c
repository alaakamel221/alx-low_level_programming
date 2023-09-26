#include<stdio.h>
#include"main.h"

/**
*print_remaining_days-takesadateandprintshowmanydaysare
*leftintheyear,takingleapyearsintoaccount
*@month:monthinnumberformat
*@day:dayofmonth
*@year:year
*Return:void
*/

voidprint_remaining_days(intmonth,intday,intyear)
{
if((year%4==0||year%400==0)&&!(year%100==0))
{
if(month>=2&&day>=60)
{
day++;
}

printf("Dayoftheyear:%d\n",day);
printf("Remainingdays:%d\n",366-day);
}
else
{
if(month==2&&day==60)
{
printf("Invaliddate:%02d/%02d/%04d\n",month,day-31,year);
}
else
{
printf("Dayoftheyear:%d\n",day);
printf("Remainingdays:%d\n",365-day);
}
}
}}
