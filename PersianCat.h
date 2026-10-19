//
// Created by johan on 19/10/2026.
//

#ifndef MINOU_PERSIANCAT_H
#define MINOU_PERSIANCAT_H


#include <iostream>
#include "Cat.h"

class PersianCat: public Cat {
public:
    inline PersianCat(const std::string &name, char state) : Cat(name, state) {}
    inline PersianCat(const std::string &name) : Cat(name) {}
    inline PersianCat(char state) : Cat(state) {}
    inline PersianCat() : Cat() {}
    ~PersianCat() = default;
    void display() override;
};

#endif //MINOU_PERSIANCAT_H
