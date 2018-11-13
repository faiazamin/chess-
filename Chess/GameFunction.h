void findKings() {
	for (indexR = 0; indexR < 8; indexR++) {
		for (indexC = 0; indexC < 8; indexC++) {
			if (boardStatus[indexR][indexC] == 'K') {
				player2.kingX = indexR;
				player2.kingY = indexC;
			}
			else if (boardStatus[indexR][indexC] == 'k') {
				player1.kingX = indexR;
				player1.kingY = indexC;
			}
		}
	}
}

int ifCheck(Players player1, Players player2) {
	if (player1.turn) {
		indexR = player1.kingX; indexC = player1.kingY;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'B')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'P' || boardStatus[indexR][indexC] == 'K') && (abs(indexR - player1.kingY) == 1) && (abs(indexC - player1.kingX) == 1))
					return 1;
			}
		}

		indexR = player1.kingX; indexC = player1.kingY;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'B')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'P' || boardStatus[indexR][indexC] == 'K') && (abs(indexR - player1.kingY) == 1) && (abs(indexC - player1.kingX) == 1))
					return 1;
			}
		}

		indexR = player1.kingX; indexC = player1.kingY;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'B')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'P' || boardStatus[indexR][indexC] == 'K') && (abs(indexR - player1.kingY) == 1) && (abs(indexC - player1.kingX) == 1))
					return 1;
			}
		}

		indexR = player1.kingX; indexC = player1.kingY;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'B')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'P' || boardStatus[indexR][indexC] == 'K') && (abs(indexR - player1.kingY) == 1) && (abs(indexC - player1.kingX) == 1))
					return 1;
			}
		}

		indexR = player1.kingX; indexC = player1.kingY;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'R')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'K') && (abs(indexR - player1.kingY) == 1))
					return 1;
			}
		}

		indexR = player1.kingX; indexC = player1.kingY;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'R')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'K') && (abs(indexR - player1.kingY) == 1))
					return 1;
			}
		}

		indexR = player1.kingX; indexC = player1.kingY;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'R')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'K') && (abs(indexC - player1.kingX) == 1))
					return 1;
			}
		}

		indexR = player1.kingX; indexC = player1.kingY;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				if (boardStatus[indexR][indexC] == 'Q' || boardStatus[indexR][indexC] == 'R')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'K') && (abs(indexC - player1.kingX) == 1))
					return 1;
			}

		}

		indexR = player1.kingX; indexC = player1.kingY;

		if (boardStatus[indexR + 2][indexC + 1] == 'N' && (indexR + 2 < 8) && (indexC + 1 < 8))
			return 1;

		if (boardStatus[indexR - 2][indexC + 1] == 'N' && (indexR - 2 >= 0) && (indexC + 1 < 8))
			return 1;

		if ((boardStatus[indexR + 2][indexC - 1] == 'N') && (indexR + 2 < 8) && (indexC - 1 >= 0))
			return 1;

		if ((boardStatus[indexR - 2][indexC - 1] == 'N') && (indexR - 2 >= 0) && (indexC - 1 >= 0))
			return 1;

		if ((boardStatus[indexR + 1][indexC + 2] == 'N') && (indexR + 1 < 8) && (indexC + 2 < 8))
			return 1;

		if ((boardStatus[indexR - 1][indexC + 2] == 'N') && (indexR - 1 >= 0) && (indexC + 2 < 8))
			return 1;

		if ((boardStatus[indexR + 1][indexC - 2] == 'N') && (indexR + 1 < 8) && (indexC - 2 >= 0))
			return 1;

		if ((boardStatus[indexR - 1][indexC - 2] == 'N') && (indexR - 1 >= 0) && (indexC - 2 >= 0))
			return 1;
	}

	else if (player2.turn) {
		indexR = player2.kingX; indexC = player2.kingY;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'b')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'p' || boardStatus[indexR][indexC] == 'k') && (abs(indexR - player2.kingY) == 1) && (abs(indexC - player2.kingX) == 1))
					return 1;
			}
		}

		indexR = player2.kingX; indexC = player2.kingY;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'b')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'p' || boardStatus[indexR][indexC] == 'k') && (abs(indexR - player2.kingY) == 1) && (abs(indexC - player2.kingX) == 1))
					return 1;
			}
		}

		indexR = player2.kingX; indexC = player2.kingY;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'b')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'p' || boardStatus[indexR][indexC] == 'k') && (abs(indexR - player2.kingY) == 1) && (abs(indexC - player2.kingX) == 1))
					return 1;
			}
		}

		indexR = player2.kingX; indexC = player2.kingY;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'b')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'p' || boardStatus[indexR][indexC] == 'k') && (abs(indexR - player2.kingY) == 1) && (abs(indexC - player2.kingX) == 1))
					return 1;
			}
		}

		indexR = player2.kingX; indexC = player2.kingY;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'r')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'k') && (abs(indexR - player2.kingY) == 1))
					return 1;
			}
		}

		indexR = player2.kingX; indexC = player2.kingY;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'r')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'k') && (abs(indexR - player2.kingY) == 1))
					return 1;
			}
		}

		indexR = player2.kingX; indexC = player2.kingY;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'r')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'k') && (abs(indexC - player2.kingX) == 1))
					return 1;
			}
		}

		indexR = player2.kingX; indexC = player2.kingY;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				if (boardStatus[indexR][indexC] == 'q' || boardStatus[indexR][indexC] == 'r')
					return 1;
				else if ((boardStatus[indexR][indexC] == 'k') && (abs(indexC - player2.kingX) == 1))
					return 1;
			}

		}

		indexR = player2.kingX; indexC = player2.kingY;

		if (boardStatus[indexR + 2][indexC + 1] == 'n' && (indexR + 2 < 8) && (indexC + 1 < 8))
			return 1;

		if (boardStatus[indexR - 2][indexC + 1] == 'n' && (indexR - 2 >= 0) && (indexC + 1 < 8))
			return 1;

		if ((boardStatus[indexR + 2][indexC - 1] == 'n') && (indexR + 2 < 8) && (indexC - 1 >= 0))
			return 1;

		if ((boardStatus[indexR - 2][indexC - 1] == 'n') && (indexR - 2 >= 0) && (indexC - 1 >= 0))
			return 1;

		if ((boardStatus[indexR + 1][indexC + 2] == 'n') && (indexR + 1 < 8) && (indexC + 2 < 8))
			return 1;

		if ((boardStatus[indexR - 1][indexC + 2] == 'n') && (indexR - 1 >= 0) && (indexC + 2 < 8))
			return 1;

		if ((boardStatus[indexR + 1][indexC - 2] == 'n') && (indexR + 1 < 8) && (indexC - 2 >= 0))
			return 1;

		if ((boardStatus[indexR - 1][indexC - 2] == 'n') && (indexR - 1 >= 0) && (indexC - 2 >= 0))
			return 1;
	}

	return 0;
}

void player1MarkValidSpots(int x, int y) {

	indexR = x;
	indexC = y;

	if (boardStatus[indexR][indexC] == 'k') {


		if ((boardStatus[indexR + 1][indexC]<'a' || boardStatus[indexR + 1][indexC] > 'z') && (indexR + 1 < 8)) {
			valid[indexR + 1][indexC] = 1;
			if ((indexR + 1 + indexC) % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC]<'a' || boardStatus[indexR - 1][indexC] > 'z') && (indexR - 1 >= 0)) {
			valid[indexR - 1][indexC] = 1;
			if (indexR - 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR][indexC + 1]<'a' || boardStatus[indexR][indexC + 1] > 'z') && (indexC + 1 < 8)) {
			valid[indexR][indexC + 1] = 1;
			if (indexR + 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR][indexC - 1]<'a' || boardStatus[indexR][indexC - 1] > 'z') && (indexC - 1 >= 0)) {
			valid[indexR][indexC - 1] = 1;
			if (indexR - 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC - 1]<'a' || boardStatus[indexR - 1][indexC - 1] > 'z') && (indexR - 1 >= 0) && (indexC - 1 >= 0)) {
			valid[indexR - 1][indexC - 1] = 1;
			if (indexR - 2 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC + 1]<'a' || boardStatus[indexR - 1][indexC + 1] > 'z') && (indexR - 1 >= 0) && (indexC + 1 < 8)) {
			valid[indexR - 1][indexC + 1] = 1;
			if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC - 1]<'a' || boardStatus[indexR + 1][indexC - 1] > 'z') && (indexR + 1 < 8) && (indexC - 1 >= 0)) {
			valid[indexR + 1][indexC - 1] = 1;
			if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC + 1]<'a' || boardStatus[indexR + 1][indexC + 1] > 'z') && (indexR + 1 < 8) && (indexC + 1 < 8)) {
			valid[indexR + 1][indexC + 1] = 1;
			if (indexR + 2 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}
	}

	else if (boardStatus[indexR][indexC] == 'q') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);;
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'r') {
		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'n') {

		if ((boardStatus[indexR + 2][indexC + 1]<'a' || boardStatus[indexR + 2][indexC + 1] > 'z') && (indexR + 2 < 8) && (indexC + 1 < 8)) {
			valid[indexR + 2][indexC + 1] = 1;
			if (indexR + 3 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR - 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 2][indexC + 1]<'a' || boardStatus[indexR - 2][indexC + 1] > 'z') && (indexR - 2 >= 0) && (indexC + 1 < 8)) {
			valid[indexR - 2][indexC + 1] = 1;
			if (indexR - 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR + 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 2][indexC - 1]<'a' || boardStatus[indexR + 2][indexC - 1] > 'z') && (indexR + 2 < 8) && (indexC - 1 >= 0)) {
			valid[indexR + 2][indexC - 1] = 1;
			if (indexR + 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR - 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 2][indexC - 1]<'a' || boardStatus[indexR - 2][indexC - 1] > 'z') && (indexR - 2 >= 0) && (indexC - 1 >= 0)) {
			valid[indexR - 2][indexC - 1] = 1;
			if (indexR - 3 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR + 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC + 2]<'a' || boardStatus[indexR + 1][indexC + 2] > 'z') && (indexR + 1 < 8) && (indexC + 2 < 8)) {
			valid[indexR + 1][indexC + 2] = 1;
			if (indexR + 3 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 2)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC + 2]<'a' || boardStatus[indexR - 1][indexC + 2] > 'z') && (indexR - 1 >= 0) && (indexC + 2 < 8)) {
			valid[indexR - 1][indexC + 2] = 1;
			if (indexR + 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 2)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC - 2]<'a' || boardStatus[indexR + 1][indexC - 2] > 'z') && (indexR + 1 < 8) && (indexC - 2 >= 0)) {
			valid[indexR + 1][indexC - 2] = 1;
			if (indexR - 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 2)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC - 2]<'a' || boardStatus[indexR - 1][indexC - 2] > 'z') && (indexR - 1 >= 0) && (indexC - 2 >= 0)) {
			valid[indexR - 1][indexC - 2] = 1;
			if (indexR - 3 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 2)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

	}

	else if (boardStatus[indexR][indexC] == 'b') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
				else iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'p') {

		if (indexR == 6 && boardStatus[5][indexC] == '\0') {
			valid[indexR - 2][indexC] = 1;
			if ((((indexR - 1)*indexC) + indexC) % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR + 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC]<'a' || boardStatus[indexR - 1][indexC] > 'z') && (indexR - 1 >= 0)) {
			valid[indexR - 1][indexC] = 1;
			if (indexR - 1 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC + 1] > 'A' && boardStatus[indexR - 1][indexC + 1] < 'Z') && (indexR - 1 >= 0) && (indexC + 1) < 8) {
			valid[indexR - 1][indexC + 1] = 1;
			if (indexR + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC - 1] > 'A' && boardStatus[indexR - 1][indexC - 1] < 'Z') && (indexR - 1 >= 0) && (indexC - 1)) {
			valid[indexR - 1][indexC - 1] = 1;
			if (indexR - 2 + indexC % 2) iSetColor(lightRedR, lightRedG, lightRedB);
			else iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}
	}
}

void player2MarkValidSpots(int x, int y) {

	indexR = x;
	indexC = y;

	if (boardStatus[indexR][indexC] == 'K') {

		if ((boardStatus[indexR + 1][indexC]<'A' || boardStatus[indexR + 1][indexC] > 'Z') && (indexR + 1 < 8)) {
			valid[indexR + 1][indexC] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC]<'A' || boardStatus[indexR - 1][indexC] > 'Z') && (indexR - 1 >= 0)) {
			valid[indexR - 1][indexC] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR][indexC + 1]<'A' || boardStatus[indexR][indexC + 1] > 'Z') && (indexC + 1 < 8)) {
			valid[indexR][indexC + 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR][indexC - 1]<'A' || boardStatus[indexR][indexC - 1] > 'Z') && (indexC - 1 >= 0)) {
			valid[indexR][indexC - 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC - 1]<'A' || boardStatus[indexR - 1][indexC - 1] > 'Z') && (indexR - 1 >= 0) && (indexC - 1 >= 0)) {
			valid[indexR - 1][indexC - 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC + 1]<'A' || boardStatus[indexR - 1][indexC + 1] > 'Z') && (indexR - 1 >= 0) && (indexC + 1 < 8)) {
			valid[indexR - 1][indexC + 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC - 1]<'A' || boardStatus[indexR + 1][indexC - 1] > 'Z') && (indexR + 1 < 8) && (indexC - 1 >= 0)) {
			valid[indexR + 1][indexC - 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC + 1]<'A' || boardStatus[indexR + 1][indexC + 1] > 'Z') && (indexR + 1 < 8) && (indexC + 1 < 8)) {
			valid[indexR + 1][indexC + 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}
	}

	else if (boardStatus[indexR][indexC] == 'Q') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'R') {
		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}
	}

	else 	if (boardStatus[indexR][indexC] == 'N') {

		if ((boardStatus[indexR + 2][indexC + 1]<'A' || boardStatus[indexR + 2][indexC + 1] > 'Z') && (indexR + 2 < 8) && (indexC + 1 < 8)) {
			valid[indexR + 2][indexC + 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR - 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 2][indexC + 1]<'A' || boardStatus[indexR - 2][indexC + 1] > 'Z') && (indexR - 2 >= 0) && (indexC + 1 < 8)) {
			valid[indexR - 2][indexC + 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR + 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 2][indexC - 1]<'A' || boardStatus[indexR + 2][indexC - 1] > 'Z') && (indexR + 2 < 8) && (indexC - 1 >= 0)) {
			valid[indexR + 2][indexC - 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR - 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 2][indexC - 1]<'A' || boardStatus[indexR - 2][indexC - 1] > 'Z') && (indexR - 2 >= 0) && (indexC - 1 >= 0)) {
			valid[indexR - 2][indexC - 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR + 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC + 2]<'A' || boardStatus[indexR + 1][indexC + 2] > 'Z') && (indexR + 1 < 8) && (indexC + 2 < 8)) {
			valid[indexR + 1][indexC + 2] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 2)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC + 2]<'A' || boardStatus[indexR - 1][indexC + 2] > 'Z') && (indexR - 1 >= 0) && (indexC + 2 < 8)) {
			valid[indexR - 1][indexC + 2] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 2)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC - 2]<'A' || boardStatus[indexR + 1][indexC - 2] > 'Z') && (indexR + 1 < 8) && (indexC - 2 >= 0)) {
			valid[indexR + 1][indexC - 2] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 2)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR - 1][indexC - 2]<'A' || boardStatus[indexR - 1][indexC - 2] > 'Z') && (indexR - 1 >= 0) && (indexC - 2 >= 0)) {
			valid[indexR - 1][indexC - 2] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 2)*boardEdge), boardY + ((7 - indexR + 1)*boardEdge), boardEdge, boardEdge);
		}

	}

	else if (boardStatus[indexR][indexC] == 'B') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'P') {

		if (indexR == 1 && boardStatus[2][indexC] == '\0') {
			valid[indexR + 2][indexC] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR - 2)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC]<'A' || boardStatus[indexR + 1][indexC] > 'Z') && (indexR + 1 < 8)) {
			valid[indexR + 1][indexC] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC + 1] > 'a' && boardStatus[indexR + 1][indexC + 1] < 'z') && (indexR + 1 < 8) && (indexC + 1) < 8) {
			valid[indexR + 1][indexC + 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC + 1)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}

		if ((boardStatus[indexR + 1][indexC - 1] > 'a' && boardStatus[indexR + 1][indexC - 1] < 'z') && (indexR + 1 < 8) && (indexC - 1)) {
			valid[indexR + 1][indexC - 1] = 1;
			iSetColor(redR, redG, redB);
			iFilledRectangle(boardX + ((indexC - 1)*boardEdge), boardY + ((7 - indexR - 1)*boardEdge), boardEdge, boardEdge);
		}
	}
}

void player1ValidSpots(int x, int y) {

	indexR = x;
	indexC = y;

	if (boardStatus[indexR][indexC] == 'k') {


		if ((boardStatus[indexR + 1][indexC]<'a' || boardStatus[indexR + 1][indexC] > 'z') && (indexR + 1 < 8))
			valid[indexR + 1][indexC] = 1;

		if ((boardStatus[indexR - 1][indexC]<'a' || boardStatus[indexR - 1][indexC] > 'z') && (indexR - 1 >= 0))
			valid[indexR - 1][indexC] = 1;


		if ((boardStatus[indexR][indexC + 1]<'a' || boardStatus[indexR][indexC + 1] > 'z') && (indexC + 1 < 8))
			valid[indexR][indexC + 1] = 1;

		if ((boardStatus[indexR][indexC - 1]<'a' || boardStatus[indexR][indexC - 1] > 'z') && (indexC - 1 >= 0))
			valid[indexR][indexC - 1] = 1;

		if ((boardStatus[indexR - 1][indexC - 1]<'a' || boardStatus[indexR - 1][indexC - 1] > 'z') && (indexR - 1 >= 0) && (indexC - 1 >= 0))
			valid[indexR - 1][indexC - 1] = 1;

		if ((boardStatus[indexR - 1][indexC + 1]<'a' || boardStatus[indexR - 1][indexC + 1] > 'z') && (indexR - 1 >= 0) && (indexC + 1 < 8))
			valid[indexR - 1][indexC + 1] = 1;

		if ((boardStatus[indexR + 1][indexC - 1]<'a' || boardStatus[indexR + 1][indexC - 1] > 'z') && (indexR + 1 < 8) && (indexC - 1 >= 0))
			valid[indexR + 1][indexC - 1] = 1;

		if ((boardStatus[indexR + 1][indexC + 1]<'a' || boardStatus[indexR + 1][indexC + 1] > 'z') && (indexR + 1 < 8) && (indexC + 1 < 8))
			valid[indexR + 1][indexC + 1] = 1;

	}

	else if (boardStatus[indexR][indexC] == 'q') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;

			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'r') {
		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'n') {

		if ((boardStatus[indexR + 2][indexC + 1]<'a' || boardStatus[indexR + 2][indexC + 1] > 'z') && (indexR + 2 < 8) && (indexC + 1 < 8)) {
			valid[indexR + 2][indexC + 1] = 1;
		}

		if ((boardStatus[indexR - 2][indexC + 1]<'a' || boardStatus[indexR - 2][indexC + 1] > 'z') && (indexR - 2 >= 0) && (indexC + 1 < 8)) {
			valid[indexR - 2][indexC + 1] = 1;
		}

		if ((boardStatus[indexR + 2][indexC - 1]<'a' || boardStatus[indexR + 2][indexC - 1] > 'z') && (indexR + 2 < 8) && (indexC - 1 >= 0)) {
			valid[indexR + 2][indexC - 1] = 1;
		}

		if ((boardStatus[indexR - 2][indexC - 1]<'a' || boardStatus[indexR - 2][indexC - 1] > 'z') && (indexR - 2 >= 0) && (indexC - 1 >= 0)) {
			valid[indexR - 2][indexC - 1] = 1;
		}

		if ((boardStatus[indexR + 1][indexC + 2]<'a' || boardStatus[indexR + 1][indexC + 2] > 'z') && (indexR + 1 < 8) && (indexC + 2 < 8)) {
			valid[indexR + 1][indexC + 2] = 1;
		}

		if ((boardStatus[indexR - 1][indexC + 2]<'a' || boardStatus[indexR - 1][indexC + 2] > 'z') && (indexR - 1 >= 0) && (indexC + 2 < 8)) {
			valid[indexR - 1][indexC + 2] = 1;
		}

		if ((boardStatus[indexR + 1][indexC - 2]<'a' || boardStatus[indexR + 1][indexC - 2] > 'z') && (indexR + 1 < 8) && (indexC - 2 >= 0)) {
			valid[indexR + 1][indexC - 2] = 1;
		}

		if ((boardStatus[indexR - 1][indexC - 2]<'a' || boardStatus[indexR - 1][indexC - 2] > 'z') && (indexR - 1 >= 0) && (indexC - 2 >= 0)) {
			valid[indexR - 1][indexC - 2] = 1;
		}

	}

	else if (boardStatus[indexR][indexC] == 'b') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a' && boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
				iSetColor(redR, redG, redB);
				iFilledRectangle(boardX + ((indexC)*boardEdge), boardY + ((7 - indexR)*boardEdge), boardEdge, boardEdge);
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) break;
			else if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'p') {

		if (indexR == 6 && boardStatus[indexR - 2][indexC] == '\0') {
			valid[indexR - 2][indexC] = 1;
		}

		if ((boardStatus[indexR - 1][indexC]<'a' || boardStatus[indexR - 1][indexC] > 'z') && (indexR - 1 >= 0)) {
			valid[indexR - 1][indexC] = 1;
		}

		if ((boardStatus[indexR - 1][indexC + 1] > 'A' && boardStatus[indexR - 1][indexC + 1] < 'Z') && (indexR - 1 >= 0) && (indexC + 1) < 8) {
			valid[indexR - 1][indexC + 1] = 1;
		}

		if ((boardStatus[indexR - 1][indexC - 1] > 'A' && boardStatus[indexR - 1][indexC - 1] < 'Z') && (indexR - 1 >= 0) && (indexC - 1)) {
			valid[indexR - 1][indexC - 1] = 1;
		}
	}
}

void player2ValidSpots(int x, int y) {

	indexR = x;
	indexC = y;

	if (boardStatus[indexR][indexC] == 'K') {

		if ((boardStatus[indexR + 1][indexC]<'A' || boardStatus[indexR + 1][indexC] > 'Z') && (indexR + 1 < 8)) {
			valid[indexR + 1][indexC] = 1;
		}

		if ((boardStatus[indexR - 1][indexC]<'A' || boardStatus[indexR - 1][indexC] > 'Z') && (indexR - 1 >= 0)) {
			valid[indexR - 1][indexC] = 1;
		}

		if ((boardStatus[indexR][indexC + 1]<'A' || boardStatus[indexR][indexC + 1] > 'Z') && (indexC + 1 < 8)) {
			valid[indexR][indexC + 1] = 1;
		}

		if ((boardStatus[indexR][indexC - 1]<'A' || boardStatus[indexR][indexC - 1] > 'Z') && (indexC - 1 >= 0)) {
			valid[indexR][indexC - 1] = 1;
		}

		if ((boardStatus[indexR - 1][indexC - 1]<'A' || boardStatus[indexR - 1][indexC - 1] > 'Z') && (indexR - 1 >= 0) && (indexC - 1 >= 0)) {
			valid[indexR - 1][indexC - 1] = 1;
		}

		if ((boardStatus[indexR - 1][indexC + 1]<'A' || boardStatus[indexR - 1][indexC + 1] > 'Z') && (indexR - 1 >= 0) && (indexC + 1 < 8)) {
			valid[indexR - 1][indexC + 1] = 1;
		}

		if ((boardStatus[indexR + 1][indexC - 1]<'A' || boardStatus[indexR + 1][indexC - 1] > 'Z') && (indexR + 1 < 8) && (indexC - 1 >= 0)) {
			valid[indexR + 1][indexC - 1] = 1;
		}

		if ((boardStatus[indexR + 1][indexC + 1]<'A' || boardStatus[indexR + 1][indexC + 1] > 'Z') && (indexR + 1 < 8) && (indexC + 1 < 8)) {
			valid[indexR + 1][indexC + 1] = 1;
		}
	}

	else if (boardStatus[indexR][indexC] == 'Q') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'R') {
		indexR = x; indexC = y;
		while (indexR > 0) {
			indexR--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7) {
			indexR++;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC > 0) {
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexC < 7) {
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}
	}

	else 	if (boardStatus[indexR][indexC] == 'N') {

		if ((boardStatus[indexR + 2][indexC + 1]<'A' || boardStatus[indexR + 2][indexC + 1] > 'Z') && (indexR + 2 < 8) && (indexC + 1 < 8)) {
			valid[indexR + 2][indexC + 1] = 1;
		}

		if ((boardStatus[indexR - 2][indexC + 1]<'A' || boardStatus[indexR - 2][indexC + 1] > 'Z') && (indexR - 2 >= 0) && (indexC + 1 < 8)) {
			valid[indexR - 2][indexC + 1] = 1;
		}

		if ((boardStatus[indexR + 2][indexC - 1]<'A' || boardStatus[indexR + 2][indexC - 1] > 'Z') && (indexR + 2 < 8) && (indexC - 1 >= 0)) {
			valid[indexR + 2][indexC - 1] = 1;
		}

		if ((boardStatus[indexR - 2][indexC - 1]<'A' || boardStatus[indexR - 2][indexC - 1] > 'Z') && (indexR - 2 >= 0) && (indexC - 1 >= 0)) {
			valid[indexR - 2][indexC - 1] = 1;
		}

		if ((boardStatus[indexR + 1][indexC + 2]<'A' || boardStatus[indexR + 1][indexC + 2] > 'Z') && (indexR + 1 < 8) && (indexC + 2 < 8)) {
			valid[indexR + 1][indexC + 2] = 1;
		}

		if ((boardStatus[indexR - 1][indexC + 2]<'A' || boardStatus[indexR - 1][indexC + 2] > 'Z') && (indexR - 1 >= 0) && (indexC + 2 < 8)) {
			valid[indexR - 1][indexC + 2] = 1;
		}

		if ((boardStatus[indexR + 1][indexC - 2]<'A' || boardStatus[indexR + 1][indexC - 2] > 'Z') && (indexR + 1 < 8) && (indexC - 2 >= 0)) {
			valid[indexR + 1][indexC - 2] = 1;
		}

		if ((boardStatus[indexR - 1][indexC - 2]<'A' || boardStatus[indexR - 1][indexC - 2] > 'Z') && (indexR - 1 >= 0) && (indexC - 2 >= 0)) {
			valid[indexR - 1][indexC - 2] = 1;
		}

	}

	else if (boardStatus[indexR][indexC] == 'B') {
		indexR = x; indexC = y;
		while (indexR < 7 && indexC < 7) {
			indexR++;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A' && boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR < 7 && indexC >0) {
			indexR++;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a'&&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC < 7) {
			indexR--;
			indexC++;
			if ((boardStatus[indexR][indexC] > 'A'&&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}

		indexR = x; indexC = y;
		while (indexR > 0 && indexC > 0) {
			indexR--;
			indexC--;
			if ((boardStatus[indexR][indexC] > 'A' &&  boardStatus[indexR][indexC] < 'Z')) break;
			else if ((boardStatus[indexR][indexC] > 'a' &&  boardStatus[indexR][indexC] < 'z')) {
				valid[indexR][indexC] = 1;
				break;
			}
			else {
				valid[indexR][indexC] = 1;
			}
		}
	}

	else if (boardStatus[indexR][indexC] == 'P') {

		if (indexR == 1 && boardStatus[indexR + 2][indexC] == '\0') {
			valid[indexR + 2][indexC] = 1;
		}

		if ((boardStatus[indexR + 1][indexC]<'A' || boardStatus[indexR + 1][indexC] > 'Z') && (indexR + 1 < 8)) {
			valid[indexR + 1][indexC] = 1;
		}

		if ((boardStatus[indexR + 1][indexC + 1] > 'a' && boardStatus[indexR + 1][indexC + 1] < 'z') && (indexR + 1 < 8) && (indexC + 1) < 8) {
			valid[indexR + 1][indexC + 1] = 1;
		}

		if ((boardStatus[indexR + 1][indexC - 1] > 'a' && boardStatus[indexR + 1][indexC - 1] < 'z') && (indexR + 1 < 8) && (indexC - 1)) {
			valid[indexR + 1][indexC - 1] = 1;
		}
	}
}