//globals.h  

#ifndef GLOBALS_H
#define GLOBALS_H

const int MAXROWS = 20;             // max number of rows in the arena  
const int MAXCOLS = 40;             // max number of columns in the arena  
const int MAXROBOTS = 200;          // max number of robots allowed  
  
const int UP    = 0;  
const int DOWN  = 1;  
const int LEFT  = 2;  
const int RIGHT = 3;  
  
//Utilities.cpp prototype declarations  
  
int decodeDirection(char dir);  
void clearScreen();  

#endif		//GLOBALS_H