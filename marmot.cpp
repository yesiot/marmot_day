#include "marmot.h"

#include "universe_factory.h"

MarmotState Marmot::getState() const
{
    if(UniverseFactory::getInstance().IsWinter()) {
        return MarmotState::MARMOT_IS_SLEEPING;
    }

    if(UniverseFactory::getInstance().IsDay()) {
        return MarmotState::MARMOT_IS_AWAKE;
    }

    return MarmotState::MARMOT_IS_SLEEPING;
}