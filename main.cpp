#include "marmot.h"

#include <iostream>

int main()
{
    Marmot marmot;

    for(auto i = 0; i < 100; i++) {
        if(marmot.getState() == MarmotState::MARMOT_IS_AWAKE) {
            std::cout << "squeek squeek" << std::endl;
        }
        else {
            std::cout << "zzz" << std::endl;
        }
    }

    return 0;
}
