#ifndef TWELVE_H
#define TWELVE_H

#define DECL_12( prefix ) \
    void prefix##_one(); \
    void prefix##_two();

DECL_12( prepare )
DECL_12( work )

#endif //TWELVE_H
