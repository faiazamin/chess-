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