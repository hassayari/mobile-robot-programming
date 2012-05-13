#include "planning.h"

Path PlanPath( Point src, Path dests ) {

/*	
	011111111111110
	110100010101010
	000100010001010
	011111111111011
*/

int map[4][13] = 	{	{0,1,1,1,1,1,1,1,1,1,1,1,0},
										{1,1,0,1,0,1,0,1,0,1,0,1,0},
										{0,0,0,1,0,1,0,0,0,1,0,1,0},
										{0,1,1,1,1,1,1,1,1,1,0,1,1}
									};

Point mapPoints[4][13] = 	{ {(Point){0.0,0.0}			,	(Point){-56.24, 13.1}	, (Point){-51.10, 13.10}, (Point){-47.68, 13.1}	, (Point){-19.59, 13.1}	, (Point){8.50, 13.10}, (Point){15.0, 13.1}		, (Point){20.91, 13.1},	(Point){23.50, 13.1}	,	(Point){28.60, 13.1}	,	(Point){34.80, 13.1}, (Point){40.80, 13.1}	,	(Point){0.0,0.0}			},
														{(Point){-58.75, 7.80}, (Point){-56.24, 7.80}	,	(Point){0.0,0.0}			, (Point){-47.68, 5.46}	,	(Point){0.0,0.0}			, (Point){8.50, 5.46}	,	(Point){0.0,0.0}			, (Point){20.91, 8.25},	(Point){0.0,0.0}			, (Point){28.60, 5.46}	,	(Point){0.0,0.0}		,	(Point){40.80, 5.46}	,	(Point){0.0,0.0}			},
														{(Point){0.0,0.0}			,	(Point){0.0,0.0}			,	(Point){0.0,0.0}			,	(Point){-47.68, -2.16},	(Point){0.0,0.0}			,	(Point){8.50, -2.16},	(Point){0.0,0.0}			,	(Point){0.0,0.0}		,	(Point){0.0,0.0}			,	(Point){28.60, -2.16}	,	(Point){0.0,0.0}		,	(Point){40.80, -2.16}	,	(Point){0.0,0.0}			},
														{(Point){0.0,0.0}			,	(Point){-55.15, -9.8}	,	(Point){-51.10, -9.8}	,	(Point){-47.68, -9.8}	,	(Point){-19.59, -9.8}	,	(Point){8.50, -9.8}	,	(Point){13.525, -9.8}	,	(Point){18.55, -9.8},	(Point){23.575, -9.8}	, (Point){28.60, -9.8}	,	(Point){0.0,0.0}		,	(Point){40.80, -9.8}	,	(Point){45.50, -9.8}	}
													};

	return Path();
}
