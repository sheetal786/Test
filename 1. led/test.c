#include<reg52.h>

//sbit LED =P2^0;
void delay(void);
void main()
{

while(1)
{
P0 = 0xAA;

delay (1000);

P0 = 0x55;

delay (1000);
}
}	

void delay(void)
{
	int i, j;
	for (i=0;i<1000;i++)
	{
		for (j=0;j<1000;j++);
	}
}