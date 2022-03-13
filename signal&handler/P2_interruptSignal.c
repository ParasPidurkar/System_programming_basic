//Press Ctrl+C to end the code i.e trigger the SIGINT signal
#include<stdlib.h>
#include<signal.h>
#include<stdio.h>

void sig_handler(int sig_num){
    printf("The interrupis called %d\n",sig_num);
    exit(0);
}

int main(){

    signal(SIGINT,sig_handler);
     while(1){
         printf("Inside the infinite loop\n");
         sleep(1);
     }
}