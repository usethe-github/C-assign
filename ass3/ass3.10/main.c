#include<stdio.h>

int leap_year(int,int);

int main()
{
int jan=31,feb=28,march=31,april=30,may=31,june=30,july=31,august=31,september=30,october=31,november=30,december=31;
int month[]={jan,feb,march,april,may,june,july,august,september,october,november,december};
int diff,rem,leap_yr,non_leap_yr,odd_days,sum,tot_odd_days;

int dd=1,mm=1,yyyy=1970,dd1,mm1,yyyy1;

enum week_day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
enum week_day w;
printf("Referance date-month-year is:%d-%d-%d",dd,mm,yyyy);

printf("\nEnter any date-month-year whose day is to be found :");
scanf("%d %d %d",&dd1,&mm1,&yyyy1);

diff = yyyy1 - yyyy;
leap_yr = leap_year(yyyy,yyyy1);
non_leap_yr = diff - leap_yr;
odd_days = non_leap_yr + (leap_yr * 2);

for(int i=0; i<(mm1-1); i++)
{
    sum = sum + month[i] ;
}

tot_odd_days=odd_days + sum + dd1;

do
{
	rem =tot_odd_days % 7;
	tot_odd_days  = rem;

}while(rem > 6);

if((yyyy1 % 4 == 0 && yyyy1 % 100 != 0) || (yyyy1 % 400 == 0))
{  
  if( mm1 > 2)
	 w =  (tot_odd_days + 4 + 1) % 7;
  else
   	w =  (tot_odd_days + 4 ) % 7;
}
else
{
   w = ((w + 1) % 7);
}
switch(w)
{
	case 0:
	printf("\nday of entered date is sunday");
        break;

	case 1:
	printf("\nday of entered date is monday");
	break;

	case 2:
	printf("\nday of entered date is tuesday");
	break;

	case 3:
	printf("\nday of entered date is wednesday");
	break;
	
	case 4:
	printf("\nday of entered date is thursday");
	break;
	
	case 5:
	printf("\nday of entered date is friday");
	break;
	
	case 6:
	printf("\nday of entered date is saturday");
	break;
}

return 0;
}
int leap_year( int yyyy,int yyyy1)
{
	
 int leap_yr_count=0;
for(int i = yyyy; i < yyyy1; i++)
{
if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
 {
   leap_yr_count++;
 }
}

return leap_yr_count;
}



