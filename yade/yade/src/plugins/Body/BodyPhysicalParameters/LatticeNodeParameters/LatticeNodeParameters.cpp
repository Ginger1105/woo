#include "LatticeNodeParameters.hpp"

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

LatticeNodeParameters::LatticeNodeParameters() : RigidBodyParameters()
{
	createIndex();
}

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

LatticeNodeParameters::~LatticeNodeParameters()
{

}

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

void LatticeNodeParameters::registerAttributes()
{
	RigidBodyParameters::registerAttributes();
//	REGISTER_ATTRIBUTE(length);
}

