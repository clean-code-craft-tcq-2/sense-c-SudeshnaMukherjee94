#include "stats.h"
#define computeStats {"",0,0.0f} 
struct Stats //new
{
    double average;
    float max;
    float min;
};

static struct Stats compute_statistics(const float* numberset, int setlength) {
 struct Stats s; 
    s.average = 0;
    s.min = 0;
    s.max = 0;
}

//#define emailAlerter (int max, int threshold)
//#define ledAlerter (int max, int threshold)

static int emailAlerter (int max, int threshold)
{
    if (max>threshold)
        return 1;
    else 
        return 0;
}

static int ledAlerter (int max, int threshold)
{
    if (max>threshold)
        return 1;
    else 
        return 0;
}

static int check_and_alert (float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
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

// int emailAlertCallCount = 0;
// int ledAlertCallCount = 0;
