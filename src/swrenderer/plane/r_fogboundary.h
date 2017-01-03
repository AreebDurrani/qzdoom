//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//

#pragma once

#include "r_visibleplane.h"

namespace swrenderer
{
	void R_DrawFogBoundary(int x1, int x2, short *uclip, short *dclip, int wallshade);
	void R_DrawFogBoundarySection(int y, int y2, int x1);
}
