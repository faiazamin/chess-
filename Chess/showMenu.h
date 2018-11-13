struct pic {
	int x, y;
	int pxl[800][500];
}wK, wQ, wR, wKn, wB, wP,bK, bQ, bR, bKn, bB, bP;

void myLoad(char *filename, struct pic *aa) {
	FILE *fp = fopen(filename, "r");
	int xx, yy, temp;
	fscanf(fp, "%d %d", &xx, &yy);
	aa->x = xx, aa->y = yy;
	for (int i = 0; i < xx; i++) {
		for (int j = 0; j < yy; j++) {
			if (!feof(fp)) {
				fscanf(fp, "%d", &temp);
				aa->pxl[i][j] = temp;
			}
		}
	}
	fclose(fp);
}

void myShowBMP2(int x, int y, struct pic *a, int ignr0 = -1, int ignr1 = -1, int ignr2 = -1) {
	int xx, yy;
	xx = a->x, yy = a->y;
	int arr[4], temp;
	for (int i = 0; i < xx; i++) {
		for (int j = 0; j < yy; j++) {
			temp = a->pxl[i][j];
			arr[0] = temp / 1000000;
			temp %= 1000000;
			arr[1] = temp / 1000;
			temp %= 1000;
			arr[2] = temp;
			if (arr[0] == ignr0 && arr[1] == ignr1 && arr[2] == ignr2) continue;
			iSetColor(arr[0], arr[1], arr[2]);
			iPoint(i + x, j + y);
		}
	}
}

void showMainMenu(int selectPos) {
	if (selectPos == newMatch) iShowBMP(initialX, initialY, "Media//NEW GAME.bmp");
	else if (selectPos == rating) iShowBMP(initialX, initialY, "Media//Rating.bmp");
	else if (selectPos == howToPlay) iShowBMP(initialX, initialY, "Media//How To Play.bmp");
	else if (selectPos == exitGame) iShowBMP(initialX, initialY, "Media//EXIT.bmp");
}

void showInfoMenu(int selectPos) {
	if (selectPos == player1Info)
		iShowBMP(initialX, initialY, "Media//Player-1 Info.bmp");

	else if (selectPos == player2Info)
		iShowBMP(initialX, initialY, "Media//Player-2 Info.bmp");

	iSetColor(text1ColorR, text1ColorG, text1ColorB);

	iText(350, 410, player1.mail, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(350, 295, player2.mail, GLUT_BITMAP_TIMES_ROMAN_24);

}

void showHowToPlay(int selectPos) {
	iShowBMP(initialX, initialY, HTP[selectPos]);
}

//Taking Players' Info
void takePlayersInfo(char key, int *selectPos) {
	if (*selectPos == player1Info) {
		if (key != backspace && key != enter) {
			player1.mail[player1.index++] = key;
			player1.mail[player1.index] = '\0';
		}
		else if(key != enter) {
			if (player1.index <= 0)
				player1.index = 0;
			else
				player1.index--;
			player1.mail[player1.index] = '\0';
		}
	}

	else if (*selectPos == player2Info) {
		if (key != backspace && key != enter) {
			player2.mail[player2.index++] = key;
			player2.mail[player2.index] = '\0';
		}
		else if (key != enter) {
			if (player2.index <= 0)
				player2.index = 0;
			else
				player2.index--;
			player2.mail[player2.index] = '\0';
		}
	}

}


void refreshValid() {
	for (indexR = 0; indexR < 8; indexR++) {
		for (indexC = 0; indexC < 8; indexC++) {
			valid[indexR][indexC] = 0;
		}
	}
}

/*
void refreshTotalValid() {
	for (indexR = 0; indexR < 8; indexR++) {
		for (indexC = 0; indexC < 8; indexC++) {
			totalValid[indexR][indexC] = 0;
		}
	}
}*/
//Loading All The Images At Once As iShowBMP Makes The Game Slower
void loadAllThePieces() {
	myLoad("PIC/OUTPUT/bK.rs", &bK);
	myLoad("PIC/OUTPUT/bQ.rs", &bQ);
	myLoad("PIC/OUTPUT/bR.rs", &bR);
	myLoad("PIC/OUTPUT/bKn.rs", &bKn);
	myLoad("PIC/OUTPUT/bB.rs", &bB);
	myLoad("PIC/OUTPUT/bP.rs", &bP);

	myLoad("PIC/OUTPUT/wK.rs", &wK);
	myLoad("PIC/OUTPUT/wQ.rs", &wQ);
	myLoad("PIC/OUTPUT/wR.rs", &wR);
	myLoad("PIC/OUTPUT/wKn.rs", &wKn);
	myLoad("PIC/OUTPUT/wB.rs", &wB);
	myLoad("PIC/OUTPUT/wP.rs", &wP);
}

