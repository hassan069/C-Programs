#include<stdio.h>
typedef struct{
    int hour;
    int minutes;
    int seconds;
    }time;
time addTime(time t1,time t2);
int main()
{
    time t1,t2,t3;
    scanf("%d",&t1.hour);
    scanf("%d",&t1.minutes);
    scanf("%d",&t1.seconds);

    scanf("%d",&t2.hour);
    scanf("%d",&t2.minutes);
    scanf("%d",&t2.seconds);

    t3=addTime(t1,t2);

    printf("%d:%d:%d",t3.hour,t3.minutes,t3.seconds);


    return 0;
}
time addTime(time t1,time t2)
{
    int a,b,c,d;
    time t3;

    t3.hour=t1.hour+t2.hour;
    t3.minutes=t1.minutes+t2.minutes;
    t3.seconds=t1.seconds+t2.seconds;

        if(t3.seconds>=60){
        c=t3.seconds/60;
        d=t3.seconds%60;
        t3.minutes=t3.minutes+c;
        t3.seconds=d;
     }

    if(t3.minutes>=60){
        a=t3.minutes/60;
        b=t3.minutes%60;
        t3.hour=t3.hour+a;
        t3.minutes=b;
    }

   if(t3.hour>23){
        t3.hour=t3.hour%24;
    }
        return t3;
}



