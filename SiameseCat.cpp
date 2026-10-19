//
// Created by johan on 19/10/2026.
//

#include "SiameseCat.h"
#include <iostream>


void SiameseCat::display() {
    std::cout << "/\\_/\"" << std::endl;
    std::cout << "( " << this->getEyesFromState() << " )" << std::endl;
    std::cout << "  (\"\"\"\"\")~" << std::endl;
    std::cout << "  ww  ww" << std::endl;
}