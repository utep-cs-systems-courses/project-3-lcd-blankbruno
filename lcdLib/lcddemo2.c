/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BEIGE);

  #define centerRow (screenHeight/2)
  #define centerCol (screenWidth/2)

  //draw a diamond, or other basic geometric shapes for Wednesday
  for (int i = 0; i < 20; i++){
    for(int j = 0; j < i; j++){
      drawPixel(centerCol + j, centerRow + i, COLOR_CHOCOLATE);
    }
  }

 
  
  drawString5x7(0,centerRow - 25, "take me alive", COLOR_RED, COLOR_BLACK);
  drawString8x12(15, centerRow + 25, "mince me", COLOR_RED, COLOR_BLACK);

  int k = 0;
  for(int j = 0; j < 20; j++){
    for (k = 0; k < 20 - j; k++){}
    for (k = 0; k < 20; k++){
      drawPixel(centerCol+k, j, COLOR_FIREBRICK);
      drawPixel(centerCol-k, j, COLOR_FIREBRICK);
    }
  }

  //drawString5x7(20,20, "hello 2", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);

  
}
