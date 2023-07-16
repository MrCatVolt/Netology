#include "my_Counter.h"

Counter::Counter(int x) {
        this->x = x;
    }

Counter::Counter() {
        x = 1;
    }

    void Counter::set_x_on1() {
        x++;
    }

    void Counter::set_x_off1() {
        --x;
    }

    int Counter::get_x_cout() {
        return x;
    }
