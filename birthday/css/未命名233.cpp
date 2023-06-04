#include<stdio.h>
int day=1;
long long road=0;
long float determination=1, destination=4*365;
float *cindy;
main()
{
    for(;road<=destination;road+=day)
    {
        cindy=&road;
        if(determination)*cindy=destination;
        destination++;
        printf("%f/n",*cindy);
    }
}
