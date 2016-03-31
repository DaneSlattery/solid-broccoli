//userinterface.cpp

//my header
#include "userinterface.h"

using namespace std;

WINDOW * mainwin;

void InitGUI(int y0, int x0)
{
    initscr();			// Start curses mode.
    return;
}

void EndGUI()
{
    endwin();                   // end the current window
}
/*----------------------END-------------------*/