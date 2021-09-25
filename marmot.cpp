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

    // Oh oh - we made a mistake here!
    return MarmotState::MARMOT_IS_AWAKE;
}