#pragma once

#include "Vehicle.h"
class AgentLeader : public Vehicle
{
    public:
        AgentLeader(GameWorld* world, Vector2D position, double rotation, Vector2D velocity, double mass, double max_force, double max_speed, double max_turn_rate, double scale);

        void setControl(bool isHuman);

};



