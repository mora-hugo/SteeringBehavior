#include "AgentLeader.h"
#include "SteeringBehaviors.h"
#include "GameWorld.h"

AgentLeader::AgentLeader(GameWorld* world, Vector2D position, double rotation, Vector2D velocity, double mass, double max_force, double max_speed, double max_turn_rate, double scale, bool m_bRandomControl)
	: Vehicle::Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale)
{
	this->Steering()->WanderOn();

}

AgentLeader::~AgentLeader()
{
	//Vehicle::~Vehicle();
}
