#pragma once

#include "universe.h"

#include <random>

class RandomUniverse : public Universe
{
public:
    RandomUniverse();
    bool IsDay() const override;
    bool IsWinter() const override;

private:

    std::random_device rndDev;
    mutable std::default_random_engine rndEngine;
    mutable std::uniform_int_distribution<int> dist;
};
