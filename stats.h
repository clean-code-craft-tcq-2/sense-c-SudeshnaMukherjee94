
// struct Stats compute_statistics(const float* numberset, int setlength);

//typedef void (*alerter_funcptr)();
typedef int (*alerter_funcptr)(int,int);
int check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
{
    int a = maxThreshold;
    int b = computedStats.average;
    int Alert1 = alerters[0](a,b);
    int Alert2 = alerters[1](a,b);
    if (Alert1+Alert2 > 0)
    return 1;
    else
    return 0;  
}
extern int emailAlertCallCount;
extern int ledAlertCallCount;
