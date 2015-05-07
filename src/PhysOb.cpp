#include "PhysOb.h"

PhysOb::PhysOb()
{
    //ctor
    m_mass = 10 ;
    m_x = 0;
    m_y = 0;
}

PhysOb::PhysOb(screen_coord_t x, screen_coord_t y)
{
    if ( 0 < x && x < screen.getWidth() )
        m_x = x;
    if ( 0 < y && y < screen.getHeight() )
        m_y = y;

    m_mass = 0 ;
}

PhysOb::PhysOb(screen_coord_t x, screen_coord_t y, int mass)
{
    if ( 0 < x && x < screen.getWidth() )
    {
        m_x = x;
    }
    if ( 0 < y && y < screen.getHeight() )
    {
        m_y = y;
    }

    // we'll see what negative mass does later
    m_mass = mass;
}


PhysOb::~PhysOb()
{
    //dtor
}
