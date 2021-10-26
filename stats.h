
// struct Stats compute_statistics(const float* numberset, int setlength);

//typedef void (*alerter_funcptr)();

typedef int (*alerter_funcptr)(int,int);

static int emailAlertCallCount;
static int ledAlertCallCount;
// extern int ledAlertCallCount;
