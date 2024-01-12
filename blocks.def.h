//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",        "weather",      3600,                             5},
    {"",        "upable",       0,                               25},
    {"",        "mailbox",      0,                               12},
    {"",        "cputemp",      5,                               21},
    {"",        "memory",       2,                               22},
    {"",        "ifstatus",     0,                                4},
    {"",        "volume",       0,                               10},
    {"",        "battery",      5,                               23},
    {"",        "clock",        2,                               24},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
