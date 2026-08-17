#include <stdio.h>
int main() {
    printf(
    "beep - Plays a beep sound.\n"
    "choice prompt command1 command2 - Prompt \"$prompt[y/n]?\" and waits for the user to choose between y or n (case insensitive). If the user chooses y, execute command1, else, execute command2.\n"
    "clear / cls - Clear screen.\n"
    "copy / cp file1 file2 - Copy contents of file1 to file2.\n"
    "date - Displays the date and time.\n"
    "delete / del file1 file2 ... - Deletes file1, file2,...\n"
    "directory / dir / ls - Lists all files and subdirectories in the current working directory.\n"
    "echo str1 str2 ... - Outputs str1, str2, ... (space separated).\n"
    "fc / diff file1 file2 - Displays the differences line by line between file1 and file2.\n"
    "help - Displays information for all available commands.\n"
    "measure command - Runs the command $command and outputs the time taken below.\n"
    "mkdir / md dir1 dir2 ... - Makes directories dir1, dir2, ...\n"
    "pwd - Print working directory.\n"
    "rename / ren name1 name2 - Renames file or directory with name1 to name2.\n"
    "rmdir / rd dir1 dir2 ... - Removes dir1's inner contents and itself, same with dir2, etc."
    "time - Sets the system time.\n"
    "type / cat file1 file2 ... - Output the inner contents of file1, file2,...\n"
    );
}
