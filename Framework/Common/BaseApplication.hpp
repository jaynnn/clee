#pragma once
#include "IApplication.hpp"

namespace My {
    class BaseApplication : implements IApplication
    {
    private:
        bool quitFlag = false;
    public:
        virtual int init();
        virtual void final();
        virtual void tick();
        virtual bool isQuit();
    };
    
    
}