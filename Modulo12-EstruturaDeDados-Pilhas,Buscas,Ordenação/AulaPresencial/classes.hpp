#include <iostream>
#include <stdlib.h>
#include <string>



class base {
    public:
        base ();
        ~base ();
        void print();
        
};

class derivada : public base{
    public:
    derivada();
    ~derivada ();
    void print();
};


