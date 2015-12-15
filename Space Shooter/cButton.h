/*
=================
cButton.h
- Header file for class definition - SPECIFICATION
- Header file for the tileMap class which is a child of cSprite class
=================
*/
#ifndef _CBUTTON_H
#define _CBUTTON_H
#include "cSprite.h"


class cButton : public cSprite
{

private:
	glm::ivec2 buttonClickedRC;
	bool clicked = false;


public:

	cButton();

	void setTextureWidth();


	void render();		// Default render function
	void render(int textureToRender);		// Default render function
	void update(float deltaTime);
	gameState update(gameState theCurrentGameState, gameState newGameState);

	bool playGame();		//Used to advance the game to the PLAYING state
	bool getClicked();
	void setClicked(bool state);

};
#endif