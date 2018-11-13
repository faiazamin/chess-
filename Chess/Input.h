void takePlayersInfo(char key, int *selectPos) {
	if (*selectPos == player1Info) {
		if (key != backspace && key != enter) {
			player1.mail[player1.index++] = key;
			player1.mail[player1.index] = '\0';
		}
		else if (key != enter) {
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