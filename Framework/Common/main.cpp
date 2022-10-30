#include <stdio.h>
#include "IApplication.hpp"

using namespace My;

namespace My {
    extern IApplication* APP_P;
}
int main() {
    int ret;

    if ((ret = APP_P->init()) != 0) {
        printf("APP Init failed, will exit now.");
        return ret;
    }
    while (!APP_P->isQuit()) {
        APP_P->tick();
    }

    APP_P->final();
    return 0;
}