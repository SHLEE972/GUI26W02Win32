#pragma once
#include "framework.h"

#define MODEL_MAX_POINTS	1000

int GetNumPoints();
POINT GetPoint(int);

void AddPoint(POINT);
void DeleteLastPoint();