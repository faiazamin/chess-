void escFunction(State *gameState, int *selectPos) {
	if (*gameState == playOn) {

	}

	else if (*gameState == inHowToPlay) {
		*gameState = mainMenu;
		*selectPos = newMatch;
	}

	else if (*selectPos == player1Info) {
		*gameState = mainMenu;
	}

	else if (*selectPos == player2Info) {
		*selectPos--;
	}
}

void enterFunction(State *gameState, int *selectPos) {

	if (*gameState == mainMenu) {
		PlaySound("Media//Menu Select.wav", 0, 0);
		if (*selectPos == newMatch) {
			*gameState = info;
			*selectPos = player1Info;
		}
		else if (*selectPos == rating) {
			*gameState = inRating;
		}
		else if (*selectPos == howToPlay) {
			*gameState = inHowToPlay;
			*selectPos = 0;
		}
		else if (*selectPos == exitGame) exit(0);
	}

	else if (*gameState == info) {
		PlaySound("Media//Menu Select.wav", 0, 0);
		if (*selectPos == player1Info)
			*selectPos = player2Info;
		else {
			*gameState = playOn;

			player1.secs = 59;
			player1.mins = 4;
			player2.secs = 59;
			player2.mins = 4;

			player1.turn = 1;
			player2.turn = 0;

			player1.clock = 1;
			player2.clock = 0;

			player1.win = 0;
			player2.win = 0;
		}
	}

	else if (*gameState == gameOver) {
		PlaySound("Media//Menu Select.wav", 0, 0);
		*gameState = mainMenu;
		*selectPos = newMatch;
		getRank();
		memset(player1.mail, '\0', 100 * sizeof(char));
		memset(player2.mail, '\0', 100 * sizeof(char));
	}
}