/*------------------------------------------------------------------------------
Copyright (C) 2004-2007 Hydro-Quebec

This file is part of CGNSOO

CGNSOO is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

CGNSOO is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with CGNSOO  If not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
------------------------------------------------------------------------------*/
#include "Array.H"
#include "cgnsoo.H"

namespace CGNSOO
{

void UserDefinedData_t::writeRange( const range& r )
{
	go_here();
	Array<int> arange(r);
	int ier = cg_ptset_write( PointRange, 2, arange );
	check_error( "UserDefinedData_t::writeRange", "cg_ptset_write", ier );
}

}
