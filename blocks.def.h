//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/			/*Command*/									/*Update Interval*/	/*Update Signal*/
//	{"^c#61afef^  ^c#abb2bf^",	 "cat /sys/class/power_supply/BAT0/capacity | awk '{print $0\"%\"}'",		60,			0},
	{"^c#c678dd^ ^c#abb2bf^",    "top -b -n1 | grep \"Cpu(s)\" | awk '{printf \"%5.2f\%\", $1 + $2}'",		1,			0},
	{"^c#c678dd^ ^c#abb2bf^",    "free -m | awk '/^Mem/ { print $3\"MB/\"$2\"MB\" }' | sed s/i//g",		30,			0},
	{"^c#c678dd^ ^c#abb2bf^",    "df -h | awk 'FNR == 4 {print $4\"B\"}'",					60,			0},
	{"^c#61afef^  ^c#abb2bf^",	 "checkupdates | wc -l | awk '{print $0 \" pkg\"}'",				3600,			1},
	{"^c#d19a66^ ^c#abb2bf^", 	 "date '+%a, %d. %b' ",								5,			0},
	{"^c#d19a66^ ^c#abb2bf^",   "date '+%_H:%M'  ",  								5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "^c#56B6C2^ | ";
static unsigned int delimLen = 50;
