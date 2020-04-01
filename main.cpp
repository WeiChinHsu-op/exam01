#include "mbed.h"

Serial pc( USBTX, USBRX );
PwmOut PWM1(D0);
int sample = 128;

float ADCdata;


//int a = 0;
int main() {
    
        PWM1.period(0.001);
        while(1){
        for(float i = 0;i<1.1;i=i+0.1){
            
            PWM1 = i;
            ADCdata = PWM1;
            wait(0.1);
            pc.printf("%1.3f\r\n", ADCdata);
        }
        for(float i = 1;i>-0.1;i=i-0.1){
            
            PWM1 = i;
            ADCdata = PWM1;
            wait(0.1);
            pc.printf("%1.3f\r\n", ADCdata);
        }
    }
    //PWM1.period(0.01);
    //PWM1 = 0.5;
}