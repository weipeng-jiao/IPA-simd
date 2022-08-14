/* The absolute value algorithm for input array
@ auther: Kepler Jiao
@ time  : 2022/08/14
*/


//The absolute value algorithm for input array using c language
void Calc_Abs_C(signed char *array, unsigned int len)
{
    for(int i=0 ; i<len ; i++ )
    {
        if(value[i]<0)
        {
            value[i]=-value[i];
        }
    }
}

//The absolute value algorithm for input array using hvx instrctions
#indefine VLINE 128
void Calc_Abs_Hvx(signed _attribute_(aligend(VLINE)) *array, unsigned int len)
{
    
}
