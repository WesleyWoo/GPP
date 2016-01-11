#include "InputHandler.h"


InputHandler::InputHandler()
{
}


InputHandler::~InputHandler()
{
}

Command* InputHandler::handleInput(int input) {
	if (input == kButtonX){
		return buttonX_;
	}
	else if (input == kButtonY){
		return buttonY_;
	}
	else if (input == kButtonA){
		return buttonA_;
	}
	else if (input == kButtonB){
		return buttonB_;
	}

	return NULL;
}

void InputHandler::setInput(){
	buttonX_ = new JumpCommand();
	buttonY_ = new FireCommand();
}