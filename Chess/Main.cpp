/*
	##########################      CHESS       ##########################
	CSE 1212
		S.M.Mehrabul Islam (SH-01)
		Faiaz Amin Khan (SH-40)
*/

# include "iGraphics.h"
#include "File.h"
#include "Macro.h"
#include "Variables.h"
#include "StructEnum.h"
#include "MyShowBMP2.h"
#include "Menu.h"
#include "Input.h"
#include "DrawElements.h"
#include "ENT-ESC.h"
#include "GameFunction.h"
#include "Click.h"
#include "Show.h"
#include "GameState.h"


void iDraw()
{
	iClear();
	game(&gameState, &selectPos);
}

void iMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		clickL.x = mx;
		clickL.y = my;
		leftClick(clickL);
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		clickR.x = mx;
		clickR.y = my;
		rightClick(clickR);
	}
}

void iKeyboard(unsigned char key)
{
	if (gameState == info) 
		takePlayersInfo(key, &selectPos);

	if (key == esc) 
		escFunction(&gameState, &selectPos);

	else if (key == enter) 
		enterFunction(&gameState, &selectPos);
}

void iSpecialKeyboard(unsigned char key)
{
	if (gameState == mainMenu) {
		if (key == GLUT_KEY_DOWN && selectPos < 3) {
			selectPos++;
			PlaySound("Media//Menu Move.wav",0,0);
		}

		else if (key == GLUT_KEY_UP && selectPos > 0) {
			selectPos--;
			PlaySound("Media//Menu Move.wav", 0, 0);
		}
	}

	else if (gameState == info) {
		if (key == GLUT_KEY_DOWN && selectPos == 0) {
			selectPos++;
			PlaySound("Media//Menu Move.wav", 0, 0);
		}
		else if (key == GLUT_KEY_UP && selectPos == 1) {
			selectPos--;
			PlaySound("Media//Menu Move.wav", 0, 0);
		}
	}

	else if (gameState == inHowToPlay) {
		if (key == GLUT_KEY_DOWN && selectPos<16) selectPos++;
		else if (key == GLUT_KEY_UP && selectPos>0) selectPos--;
	}
}

void player1Timer()
{
	if (player1.clock) {
		
		if (player1.secs == 0) {
			player1.mins--;
			player1.secs = 59;
		}
		else if(player1.mins>=0) player1.secs--;
		else if (player1.mins < 0) {
			gameState = gameOver;
			player2.win = 1;
			player1.win = 0;
		}
	}
}

void player2Timer()
{
	if (player2.clock) {
		if (player2.secs == 0) {
			player2.mins--;
			player2.secs = 59;
		}
		else if(player2.mins>=0) player2.secs--;
		else if (player2.mins < 0) {
			gameState = gameOver;
			player1.win = 1;
			player2.win = 0;
		}
	}
}

int main()
{
	iSetTimer(1000, player1Timer);
	iSetTimer(1000, player2Timer);
	loadAllThePieces();
	iInitialize(840, 630, "Chess.com");
	return 0;
}