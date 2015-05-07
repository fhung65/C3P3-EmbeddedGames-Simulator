#ifndef PHYSOB_H
#define PHYSOB_H
#include "../gamelib/display/screen.h"


#include "Object.h"


class PhysOb
{
    public:
        PhysOb();
        PhysOb(screen_coord_t x, screen_coord_t y) ;//coordinates represent center
        PhysOb(screen_coord_t x, screen_coord_t y, int mass);
        virtual ~PhysOb();
    protected:
    private:
        int m_mass ;


        screen_coord_t m_x ;
        screen_coord_t m_y ;
};

#endif // PHYSOB_H
