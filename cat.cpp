//
// Created by johan on 19/10/2026.
//

#include "Cat.h"

std::string Cat::getEyesFromState() const {
    switch (this->state){
        case 'A':
            return "o o";

        case 'S':
            return "- -";

        default:
            return "x x";
    }
}
Cat::Cat(const std::string &name, char state) {
    this->name = name; this->state = state; Cat::catCount++;
}

Cat::Cat(const std::string &name): Cat(name, Cat::DEFAULT_STATE) {}

Cat::Cat(char state): Cat(Cat::DEFAULT_NAME,state) {}

Cat::Cat() : Cat(Cat::DEFAULT_NAME,Cat::DEFAULT_STATE) {}

Cat::~Cat(){
    Cat::catCount--;
}

void Cat::die(){
    if (this->state == 'D') return;
    this->numberOfLivesRemaining--;
    this->state = (this->numberOfLivesRemaining <= 0) ? 'D' : this->state;
}

void Cat::sleep(){
    if (this->state == 'D') return;
    this->state = 'S';
}

void Cat::wakeUp(){
    if (this->state == 'D') return;
    this->state = 'A';
}

void Cat::setName(const std::string &name) {
    this->name = name;
}

char Cat::getState() const {
    return this->state;
}

std::string Cat::getName() const {
    return this->name;
}

int Cat::getCatCount(){
    return Cat::catCount;
}

unsigned int Cat::getNumberOfLivesRemaining() const {
    return this->numberOfLivesRemaining;
}




