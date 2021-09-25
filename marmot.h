#pragma once

enum class MarmotState {
    MARMOT_IS_SLEEPING,
    MARMOT_IS_AWAKE,
};

class Marmot
{

public:
    MarmotState getState() const;
};