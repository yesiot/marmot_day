#include "universe_factory.h"

Universe &UniverseFactory::getInstance()
{
    static RandomUniverse singleton;
    return singleton;
}
