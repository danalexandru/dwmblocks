//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {" ",     " . /home/aldan/.config/scripts/get_keyboard_layout.sh",         1,      0},
    {"",       " . /home/aldan/.config/scripts/check_internet_connection.sh",   10,     0},
    {"",       " . /home/aldan/.config/scripts/get_battery_percentage.sh",      300,    0},
    {"",       " . /home/aldan/.config/scripts/get_date_time.sh",               1,      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
