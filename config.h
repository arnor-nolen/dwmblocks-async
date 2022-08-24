#define CMDLENGTH 45
#define DELIMITER "]["
// #define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("awk -v a=\"$(awk '/cpu /{print $2+$4,$2+$4+$5}' /proc/stat; sleep 1)\" '/cpu /{split(a,b,\" \"); {printf(\"[﬙ %3.f%\"), 100*($2+$4-b[1])/($2+$4+$5-b[2])}}'  /proc/stat", 15, 0),
	BLOCK("free -t | awk 'NR == 2 {printf(\" %3.f%\"), $3/$2*100}'", 15, 0),
        BLOCK("(pulsemixer --get-mute; pulsemixer --get-volume) | awk 'NR==1{printf(\"%s\"), $1 ? \"ﱝ \": \"奔 \" };NR==2{printf(\"%3d%\"), $1}'", 0, 1),
        BLOCK("~/sum_work.sh | awk '{printf(\"華 %4.1fh\"), $1}'", 15, 0),
	BLOCK("date '+%a %F %I:%M %p'", 5, 0),
        BLOCK("xkblayout-state print \"%s]\"", 0, 2),
};
