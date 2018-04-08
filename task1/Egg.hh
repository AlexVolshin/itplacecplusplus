#ifndef EGG_H
#define EGG_H

#include <cstdlib>

class Chicken;

class Egg {
public:
    Chicken* creator = nullptr;
    Chicken* getCreator() {
        if (!creator) exit(1);
        return creator;
    }
};

#endif //EGG_H
