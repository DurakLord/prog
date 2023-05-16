#if !defined PRE_H
#define PRE_H

#define template(type, name)


#define def(type, name) struct name {\
    type id; \
}; typedef struct name name;

#define fun(type, name) type name(type a){\
    return a;\
};

#endif