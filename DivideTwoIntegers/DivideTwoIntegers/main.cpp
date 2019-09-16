//
//  main.cpp
//  DivideTwoIntegers
//
//  Created by Evan Miller on 9/16/19.
//  Copyright © 2019 Evan Miller. All rights reserved.
//

/*
 Given two integers dividend and divisor, divide two integers without using multiplication, division and mod operator.

 Return the quotient after dividing dividend by divisor.
 
 The integer division should truncate toward zero.
 
 *Both dividend and divisor will be 32-bit signed integers.
 *The divisor will never be 0.
 *Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 231 − 1 when the division result overflows.
 */


#include <iostream>

int divide_naive(int dividend, int divisor) {
    int count = 0;
    bool divisorIsNegative = divisor < 0 ? true : false;
    bool dividendIsNegative = dividend < 0 ? true: false;
    divisor = divisor < 0 ? -1*divisor: divisor;
    dividend = dividend < 0 ? -1*dividend: dividend;
    const int over_flow = 230;
    
    if(divisor > dividend){
        return 0;
    }
    while(dividend >= divisor){
        dividend -= divisor;
        count++;
        if(count > over_flow || count < -over_flow){
            return over_flow;
        }
    }
    if((divisorIsNegative & dividendIsNegative) || (!divisorIsNegative & !dividendIsNegative)){
        return count;
    } else {
        return -1*count;
    }
}

int main(int argc, const char * argv[]) {
    
    int result0 = divide_naive(10, 3);
    int result1 = divide_naive(4, 10);
    
    int result2 = divide_naive(7, -3);
    int result3 = divide_naive(23, -4);
    int result4 = divide_naive(-23, -4);
    
    
    return 0;
}


