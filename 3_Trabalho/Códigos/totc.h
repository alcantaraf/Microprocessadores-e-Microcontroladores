#ifndef TOTC
#define TOTC

#define       LED_0 	    	BIT0
#define       LED_OUT     	P1OUT
#define       LED_DIR 	    P1DIR
#define       LED_SEL		    P1SEL

#define       HIGH        	1
#define       LOW	        	0
#define       TRUE        	1
#define       FALSE       	0
#define       PULSE_LED0	  P1OUT|=LED_0;delay_us(10);P1OUT&=~LED_0;
#define       LED0_ON	    	P1OUT|=LED_0;
#define       LED0_OFF    	P1OUT&=~LED_0;


void delay_ms(int);
void delay_us(int);

#endif
