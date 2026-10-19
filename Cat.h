//
// Created by johan on 19/10/2026.
//

#ifndef MINOU_CAT_H
#define MINOU_CAT_H

#include <string>


class Cat {
    private:
    static constexpr char DEFAULT_STATE = 'S';
    static constexpr auto DEFAULT_NAME = "Minou";
    static inline int catCount = 0;
    char state{};
    std::string name;
    int numberOfLivesRemaining{NUMBER_OF_LIVES};

    protected:
    std::string getEyesFromState() const;
    Cat(const std::string &name, char state);
    Cat(const std::string &name);
    Cat(char state);
    Cat();
    virtual ~Cat();

    public:
    static constexpr int NUMBER_OF_LIVES = 9;
    [[nodiscard]] static int getCatCount();
    [[nodiscard]] unsigned int getNumberOfLivesRemaining() const;

    void die();
    void sleep();
    void wakeUp();
    virtual void display() = 0;

    [[nodiscard]] std::string getName() const;
    [[nodiscard]] char getState() const;
    void setName(const std::string &name);
};


#endif //MINOU_CAT_H
