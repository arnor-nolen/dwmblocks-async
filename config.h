#define CMDLENGTH 45
#define DELIMITER "]["
// #define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("awk -v a=\"$(awk '/cpu /{print $2+$4,$2+$4+$5}' /proc/stat; sleep 1)\" '/cpu /{split(a,b,\" \"); {printf(\"[ %3.f%\"), 100*($2+$4-b[1])/($2+$4+$5-b[2])}}'  /proc/stat", 15, 0),
	BLOCK("free -t | awk 'NR == 2 {printf(\" %3.f%\"), $3/$2*100}'", 15, 0),
	BLOCK("pulsemixer --get-volume | awk '{printf(\" %3d%\"), $1}'", 0, 1),
	BLOCK("date '+%a %F %I:%M %p]'", 5, 0),
};
