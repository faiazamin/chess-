void clickOnBoard(Click clickR) {
	if (player1.turn) {
		if (boardStatus[statusIndexX][statusIndexY] > 'a' && boardStatus[statusIndexX][statusIndexY] < 'z') {
			iSetColor(redR, redG, redB);
			iFilledRectangle(clickR.x, clickR.y, boardEdge, boardEdge);
		}
		player1MarkValidSpots(statusIndexX, statusIndexY);
	}

	else if (player2.turn) {
		if (boardStatus[statusIndexX][statusIndexY] > 'A' && boardStatus[statusIndexX][statusIndexY] < 'Z') {
			iSetColor(redR, redG, redB);
			iFilledRectangle(clickR.x, clickR.y, boardEdge, boardEdge);
		}
		player2MarkValidSpots(statusIndexX, statusIndexY);
	}
}

void clickOnClock(Click clickL) {
	if (player1.clock && clickL.x > 675 && clickL.x < 773 && clickL.y>284 && clickL.y < 338) {
		PlaySound("Media//Clock.wav", 0, 0);
		player1.clock ^= player2.clock ^= player1.clock ^= player2.clock;
		player2.turn = 1;
		player1.turn = 0;
		player1.secs += 5;
		player1.mins += (player1.secs / 60);
		player1.secs %= 60;
	}
	else if (player2.clock && clickL.x > 579 && clickL.x < 675 && clickL.y>284 && clickL.y < 338) {
		PlaySound("Media//Clock.wav", 0, 0);
		player1.clock ^= player2.clock ^= player1.clock ^= player2.clock;
		player2.turn = 0;
		player1.turn = 1;
		player2.secs += 5;
		player2.mins += (player2.secs / 60);
		player2.secs %= 60;
	}
}

void placeThePiece() {

	indexX = 7 - ((clickL.y - boardY) / boardEdge);
	indexY = ((clickL.x - boardX) / boardEdge);

	statusIndexX = 7 - ((clickR.y - boardY) / boardEdge);
	statusIndexY = ((clickR.x - boardX) / boardEdge);

	if (valid[indexX][indexY]) {

		PlaySound("Media//Piece.wav", 0, 0);

		if (boardStatus[indexX][indexY]) {

			char temp = boardStatus[indexX][indexY];
			boardStatus[indexX][indexY] = boardStatus[statusIndexX][statusIndexY];
			boardStatus[statusIndexX][statusIndexY] = '\0';

			findKings();

			if (ifCheck(player1, player2)) {
				boardStatus[statusIndexX][statusIndexY] = boardStatus[indexX][indexY];
				boardStatus[indexX][indexY] = temp;
			}

			else {
				if (temp == 'K') player1.win = 1;
				else if (temp == 'k') player2.win = 1;
				player1.turn ^= player2.turn ^= player1.turn ^= player2.turn;
			}
		}

		else {
			boardStatus[indexX][indexY] ^= boardStatus[statusIndexX][statusIndexY] ^= boardStatus[indexX][indexY] ^= boardStatus[statusIndexX][statusIndexY];

			findKings();

			if (ifCheck(player1, player2)) {
				boardStatus[indexX][indexY] ^= boardStatus[statusIndexX][statusIndexY] ^= boardStatus[indexX][indexY] ^= boardStatus[statusIndexX][statusIndexY];
			}

			else {
				player1.turn ^= player2.turn ^= player1.turn ^= player2.turn;
			}
		}
	}
}

void rightClick(Click clickR) {
	if (clickR.x > boardX && clickR.x < (boardX + boardLength) && clickR.y > boardY && clickR.y < (boardY + boardLength)) {

		refreshValid();

		clickR.x = boardX + ((((clickR.x - boardX) / boardEdge))*boardEdge);
		clickR.y = boardY + ((((clickR.y - boardY) / boardEdge))*boardEdge);

		statusIndexX = 7 - ((clickR.y - boardY) / boardEdge);
		statusIndexY = ((clickR.x - boardX) / boardEdge);

		clickOnBoard(clickR);
	}
}

void leftClick(Click clickL) {
	if (clickL.x > 579 && clickL.y < 773)
		clickOnClock(clickL);
	else if (clickL.x > boardX && clickL.x <= (boardX + boardLength) && clickL.y > boardY && clickL.y <= (boardY + boardLength))
		placeThePiece();
}