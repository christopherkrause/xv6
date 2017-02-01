#include "types.h"
#include "stat.h"
#include "user.h"
#include "proc.c"

struct uproc{
	int pid;
	int ppid;
	int state;
	uint sz;
	char name[16];
}
