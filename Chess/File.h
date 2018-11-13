#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//int arr[1000];
//char name[1000][30];
std::vector<int> arr(1000);
std::vector<std::string> name(1000);
//FILE *Ranklist, *Rank;
std::fstream RankList, Rank;
std::vector<int> arr2(1000);
std::vector<std::string> name2(1000);
char nam[20][100];

void getlist(char *mail_1, int win1, char *mail_2, int win2) {
	int i = 0;
	int rank;
	std::string na;
	RankList.open("playerlists.txt", std::ios::in);
	while (RankList>>na>>rank) {
		i++;
		arr.push_back(rank);
		name.push_back(na);
	}
	RankList.close();
	int n = i, found_1 = 0, found_2 = 0;

	for (i = 0; i < n; i++) {
		if (!strcmp(mail_1, name[i].c_str())) {
			if (win1 == 1) arr[i] += 50;
			else arr[i] -= 50;
			found_1 = 1;
			break;
		}
	}
	if (!found_1) {
		name[i].assign(mail_1);
		arr[i] = 1200;
		n++;
	}
	for (i = 0; i < n; i++) {
		if (!strcmp(mail_2, name[i].c_str())) {
			if (win2 == 1) arr[i] += 50;
			else arr[i] -= 50;
			found_2 = 1;
			break;
		}
	}
	if (!found_2) {
		name[i].assign(mail_2);
		arr[i] = 1200;
		n++;
	}

	RankList.open("playerlists.txt", std::ios::app);
	for (i = 0; i < n; i++) {
		RankList<<name[i]<<arr[i];
	}
	RankList.close();

}

void getRank(void) {
	Rank.open("rank.txt", std::ios::out);
	RankList.open("playerlists.txt", std::ios::in);
	int i = 0, j, brr[1000];
	int rank;
	std::string na;
	while (RankList>>name[i]>>arr[i]) {
		
		brr[i] = arr[i];
		i++;
	}
	RankList.close();
	int n = i;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (arr[i] >= arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i <= n; i++) {
		for (j = 0; j < n; j++) {
			if (arr[i] == brr[j])
			{
				Rank<<"#"<<i+1<<name[j]<<std::endl;
				brr[j] = -1;
				break;
			}
		}
	}

	Rank.close();
	Rank.open("rank.txt", std::ios::in);
	i = 0;
	while (Rank >> name2[i] >> arr2[i]) {
		strcpy(nam[i], name2[i].c_str());
		i++;
	}
	Rank.close();
}


