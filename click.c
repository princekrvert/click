#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	// variables 
	char user_o;
// NOw show the menu for the pkg to be installed 
printf("\033[31;1m These pkg will be installed \n");
printf("\033[35;1m[01] \033[32;1mpython3\n");
printf("\033[35;1m[02] \033[32;1mpython2\n");
printf("\033[35;1m[03] \033[32;1mNodejs\n");
printf("\033[35;1m[04] \033[32;1mGolang\n");
printf("\033[35;1m[05] \033[32;1mRust\n");
printf("\033[35;1m[06] \033[32;1mPhp\n");
printf("\033[35;1m[07] \033[32;1mProot\n");
printf("\033[35;1m[08] \033[32;1mCowsay\n");
printf("\033[35;1m[09] \033[32;1mCmatrix\n");
printf("\033[35;1m[10] \033[32;1mPerl\n");
printf("\033[35;1m[11] \033[32;1mNmap\n");
printf("\033[35;1m[12] \033[32;1mCurl\n");
printf("\033[35;1m[13] \033[32;1mWget\n");
printf("\033[35;1m[14] \033[32;1mUnzip\n");
printf("\033[35;1m[15] \033[32;1mtar\n");
printf("\033[35;1m[16] \033[32;1mdirb\n");
printf("\033[31;1m These pkg will be installed Y/N :");
user_o = getchar();
// NOw check the user option and execute the function..
if( user_o == 'y' || user_o == 'Y' ){
// NOw install the pkg 
system("pkg update && pkg upgrde");
system("pkg install python -y");
system("pkg install python3 -y");
system("pkg install python2 -y");
system("pkg install nodejs-lts -y");
system("pkg install golang -y");
system("pkg install rust -y");
system("pkg install php -y ");
system("pkg install proot -y");
system("pkg install cowsay -y");
system("pkg install cmatrix -y");
system("pkg install perl -y");
system("pkg install nmap -y");
system("pkg install curl -y");
system("pkg install unzip -y");
system("pkg install tar -y");
system("pkg install dirb -y");
} 
else if( user_o == 'n' || user_o == 'N') {
printf("Exiting the function");
exit(1);
}
else{
	printf("\033[31;1m Invalid input exiting the program.");
	exit(1);
}

return 0;
}
