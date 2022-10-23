#include "AgentPoursuiveur.h"
#include "SteeringBehaviors.h"




AgentPoursuiveur::AgentPoursuiveur(Vehicle & leader, Vector2D offset, GameWorld* world, Vector2D position, double rotation, Vector2D velocity, double mass, double max_force, double max_speed, double max_turn_rate, double scale) :
	Vehicle::Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale), MyLeader(leader)
{
	this->Steering()->OffsetPursuitOn(&leader, offset);


}

AgentPoursuiveur::~AgentPoursuiveur()
{
	//Vehicle::~Vehicle();
}
