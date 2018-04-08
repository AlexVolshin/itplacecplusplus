#ifndef CAT_H
#define CAT_H

#include "Pet.hh"

class Cat : public Pet {
public:
    const char* say() override { return "miaow" ; }
    bool gnaw() override { return false; }
protected:
    int lifes() override { return 9; }
};

#endif //CAT_H
