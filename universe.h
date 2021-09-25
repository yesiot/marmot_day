#pragma once

class Universe
{
public:
    virtual ~Universe() = default;

    [[nodiscard]]
    virtual bool IsDay() const = 0;

    [[nodiscard]]
    virtual bool IsWinter() const = 0;
};

