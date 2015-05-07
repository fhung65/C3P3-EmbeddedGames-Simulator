#ifndef PHYSENGINE_H
#define PHYSENGINE_H
#include "PhysOb.h"

class PhysEngine
{
    public:
        PhysEngine();
        virtual ~PhysEngine();
        void update_all() ;
    protected:
    private:

        PhysOb m_Obs[5];
};

#endif // PHYSENGINE_H
