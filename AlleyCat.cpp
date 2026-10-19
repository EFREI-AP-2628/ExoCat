//
// Created by johan on 19/10/2026.
//

#include "AlleyCat.h"

#include <iostream>
#include <ostream>

void AlleyCat::display() {
    std::cout << "/\\_/\"" << std::endl;
    std::cout << "( " << this->getEyesFromState() << " )" << std::endl;
    std::cout << "  (      )~" << std::endl;
    std::cout << "  ww  ww" << std::endl;
}