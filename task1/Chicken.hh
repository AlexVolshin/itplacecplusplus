#ifndef CHICKEN_H
#define CHICKEN_H

#include <cstdlib>

class Egg;

class Chicken {
public:
    Egg* creator = nullptr;
    Egg* getCreator() {
        if (!creator) exit(1);
        return creator;
	}
};

#endif //CHICKEN_H
