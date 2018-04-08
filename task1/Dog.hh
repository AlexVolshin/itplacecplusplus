#ifndef DOG_H
#define DOG_H

#include "Pet.hh"

class Dog : public Pet {
public:
    const char * say() override { return "bow-wow" ; }
    bool gnaw() override { return true; }
    int lifes() override { return 1; }
protected:  
};

#endif //DOG_H
