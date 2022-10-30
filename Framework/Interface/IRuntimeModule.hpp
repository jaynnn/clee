#pragma once

#include "Interface.hpp"

namespace My {
   Interface IRuntimeModule {
public:
    // 
    virtual ~IRuntimeModule() {};

    // 纯虚函数 强制派生类实现该方法
    virtual int init() = 0;
    virtual void final() = 0;
    virtual void tick() = 0;
   };
}