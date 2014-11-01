#ifndef ROBOT_H  
#define ROBOT_H  
  
class Arena;	// This is needed to let the compiler know that Arena is a
				// type name, since it's mentioned in the Robot declaration.

class Robot
{
public:
	// Constructor
    Robot(Arena* ap, int r, int c);
	
	// Accessors
    int  row() const;
    int  col() const;
	
	// Mutators
    void move();
	
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
};  
  
#endif	//ROBOT_H