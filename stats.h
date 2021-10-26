
// struct Stats compute_statistics(const float* numberset, int setlength);

//typedef void (*alerter_funcptr)();

typedef int (*alerter_funcptr)(int,int);

static extern int emailAlertCallCount;
static extern int ledAlertCallCount;
