#pragma once

#include <string>
#include "Command.h"
#include "JumpCommand.h"
#include "FireCommand.h"

enum {
	kButtonX,
	kButtonY,
	kButtonA,
	kButtonB
};

class InputHandler
{
public:
	InputHandler();
	~InputHandler();

	void setInput();
	Command* handleInput(int input);

private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;
};

 