#include "Interface.hpp"
#include "IRuntimeModule.hpp"

namespace My {
    Interface IApplication : implements IRuntimeModule
    {
        public:
            virtual int init() = 0;
            virtual void final() = 0;
            virtual void tick() = 0;
            virtual bool isQuit() = 0;
    };
}