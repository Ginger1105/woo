/***************************************************************************
 *   Copyright (C) 2004 by Janek Kozicki                                   *
 *   cosurgi@berlios.de                                                    *
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

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __MULTIMETHODSMANAGEREXCEPTIONS_HPP__
#define __MULTIMETHODSMANAGEREXCEPTIONS_HPP__

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <string>
#include <stdexcept>

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////
///  FactoryError                                                                                //
///////////////////////////////////////////////////////////////////////////////////////////////////

struct MultiMethodsManagerError : public std::runtime_error
{
	explicit MultiMethodsManagerError(const char* msg) : std::runtime_error(msg) {};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

struct MultiMethodsManagerUndefinedCollisionOrder : public MultiMethodsManagerError
{
	explicit MultiMethodsManagerUndefinedCollisionOrder(const char* msg) : MultiMethodsManagerError(msg) {};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

struct MultiMethodsManagerNotExistingLibrary : public MultiMethodsManagerError
{
	explicit MultiMethodsManagerNotExistingLibrary(const char* msg) : MultiMethodsManagerError(msg) {};
};

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

struct MultiMethodsManagerExceptions
{
	static const char* NotExistingLibrary;
	static const char* UndefinedCollisionOrder;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif //  __MULTIMETHODSMANAGEREXCEPTIONS_HPP__

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
