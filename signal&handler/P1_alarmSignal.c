#include<signal.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void sig_handler(int sig_num){
    printf("Alarm signal called %d",sig_num);
    system("/bin/ls");
    exit(0);// if we do not call the exit the code will not stop
   
}
int main(){

    alarm(5);
    signal(SIGALRM,sig_handler);
    while(1){
        printf("Inside the inf loop\n");
        sleep(1);
    }
    return 0;
}