#include "Cat.h"

class AlleyCat: public Cat {
    public:
    inline AlleyCat(std::string &name, char state ) : base (name,state){};
    inline AlleyCat(std::string &name) : base(name){};
    inline AlleyCat(char state) : base(state){};
    inline AlleyCat() : base(){};
    ~AlleyCat() = default;
};