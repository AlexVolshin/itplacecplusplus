#ifndef PET_H
#define PET_H

class Pet {
public:
    virtual ~Pet() = default;
    virtual const char* say() = 0;
	virtual bool gnaw() = 0;
    virtual int lifes() = 0;
protected:
    friend void pets(bool flag);
};

#endif //PET_H
