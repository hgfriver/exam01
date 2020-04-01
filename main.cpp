#include "mbed.h"


PwmOut PWM1(D6);


int main() {

  PWM1.period(0.001);//chou chi 1000hz

  PWM1 = 0;


  while(1){
    for(int i = 1;i<=10;i++){
         PWM1 = PWM1 + 0.1;
         wait(0.1);
    }

    for(int i = 1;i<=10;i++){
        PWM1 = PWM1 - 0.1;
        wait(0.1);
    }

  }


}