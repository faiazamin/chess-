void showMainMenu(int selectPos) {
	if (selectPos == newMatch) iShowBMP(initialX, initialY, "Media//NEW GAME.bmp");
	else if (selectPos == rating) iShowBMP(initialX, initialY, "Media//Rating.bmp");
	else if (selectPos == howToPlay) iShowBMP(initialX, initialY, "Media//How To Play.bmp");
	else if (selectPos == exitGame) iShowBMP(initialX, initialY, "Media//EXIT.bmp");
}

void showHowToPlay(int selectPos) {
	iShowBMP(initialX, initialY, HTP[selectPos]);
}

void showInfoMenu(int selectPos) {
	if (selectPos == player1Info)
		iShowBMP(initialX, initialY, "Media//Player-1 Info.bmp");

	else if (selectPos == player2Info)
		iShowBMP(initialX, initialY, "Media//Player-2 Info.bmp");

	iSetColor(blackR, blackG, blackB);

	iText(350, 410, player1.mail, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(350, 295, player2.mail, GLUT_BITMAP_TIMES_ROMAN_24);

}