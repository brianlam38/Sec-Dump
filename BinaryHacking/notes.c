/* PART 1: BASIC LINUX COMMANDS */
pwd 	         - print working directory // shows current location
man <name>  	 - show manual page of <name> command
ls [-l] [-a]	 - show content of the current location
clear			 - clears terminal screen
cat <path>		 - show content of the file at <path>
cd <path>		 - change directory/location
mkdir			 - make/create a new directory
touch <path>	 - create a new empty file
rm [-r] <path>	 - remove/delete file, [-r] recursive flag
echo <text>		 - print <text>
uname [-a]		 - display system information
free [-h]		 - show memory usage		// only in LINUX
df [-h]			 - show disk space usage
ps [aux]		 - print process information
id				 - show current user id
hexdump			 - display data in hex numbers
shutdown now	 - shutdown the machine at specified time "now"

/* PART 2: WRITING A PROGRAM IN C */
echo <text> > <filename>				- inserting content into a file
echo follow the white rabbit > rabbit	

cat <filename> | hexdump			    - showing content of a file as hex values
cat rabbit | hexdump    			  	

sudo apt-get install VIM				- installing VIM. Mac by default has VIM

echo $?									- displays exit code (1 or 0) of last run program

// Environment variables
env | grep USER

// Shell reads character by character
./matrix $USER		- Shell reads $ then knows the next characters will be a variable 
./matrix \$USER		- Using backslash \ Shell will not treat the following characters as special

/* PART 3: WRITING A PROGRAM IN PYTHON */
file  				- displays information on what type of file an object is. GIF, tar, ascii text, html etc.

// Using python in terminal
python				- runs the python program in terminal

// Inside VIM
:!<command>			- runs a command with VIM in the background
					- arguments passed through a program start with the program file name
:!python % normal_arg "with quotes and spaces" no spaces      and many spaces
























