#include "JumpCommand.h"
#include <iostream>

void JumpCommand::excute(GameActor& actor) {
	actor.jump();
}

