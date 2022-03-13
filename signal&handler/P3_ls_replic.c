#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
#include<dirent.h>
int main(int argc, char* argv[])
{
    //DIR is a opaque datatype 
    DIR *dp;
    struct dirent *dirp;
    if(argc!=2){
        printf("Please provide the proper file name\n ");
        exit(0);
    }

    if((dp = opendir(argv[1]))==NULL)
    {
        printf("Unable to open the directory %d",strerror(errno));
        exit(1);
    }

        while((dirp = readdir(dp)) != NULL)
    {
        printf("\n %s",dirp->d_name);
    }
    
closedir(dp);
}