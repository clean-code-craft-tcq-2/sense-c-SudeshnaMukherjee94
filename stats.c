#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
 struct Stats s;
   int sum=0,i;
   s.min=numberset[0];
   s.max=numberset[0];
   for(i=0;i<setlength;i++)
   {
      sum+=numset[i];
      if (s.min>=numberset[i])
      {
          s.min=numberset[i];
      }
      if (s.max<=numberset[i])
      {
          s.max=numberset[i];
      }
   }
   
    s.average = sum/setlength;
//    s.min = 0;
//    s.max = 0;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
