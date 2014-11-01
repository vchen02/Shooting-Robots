#ifndef ARENA_H  
#define ARENA_H  
#include "globals.h"
#include "History.h"
#include <string>
using namespace std;
    
class Player;
class Robot;
//class History;
  
class Arena  
{  
  public:					// Constructor      
    Arena(int nRows, int nCols);  
    ~Arena();				//Destructor  
  
        					// Accessors  
    int     rows() const;  
    int     cols() const;  
    Player* player() const;
	History& history();
    int     robotCount() const;  
    int     nRobotsAt(int r, int c) const;
    void    display(string msg) const;  
  
        					// Mutators  
    bool   addRobot(int r, int c);  
    bool   addPlayer(int r, int c);  
    bool   destroyRobot(int r, int c);  
    bool   moveRobots();  
  
  private:  
    int     m_rows;  
    int     m_cols;  
    Player* m_player;
	History m_history;
    Robot*  m_robots[MAXROBOTS];  
    int     m_nRobots;  
  };  
  
#endif		//ARENA_H