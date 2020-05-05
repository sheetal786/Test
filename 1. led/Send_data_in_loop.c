#include <REGX51.H>
void delay(unsigned int x);
void main()
{
unsigned char z;
	for (z=0;z<=255;z++)
	{
		P1=z;
		delay(100);
	}
	
}

void delay(unsigned int x)
{
	unsigned int x;
	for(x=0;x<=1000;x++);
}

