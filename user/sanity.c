#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

//Fibonacci sequence
int fib(int n){
    if (n <= 1) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
//Use this for long computation
//fib(35) takes roughly 30 secs
void longComputation(){
    fib(35);
}


int
main(int argc, char *argv[])
{
    //Fill this in
    exit();
}