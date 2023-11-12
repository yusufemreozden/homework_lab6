/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Digit Range                                                              */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*   https://GitHub.com/yusufemreozden                                        */
/*   https://linkedIn.com/in/yusufemreozden                                   */
/*   https://sites.google.com/view/yusufemreozden                             */
/*                                                                            */
/* ************************************************************************** */

int digitRange(int number)
{
    int digit, maxDigit=0, minDigit=9;
        
    if(number<0)
        number = -number;

    else if(number<=9)
        return 1;
    
   while (number>0)
    {
        digit = number%10;
        if(digit>=maxDigit)
            maxDigit = digit;
        else if (digit<=minDigit)
            minDigit = digit;
        number = number / 10;

    }

    return (maxDigit-minDigit+1);
}

//made by Yusuf Emre OZDEN
