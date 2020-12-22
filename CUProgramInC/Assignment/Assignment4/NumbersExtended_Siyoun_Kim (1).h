//
// Created by Siyoun on 7/7/20.
//

#ifndef UNTITLED16_NUMBERSEXTENDED_SIYOUN_KIM_H
#define UNTITLED16_NUMBERSEXTENDED_SIYOUN_KIM_H

#endif //UNTITLED16_NUMBERSEXTENDED_SIYOUN_KIM_H
int difPrime(int x, int y)
{
    if(y == 1)
        return 1;   // return statement terminates the recursive funtion
    else
    {
        if(x%y == 0)
            return 0;
        else
            difPrime(x,y-1);    // recursive call not using return statement
    }
}

int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
    else
        return ((num % 10) + sumOfDigits(num / 10));
}