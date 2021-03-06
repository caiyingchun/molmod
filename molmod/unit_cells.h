// MolMod is a collection of molecular modelling tools for python.
// Copyright (C) 2007 - 2019 Toon Verstraelen <Toon.Verstraelen@UGent.be>, Center
// for Molecular Modeling (CMM), Ghent University, Ghent, Belgium; all rights
// reserved unless otherwise stated.
//
// This file is part of MolMod.
//
// MolMod is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 3
// of the License, or (at your option) any later version.
//
// MolMod is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>
//
// --


#ifndef MOLMOD_UNIT_CELLS_H_
#define MOLMOD_UNIT_CELLS_H_


#include <stddef.h>

size_t unit_cell_get_radius_indexes(double *matrix, double *reciprocal, double radius,
                                 long *max_ranges, long *indexes);

#endif  // MOLMOD_UNIT_CELLS_H_
