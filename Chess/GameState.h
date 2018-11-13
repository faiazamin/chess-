void game(State *gameState, int *selectPos) {
	if (*gameState == mainMenu)
		showMainMenu(*selectPos);

	else if (*gameState == inHowToPlay)
		showHowToPlay(*selectPos);

	if (*gameState == info)
		showInfoMenu(*selectPos);

	else if (*gameState == playOn)
		showTheMatch();

	else if (*gameState == gameOver)
		showGameOver();

	else if (*gameState == inRating)
		showRating();
}