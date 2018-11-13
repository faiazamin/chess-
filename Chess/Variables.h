int statusIndexX, statusIndexY;
int indexX, indexY, indexR, indexC;
int selectPos = 0;

char boardStatus[8][8] = {
	{'R','N','B','Q','K','B','N','R'},
	{'P','P','P','P','P','P','P','P'},
	{'\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0'},
	{'\0','\0','\0','\0','\0','\0','\0','\0'},
	{'p','p','p','p','p','p','p','p'},
	{'r','n','b','q','k','b','n','r'}
};

int valid[8][8] = {
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
};

void refreshValid() {
	for (indexR = 0; indexR < 8; indexR++) {
		for (indexC = 0; indexC < 8; indexC++) {
			valid[indexR][indexC] = 0;
		}
	}
}

char whitePieces[6][30] = {
	"Media//wK.bmp",
	"Media//wQ.bmp",
	"Media//wR.bmp",
	"Media//wKn.bmp",
	"Media//wB.bmp",
	"Media//wP.bmp"
};

char blackPieces[6][30] = {
	"Media//bK.bmp",
	"Media//bQ.bmp",
	"Media//bR.bmp",
	"Media//bKn.bmp",
	"Media//bB.bmp",
	"Media//bP.bmp"
};