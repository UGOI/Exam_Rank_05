#pragma once
#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget {
public:
    BrickWall(/* args */);
    ~BrickWall();
    virtual BrickWall *clone() const;

};