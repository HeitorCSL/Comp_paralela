
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main(){

    int i, num, j;

    printf ("Enter the number: ");
    scanf ("%d", &num);

    j = num;
    __pid_t Pid;
    for (i=1; j > 1; j--)
    {
        Pid = fork();

        if (Pid < 0)
        {
            perror("fork");
            exit(1);
        }    
        
        else if (Pid != 0)
        {
            Pid = wait(NULL);
            break;
        }

        else
        {
            printf("\nNew generated child:\n");
            printf("\nParent process: %d",getppid());
            printf("\nChild process: %d\n",getpid());
            i = i * j;
            
        }
        if(j == 2){
            printf("\nThe factorial of %d is %d\n",num,i);
        }
    }

    return 0;   
}