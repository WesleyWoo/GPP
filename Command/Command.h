#pragma once
#include "GameActor.h"
class Command
{
public:
	virtual ~Command(){}

	virtual void excute(GameActor& actor) = 0;
};

