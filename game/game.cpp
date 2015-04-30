#include "game.h"
#include "../bitmaps/smiley.h"
#include "../gamelib/input/remote.h"

/* TODO:    Your code goes here
 *
 *          Declare any global variables here
 */
Remote_buttons_t controller ;

Rect_t dest(0,0,64,64) ;

void react_cont( Remote_buttons_t* ctrlr )
{
    if(ctrlr->buttons.up)
        dest.y--;
    if(ctrlr->buttons.down)
        dest.y++;
    if(ctrlr->buttons.left)
        dest.x--;
    if(ctrlr->buttons.right)
        dest.x++;
}


void Game_init()
{
    // Enable double-buffering
    TVOut_EnableDoubleBuffer(true);

    // Enable buffer clearing on double buffer swap
    TVOut_ClearBufferOnSwap(true);

    /* TODO:    Your code goes here
     *
     *          Any code that needs to run once
     *          to set up your game goes here
     */
}

void Game_loop()
{
    Remote_read(&controller) ;

    Bitmap_t my_pic( smiley, 64, 64 ) ;
    Rect_t src(0, 0, 64, 64) ;

    react_cont(&controller) ;

    screen.bitmap_adj(&my_pic, &src, &dest, MODE_INVERT_INVERT ) ;
    /* TODO:    Your code goes here
     *
     *          Any code that modifies the screen
     *          which needs to run once per frame
     *          goes here
     */

    // Swap the buffer (present the drawing to the screen)
    TVOut_Swap();

    // Wait for the frame to complete drawing to the screen
    TVOut_WaitFrames(1);
}
