#include "random_universe.h"

RandomUniverse::RandomUniverse()
    : rndEngine(rndDev())
    , dist(std::uniform_int_distribution<>(1, 24))
{

}

bool RandomUniverse::IsDay() const
{
    return  dist(rndEngine) <= 12;
}

bool RandomUniverse::IsWinter() const
{
    return dist(rndEngine) <= 3;
}
