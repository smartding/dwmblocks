//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/        /*Update Interval*/              /*Update Signal*/
    {"",        "weather.sh",      3600,                            5},
    {"",        "ups.sh",          0,                               25},
    {"",        "mailbox.sh",      0,                               12},
    {"",        "cputemp.sh",      5,                               21},
    {"",        "memory.sh",       2,                               22},
    {"",        "ifstatus.sh",     0,                                4},
    {"",        "volume.sh",       0,                               10},
    {"",        "battery.sh",      5,                               23},
    {"",        "clock.sh",        2,                               24},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
