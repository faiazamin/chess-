//Drawing The Chess Board
void drawTheBoard() {

	//Drawing The Board Border
	iSetColor(20, 20, 20);
	iFilledRectangle(boardX - 4, boardY - 4, (boardEdge * 8) + 8, (boardEdge * 8) + 8);
	iSetColor(248,248,248);
	iFilledRectangle(boardX - 2, boardY - 2, (boardEdge*8) + 4, (boardEdge*8) + 4);


	//Drawing The Board
	for (indexR = 0; indexR < 8; indexR++) {
		for (indexC = 0; indexC < 8; indexC++) {
			if ((indexR + indexC) % 2 == 0) iSetColor(boardWhiteR, boardWhiteG, boardWhiteB);
			else iSetColor(boardBlackR, boardBlackG, boardBlackB);
			iFilledRectangle(boardX+(boardEdge*indexC), boardY+(boardEdge*indexR), boardEdge, boardEdge);
		}
	}

	//Showing Players' Name
	iSetColor(whiteR,whiteG,whiteB);
	sprintf_s(player1.nameShow, "%s (%d)", player1.mail, player1.rating);
	iText(boardX, boardY-30, player1.nameShow, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf_s(player2.nameShow, "%s (%d)", player2.mail, player2.rating);
	iText(boardX, boardY + boardLength + 20, player2.nameShow, GLUT_BITMAP_TIMES_ROMAN_24);

}

//Drawing The White Pieces
void drawThePieces() {

	for (indexR = 0; indexR < 8; indexR++) {
		for (indexC = 0; indexC < 8; indexC++) {
			if (boardStatus[indexR][indexC] == 'k')
				myShowBMP2(boardX + (boardEdge*indexC), boardY+  ((7 - indexR)*boardEdge), &wK, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'q')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &wQ, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'r')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &wR, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'n')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &wKn, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'b')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &wB, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'p')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &wP, 0, 0, 0);


			else if (boardStatus[indexR][indexC] == 'K')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &bK, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'Q')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &bQ, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'R')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &bR, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'N')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &bKn, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'B')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &bB, 0, 0, 0);
			else if (boardStatus[indexR][indexC] == 'P')
				myShowBMP2(boardX + (boardEdge*indexC), boardY + ((7 - indexR)*boardEdge), &bP, 0, 0, 0);
		}
	}
}

void drawTheTimer(Players player1, Players player2) {
	if(player1.clock) iShowBMP(initialX, initialY, "Media//Player-1 Turn.bmp");
	else iShowBMP(initialX, initialY, "Media//Player-2 Turn.bmp");

	if (player2.clock)
		iSetColor(whiteR, whiteG, whiteB);
	else
		iSetColor(blackR, blackG, blackB);

	sprintf_s(player2.timeShow, "%d:%d", player2.mins, player2.secs);
	iText(player2TimeX, player2TimeY + 40, player2.timeShow, GLUT_BITMAP_TIMES_ROMAN_24);

	if (player1.clock)
		iSetColor(whiteR, whiteG, whiteB);
	else
		iSetColor(blackR, blackG, blackB);

	sprintf_s(player1.timeShow, "%d:%d", player1.mins, player1.secs);
	iText(player1TimeX, player1TimeY + 40, player1.timeShow, GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(whiteR, whiteG, whiteB);
	iText(player1TimeX+10, player1TimeY-15 , "P1", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(player2TimeX+10, player1TimeY-15, "P2", GLUT_BITMAP_TIMES_ROMAN_24);

}
