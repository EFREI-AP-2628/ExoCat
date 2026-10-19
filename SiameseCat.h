//
// Created by johan on 19/10/2026.
//

#ifndef MINOU_SIAMESECAT_H
#define MINOU_SIAMESECAT_H

#include <iostream>
#include "Cat.h"

class SiameseCat: public Cat {
public:
    inline SiameseCat(const std::string &name, char state) : Cat(name, state) {}
    inline SiameseCat(const std::string &name) : Cat(name) {}
    inline SiameseCat(char state) : Cat(state) {}
    inline SiameseCat() : Cat() {}
    ~SiameseCat() = default;
    void display() override;
};


#endif //MINOU_SIAMESECAT_H
