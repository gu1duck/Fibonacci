//
//  main.c
//  Fibonacci
//
//  Created by Jeremy Petter on 2015-05-06.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#include <stdio.h>

typedef struct Fibonacci Fibonacci;

struct Fibonacci {
    int number;
    int prevNumber;
};

Fibonacci newFibonacciAtOne();
//Fibonacci getFibonacciAtIndex(int index);
//Fibonacci getFibonacciRecursivelyAtIndex(Fibonacci fibonacci, int index);
void advanceFibonacciToIndex(Fibonacci *fibonacci, int index);

int main(int argc, const char * argv[]) {

    int target = 5;
    //Fibonacci fibonacci = getFibonacciAtIndex(5);
    Fibonacci fibonacci = newFibonacciAtOne();
    //fibonacci = getFibonacciRecursivelyAtIndex(fibonacci, target);
    advanceFibonacciToIndex(&fibonacci, target);
    printf("%d is Fibonacci number #%d\n", fibonacci.number, target);
    
    return 0;
}

Fibonacci newFibonacciAtOne(){
    Fibonacci fibonacci;
    fibonacci.number = 1;
    fibonacci.prevNumber = 0;
    return fibonacci;
}

//Fibonacci getFibonacciAtIndex(int index){
//    Fibonacci fibonacci = newFibonacciAtOne();
//    
//    for (int i = 1; i < index; i++){
//        int swap = fibonacci.number;
//        fibonacci.number = (fibonacci.number + fibonacci.prevNumber);
//        fibonacci.prevNumber = swap;
//    }
//    return fibonacci;
//}

//Fibonacci getFibonacciRecursivelyAtIndex(Fibonacci fibonacci, int index){
//    int swap = fibonacci.number;
//    fibonacci.number = (fibonacci.number + fibonacci.prevNumber);
//    fibonacci.prevNumber = swap;
//    index--;
//    if (index > 1){
//        return getFibonacciRecursivelyAtIndex(fibonacci,index);
//    } else {
//        return fibonacci;
//    }
//}

void advanceFibonacciToIndex(Fibonacci *fibonacci, int index){
    int swap = fibonacci->number;
    fibonacci->number = (fibonacci->number + fibonacci->prevNumber);
    fibonacci->prevNumber = swap;
    index--;
    if (index){
        advanceFibonacciToIndex(fibonacci,index);
    }
}