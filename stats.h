
// struct Stats compute_statistics(const float* numberset, int setlength);

//typedef void (*alerter_funcptr)();

typedef int (*alerter_funcptr)(int,int);

extern int emailAlertCallCount = 0;
extern int ledAlertCallCount = 0;
