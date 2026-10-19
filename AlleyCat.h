//
// Created by johan on 19/10/2026.
//

#ifndef MINOU_ALLEYCAT_H
#define MINOU_ALLEYCAT_H
#include <string>

#include "Cat.h"

class AlleyCat: public Cat {
public:
    inline AlleyCat(const std::string &name, char state) : Cat(name, state) {}
    inline AlleyCat(const std::string &name) : Cat(name) {}
    inline AlleyCat(char state) : Cat(state) {}
    inline AlleyCat() : Cat() {}
    ~AlleyCat() = default;
    void display() override;
};


#endif //MINOU_ALLEYCAT_H
