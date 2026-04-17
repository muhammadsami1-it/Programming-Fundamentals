#include <stdio.h>
int main (void){

float upto50, upto150, upto250, above250, t_bill, service;
float t_min;
printf ("Enter total number of minutes: ");
scanf("%f",&t_min);

if (t_min <=50)
{
service = (t_min * 1.0) * 0.12;
t_bill= (t_min *1.0) +service;
printf ("The Total bill of your all duation is %f", t_bill);
} 

else if (t_min <=150)
{
upto150 = t_min-50;
service=(upto150*0.80 + 50*1.0)*0.12;
t_bill= (upto150*0.80 + 50*1.0) + service;
printf ("The Total bill of your all duation is %f", t_bill);
}

else if (t_min <=250)
{
upto250= t_min-150;
service= (upto250*0.50+ 100*0.80+50*1.0) *0.12;
t_bill=(upto250*0.50+ 100*0.80+50*1.0)+service;
printf (" The total bill of your call duration is %f", t_bill);
}
else
{
above250=t_min-250;
service=(above250*0.30+100*0.50+100*0.80+50*1.0)*0.12;
t_bill=(above250*0.30+100*0.50+100*0.80+50*1.0)+service;
printf("The lotal bill of your call duration is %f", t_bill);
}
return 0;
}