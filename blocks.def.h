//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/   /*Command*/   /*Update Interval*/   /*Update Signal*/
	{"",       "weather",    600,                  5},
	{"",       "mailbox",    0,                    12},
	{"",       "cputemp",    5,                    21},
	{"",       "memory",     2,                    22},
	/* {"",       "connstatus", 0,                    4}, */
	{"",       "ifstatus",   0,                    4},
	{"",       "volume",     0,                    10},
	{"",       "battery",    5,                    23},
	{"",       "clock",      30,                   24},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 5;
