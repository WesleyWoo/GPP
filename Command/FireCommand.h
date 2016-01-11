#pragma once
#include "Command.h"
#include "GameActor.h"
class FireCommand :
	public Command
{
public:
	virtual void excute(GameActor& actor);
};

