enum Menu {
	startMenu, playOn, howToPlay,
	player1Info,player2Info
}menu;

enum MainMenu {
	newMatch,
	rating,
	howToPlay,
	exitGame,
};

void showMainMenu(int selectPos) {
	if (selectPos == newMatch) iShowBMP(initialX, initialY, "Media//NEW GAME.bmp");
	else if (selectPos == rating) iShowBMP(initialX, initialY, "Media//RATING.bmp");
	else if (selectPos == howToPlay) iShowBMP(initialX, initialY, "Media//How To Play.bmp");
	else if (selectPos == exitGame) iShowBMP(initialX, initialY, "Media//EXIT.bmp");
}


void showHowToPlay() {
	iSetColor(0, 0, 0);

	iText(200, 500, "INSTRUCTIONS:", GLUT_BITMAP_HELVETICA_18);
	iText(240, 460, "- Hit Ulala to Play Lalala", GLUT_BITMAP_HELVETICA_18);
	iText(240, 440, "- Hit Ulala to Play Lalala", GLUT_BITMAP_HELVETICA_18);
	iText(240, 420, "- Hit Ulala to Play Lalala", GLUT_BITMAP_HELVETICA_18);
	iText(240, 400, "- Hit Ulala to Play Lalala", GLUT_BITMAP_HELVETICA_18);
	iText(240, 380, "- Hit Ulala to Play Lalala", GLUT_BITMAP_HELVETICA_18);
	iText(240, 360, "- Hit Ulala to Play Lalala", GLUT_BITMAP_HELVETICA_18);
	iText(240, 340, "- Hit Ulala to Play Lalala", GLUT_BITMAP_HELVETICA_18);
}

