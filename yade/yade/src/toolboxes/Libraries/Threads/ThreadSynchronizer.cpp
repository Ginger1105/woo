/***************************************************************************
 *   Copyright (C) 2004 by Olivier Galizzi                                 *
 *   olivier.galizzi@imag.fr                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
 
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ThreadSynchronizer.hpp"
#include "ThreadSafe.hpp"

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

ThreadSynchronizer::ThreadSynchronizer() : i(-1),prevI(0),nbThreads(0)
{
	 redirectionId.clear();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

void ThreadSynchronizer::startAll()
{
	boost::mutex::scoped_lock lock(mutex);
	i=prevI;
	cond.notify_all();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

void ThreadSynchronizer::stopAll()
{
	boost::mutex::scoped_lock lock(mutex);
	
	prevI = i;
	i=-1;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

int ThreadSynchronizer::insertThread()
{ 
	boost::mutex::scoped_lock lock(mutex);	
	redirectionId.push_back(nbThreads);
	return nbThreads++;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

void ThreadSynchronizer::removeThread(int id)
{ 
	boost::mutex::scoped_lock lock(mutex);

	redirectionId[id] = -1;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

boost::mutex* ThreadSynchronizer::getMutex()
{
	return &mutex;
}
	
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

bool ThreadSynchronizer::notMyTurn(int turn)
{
	return (redirectionId[turn] != i);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

void ThreadSynchronizer::setNextCurrentThread()
{
	i = (i+1)%nbThreads;
	while(redirectionId[i] == -1)
		i = (i+1)%nbThreads;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

void ThreadSynchronizer::wait(boost::mutex::scoped_lock& lock)
{
	cond.wait(lock);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

void ThreadSynchronizer::signal()
{
	cond.notify_all();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
