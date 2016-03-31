//userinterface.h
// this class is used mainly to capture user input from the keyboard
// during runtime, as well as to display the playing field 
// without having 10000000 standard outputs, which don't over write.

//TODO: take the render class from grid.cpp, and implement it in a WINDOW!

//include guard
#ifndef USERINTERFACE_H
#define USERINTERFACE_H

//included dependencies
#include <ncurses.h>
#include <curses.h>

//here I will do all rendering

void InitGUI(int,int);  // Set up the screen, taking in playing field size
void EndGUI();          // Restore terminal settings


#endif /* USERINTERFACE_H */

