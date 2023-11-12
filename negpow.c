/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Powers                                                                   */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*   Student ID: 200030087                                                    */
/*                                                                            */      
/*   https://GitHub.com/yusufemreozden                                        */
/*   https://linkedIn.com/in/yusufemreozden                                   */
/*   https://sites.google.com/view/yusufemreozden                             */
/*                                                                            */
/* ************************************************************************** */

double negpow(double a, int b) 
{
    double result=1.0;

    if(b==0)
        return(result);
    else if(b>0)
    {
        while(b>0)
        {
            result=a*result;
            b--;
        }
    }
    else 
        while (b<0) 
        {
            result = result / a;
            b++;
        }
    return(result);
}

//made by Yusuf Emre OZDEN