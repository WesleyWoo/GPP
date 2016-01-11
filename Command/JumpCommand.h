#pragma once
#include "Command.h"
#include "GameActor.h"
class JumpCommand :
	public Command
{
public:
	virtual void excute(GameActor& actor);
};

