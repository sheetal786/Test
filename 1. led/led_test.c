#include<reg51.h>

void delay(unsigned int delay_ms);
void main()
{
	P2=0x00; // 0x00 for Output
	while(1)
		
	
	{
		P2=0xFF;
		delay(1);
		P2=0x00;
		delay(1);
	}
}

void delay(unsigned int delay_ms)
{
	int i,j;
	for(i=0;i<1295;i++)
	{
		for(j=0;j<1000;j++);
	}
}

