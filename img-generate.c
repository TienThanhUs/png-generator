#include<stdio.h>
#include<stdbool.h>
#include "TinyPngOut.h"
uint32_t WIDTH = 400;
uint32_t HEIGHT = 400;
int main() 
{
    printf("Generating image ...\n");
    FILE * output = fopen("out.png", "w");
    // do something here
    struct TinyPngOut pngInit;
    TinyPngOut_init(&pngInit,WIDTH,HEIGHT,output);
    uint8_t RED[] = {235,30,30};
    uint8_t BLUE[] = {30,167,135}; 
    bool check = false;
    for(int i = 0; i < HEIGHT; i++) 
    {
       if(i %10 == 0)
       {
          check = !check; 
       } 
       for(int j = 0; j < WIDTH; j++){
          if(check){
            TinyPngOut_write(&pngInit,RED,1);
          }
          else{
            TinyPngOut_write(&pngInit,BLUE,1); 
	  }
       } 
    }
    printf("Done .\n");
}
