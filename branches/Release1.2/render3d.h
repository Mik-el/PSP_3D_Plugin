/*
 * render3d.h
 *
  *
 * Copyright (C) 2010 Andr� Borrmann
 *
 * This program is free software;
 * you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation;
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along with this program;
 * if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef RENDER3D_H_
#define RENDER3D_H_

extern void hookFunctions( void );
extern void hookDisplayOnly( void );
extern void unhookFunctions(void);
//extern int can_parse;
extern char draw3dState;


#endif /* RENDER3D_H_ */
