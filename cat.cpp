#include "Cat.h"

std::string Cat::getEyesFromState()
{
    switch (this->state){
        case 'A':
        return "o o";

        case 'S':
        return "- -";

        default:
        return "x x";
    }
}

Cat::Cat(std::string &name, char state)
{
    this->name = name;
    this->state = state;
    Cat::catCount++;
}

Cat::Cat(std::string &name): Cat(name, Cat::DEFAULT_STATE){
    
}

Cat::Cat(char state): Cat(Cat::DEFAULT_NAME,state){

}

Cat::Cat() : Cat(Cat::DEFAULT_NAME,Cat::DEFAULT_STATE){

}

Cat::~Cat() : default {
    Cat::catCount--;
}

const char Cat::getState()
{
    return this->state;
}

const std::string Cat::getName()
{
    return this->name;
}

void Cat::setName(std::string &name)
{
    this->name = name;
}

unsigned int Cat::getNumberOfLivesRemaining()
{
    return this->numberOfLivesRemaining;
}

int Cat::getCatCount()
{
    return Cat::catCount;;
}

void Cat::die()
{
    if (this->state == 'D') return; 
    this->numberOfLivesRemaining--;
    this->state = (this->numberOfLivesRemaining <= 0) ? 'D' : this->state;
}

void Cat::sleep()
{
    if (this->state == 'D') return; 
    this->state = 'S';
}

void Cat::wakeUp()
{
    if (this->state == 'D') return; 
    this->state = 'A';
}
