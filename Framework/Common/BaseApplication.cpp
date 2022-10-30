#include "BaseApplication.hpp"
int My::BaseApplication::init() {
    quitFlag = false;
    return 0;
}

void My::BaseApplication::final() {

}

void My::BaseApplication::tick() {

}

bool My::BaseApplication::isQuit() {
    return quitFlag == true;
}