                                                                                                                                                                                                                                     

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;                                                                                                                                                                               


int main()

{
    uLCD.cls();                                                                                                                                                                                                                             
    uLCD.reset();                                                                                                                                                                                                                           
    uLCD.background_color(0xFFFFFF);
    // basic printf demo = 16 by 18 characters on screen                                                                                                                                                                                      

    uLCD.color(WHITE);
    uLCD.printf("\n107000206\n"); //Default Green on black text                                                                                                                                                                               

    //uLCD.printf("\n  Starting Demo...");                                                                                                                                                                                                    


    //uLCD.text_width(4); //4X size text                                                                                                                                                                                                        

    //uLCD.text_height(4);

    //uLCD.color(GREEN);

    uLCD.line(30, 30 ,30, 80, 0x000000);
    uLCD.line(30, 30 ,80, 30, 0x000000);
    uLCD.line(80, 30 ,80, 80, 0x000000);
    uLCD.line(30, 80 ,80, 80, 0x000000);




    /*
    for (int i=30; i>=0; --i) {

        uLCD.locate(1,2);

        uLCD.printf("%2D",i);

        wait(1);

    }
    */

}







