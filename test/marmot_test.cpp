#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "universe.mock.hpp"
#include "../universe_factory.h"
#include "../marmot.h"

using ::testing::Return;
using ::testing::_;
using ::testing::Mock;

static UniverseMock universe;

Universe& UniverseFactory::getInstance()
{
    return universe;
}

class MarmotTest: public ::testing::Test {
public:

    void SetUp() {}

    void TearDown() {}
};

TEST_F(MarmotTest, When_Not_Winter_And_Day_Should_Be_Awake) {
    Marmot marmot;

    EXPECT_CALL(universe, IsWinter()).WillOnce(Return(false));
    EXPECT_CALL(universe, IsDay()).WillOnce(Return(true));
    ASSERT_EQ(MarmotState::MARMOT_IS_AWAKE, marmot.getState());
}

TEST_F(MarmotTest, When_Winter_Should_Sleep) {
    Marmot marmot;

    EXPECT_CALL(universe, IsWinter()).WillRepeatedly(Return(true)); // oh

    EXPECT_CALL(universe, IsDay()).WillOnce(Return(true));
    ASSERT_EQ(MarmotState::MARMOT_IS_SLEEPING, marmot.getState());

    EXPECT_CALL(universe, IsDay()).WillOnce(Return(false));
    ASSERT_EQ(MarmotState::MARMOT_IS_SLEEPING, marmot.getState());
}

TEST_F(MarmotTest, When_Night_Should_Sleep) {
    Marmot marmot;

    EXPECT_CALL(universe, IsDay()).WillOnce(Return(false));
    ASSERT_EQ(MarmotState::MARMOT_IS_SLEEPING, marmot.getState());
}
