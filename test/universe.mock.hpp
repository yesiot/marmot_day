#pragma once

#include <gmock/gmock.h>
#include "../universe.h"

class UniverseMock : public Universe {
public:
    MOCK_METHOD(bool, IsDay, (), (const, override));
    MOCK_METHOD(bool, IsWinter, (), (const, override));
};