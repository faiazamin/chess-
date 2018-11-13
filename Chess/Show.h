void showTheMatch() {
	drawTheTimer(player1, player2);
	drawTheBoard();
	rightClick(clickR);
	drawThePieces();
	if (ifCheck(player1, player2)) {
		iSetColor(255, 255, 255);
		iText(0, 0, "Check!", GLUT_BITMAP_HELVETICA_18);
		//if (ifCheckMate())
			//iText(100, 0, "Checkmate!", GLUT_BITMAP_HELVETICA_18);
	}

	if (player1.win || player2.win)
		gameState = gameOver;

}

void showGameOver() {

	drawTheTimer(player1, player2);
	drawTheBoard();
	drawThePieces();


	iSetColor(redR, redG, redB);
	iFilledRectangle(0, windowHeight / 3, windowWidth, windowHeight / 3);

	if (player1.win) {
		iSetColor(whiteR, whiteG, whiteB);
		sprintf_s(player1.nameShow, "%s (%d)", player1.mail, player1.rating);
		iText(boardX + boardLength / 2, boardY + (boardLength / 2) + 20, player1.nameShow, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(boardX + boardLength / 2, boardY + (boardLength / 2) - 40 + 20, "WINS!", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(boardX + boardLength / 2, boardY + (boardLength / 2) - 80 + 20, "+50", GLUT_BITMAP_TIMES_ROMAN_24);

		getlist(player1.mail, 1, player2.mail, 0);
		
	}

	else if (player2.win) {
		iSetColor(whiteR, whiteG, whiteB);
		sprintf_s(player2.nameShow, "%s (%d)", player2.mail, player2.rating);
		iText(boardX + boardLength / 2, boardY + (boardLength / 2), player2.nameShow, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(boardX + boardLength / 2, boardY + (boardLength / 2) - 40, "WINS!", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(boardX + boardLength / 2, boardY + (boardLength / 2) - 80, "+50", GLUT_BITMAP_TIMES_ROMAN_24);

		getlist(player1.mail, 0, player2.mail, 1);
		
	}
}

void showRating() {
	iSetColor(0, 0, 0);
	iFilledRectangle(initialX, initialY, windowWidth, windowHeight);
	iSetColor(255, 255, 255);
	for (int i = 0; i < 2; i++)
		iText(200, 200, nam[i], GLUT_BITMAP_HELVETICA_18);
}