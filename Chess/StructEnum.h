struct Click {
	int x, y;
}clickL, clickR;

enum pieces {
	king, queen, rook, knight, bishop, paun
};

char HTP[100][100] = {
	"Media//HTP-1.bmp",
	"Media//HTP-2.bmp",
	"Media//HTP-3.bmp",
	"Media//HTP-4.bmp",
	"Media//HTP-5.bmp",
	"Media//HTP-6.bmp",
	"Media//HTP-7.bmp",
	"Media//HTP-8.bmp",
	"Media//HTP-9.bmp",
	"Media//HTP-10.bmp",
	"Media//HTP-11.bmp",
	"Media//HTP-12.bmp",
	"Media//HTP-13.bmp",
	"Media//HTP-14.bmp",
	"Media//HTP-15.bmp",
	"Media//HTP-16.bmp",
	"Media//HTP-17.bmp",
};

enum State {
	mainMenu, playOn, inHowToPlay,
	info, gameOver, inRating
}gameState;

enum MainMenu {
	newMatch,
	rating,
	howToPlay,
	exitGame,
};

enum Info {
	player1Info,
	player2Info
};

struct Players {
	char mail[100], timeShow[100];
	int rating = 1200, index = 0;
	int turn, clock;
	int secs, mins;
	char nameShow[100];
	int kingX, kingY;
	int win = 0;
}player1, player2;

struct pic {
	int x, y;
	int pxl[800][500];
}wK, wQ, wR, wKn, wB, wP, bK, bQ, bR, bKn, bB, bP;