#include "Cat.h"

class SiameseCat: public Cat {
    public:
    inline SiameseCat(std::string &name, char state ) : base (name,state){};
    inline SiameseCat(std::string &name) : base(name){};
    inline SiameseCat(char state) : base(state){};
    inline SiameseCat() : base(){};
    ~SiameseCat() = default;
};