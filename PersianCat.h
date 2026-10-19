#include "Cat.h"


class PersianCat: public Cat {
    public:
    inline PersianCat(std::string &name, char state ) : base (name,state){};
    inline PersianCat(std::string &name) : base(name){};
    inline PersianCat(char state) : base(state){};
    inline PersianCat() : base(){};
    ~PersianCat() = default;
};