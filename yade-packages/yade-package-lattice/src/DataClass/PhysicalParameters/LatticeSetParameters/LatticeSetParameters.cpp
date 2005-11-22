/*************************************************************************
*  Copyright (C) 2004 by Janek Kozicki                                   *
*  cosurgi@berlios.de                                                    *
*                                                                        *
*  This program is free software; it is licensed under the terms of the  *
*  GNU General Public License v2 or later. See file LICENSE for details. *
*************************************************************************/

#include "LatticeSetParameters.hpp"


LatticeSetParameters::LatticeSetParameters() : PhysicalParameters()
{
	createIndex();
	nodeGroupMask = 1;
	beamGroupMask = 2;
}


LatticeSetParameters::~LatticeSetParameters()
{

}


void LatticeSetParameters::registerAttributes()
{
	PhysicalParameters::registerAttributes();
	REGISTER_ATTRIBUTE(nodeGroupMask);
	REGISTER_ATTRIBUTE(beamGroupMask);
}
 
