//#include <graphics.h>
#include "../basic_01/grafico/graphics.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>                               // Provides exit
#include <ctype.h>

int main (int argc, char *argv[]){
//int main(void){
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph( & gd, & gm, data);
    //you can also pass NULL for third parameter if you did above setup successfully
    //example: initgraph(&gd, &gm, NULL);
    circle(200, 200, 100);
    getch();
    closegraph();
    return 0;
}

