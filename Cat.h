#ifndef CAT_H_
#define CAT_H_

#include <string>

class Cat {
    private: 
    static constexpr char DEFAULT_STATE = 'S';
    static constexpr std::string DEFAULT_NAME = "Minou";
    static unsigned int catCount = 0;
    char state;
    std::string name;
    int numberOfLivesRemaining;

    protected:
    std::string getEyesFromState(); 
    Cat(std::string &name, char state );
    Cat(std::string &name);
    Cat(char state);
    Cat();
    ~Cat();

    public:
    const char getState();
    const std::string getName();
    void setName(std::string &name);

    [[nodiscard]] unsigned int getNumberOfLivesRemaining();  
    [[nodiscard]] static int getCatCount();

    void die();
    void sleep();
    void wakeUp();
    virtual void display() = 0;
    
    static constexpr int NUMBER_OF_LIVES = 9;
};


#endif // CAT_H_
