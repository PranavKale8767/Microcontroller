#include<reg51.h>
void main (void)
{
    unsigned char x,y,z;
    x=0x02;
    y=0x04;
    z=y/x; 
    // z=y-x;
    // z=y*x;
    // z=y+x;
    P0=z;
}