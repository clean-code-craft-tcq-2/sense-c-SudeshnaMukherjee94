#include "stats.h"
/*#define computeStats {"",0,0.0f} 
struct Stats //new
{
    float average;
    float max;
    float min;
};*/

struct Stats compute_statistics(const float* numberset, int setlength) {
 struct Stats s; 
    s.average = 0;
    s.min = 0;
    s.max = 0;
}

//#define emailAlerter (int max, int threshold)
//#define ledAlerter (int max, int threshold)

int emailAlerter (int max, int threshold)
{
    if (max>threshold)
        return 1;
    else 
        return 0;
}

int ledAlerter (int max, int threshold)
{
    if (max>threshold)
        return 1;
    else 
        return 0;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
