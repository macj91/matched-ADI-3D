#include "Beta_1.h"

/******************************************************************
                            Constructor
 ******************************************************************/
Beta_1::Beta_1()
{
    
}

/****************************************************
          Diffusion coefficient in Omega^{-}
 
 INPUT
 x : x coordinate of given point
 y : y coordinate of given point
 z : z coordinate of given point
 
 OUTPUT
 Diffusion coefficient at that point in Omega^{-}
 *****************************************************/
double Beta_1::Inside(Doub_I x, Doub_I y, Doub_I z) const
{
    double temp;
    
    //temp = 3;
    temp = 1/(x*x+y*y+z*z+1);
    
    return temp;
}

/****************************************************
         Diffusion coefficient in Omega^{+}
 
 INPUT
 x : x coordinate of given point
 y : y coordinate of given point
 z : z coordinate of given point
 
 OUTPUT
 Diffusion coefficient at the point in Omega^{+}
 *****************************************************/
double Beta_1::Outside(Doub_I x, Doub_I y, Doub_I z) const
{
    double temp;
    
    //temp = 10;
    temp = -1/(x*x+y*y+z*z+1);
    
    return temp;
}