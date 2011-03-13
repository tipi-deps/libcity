/**
 * This code is part of libcity library.
 *
 * @file lsystem/graphiclsystem.h
 * @date 05.03.2011
 * @author Radek Pazdera (xpazde00@stud.fit.vutbr.cz)
 *
 * @brief Extension of LSystem for general graphical application
 *
 * @see LSystem
 *
 * To the normal functionality of an LSystem this class adds
 *  - a drawing cursor and a cursor stack
 *  - possibillity of area constraints
 *  - defines some basic symbols of the drawing alphabet
 *     - draw line of a certain length
 *     - turn the cursor a certain angle
 *     - push the cursor's position on stack
 *     - pop the cursor's position from stack
 */

#ifndef _GRAPHICLSYSTEM_H_
#define _GRAPHICLSYSTEM_H_

#include <vector>

#include "lsystem.h"

class Point;
class Vector;

class GraphicLSystem : public LSystem
{
  public:
    GraphicLSystem();
    virtual ~GraphicLSystem();

    /* WARNING Will reset produced string to axiom  */
    void setStartingPosition(Point position);
    void setStartingDirection(Vector direction);

  protected:
    virtual void readNextSymbol();
    virtual void interpretSymbol(char symbol);

    void pushCursor();
    void popCursor(); /**< Does nothing when the stack is empty */

    /**
     * Represents a drawing cursor in the LSystem
     */
    class Cursor
    {
      public:
        Cursor();
        Cursor(Point inputPosition, Vector inputDirection);
        Cursor(const Cursor& anotherCursor);
        ~Cursor();

        Point  getPosition() const;
        Vector getDirection() const;

        void setPosition(Point newPosition);
        void setDirection(Vector newDirection);
      private:
        Point*  position;
        Vector* direction;
    };

    Cursor cursor; /**< Drawing cursor */
  private:
    std::list<Symbol>::iterator currentStringPosition;
    std::vector<Cursor> cursorStack; /**< Stack for pushing cursors */

    void defineAlphabet();
};

#endif