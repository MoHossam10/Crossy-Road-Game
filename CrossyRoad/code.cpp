#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void Fill(unsigned char X[][80])
{
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			X[r][c] = ' ';
		}
	}
	unsigned char L = 205;
	for (int c = 0; c < 80; c++)
	{
		X[0][c] = L;
		X[23][c] = L;
	}
	L = 186;
	for (int r = 0; r < 24; r++)
	{
		X[r][0] = L;
		X[r][79] = L;
	}
	L = 205;
	for (int c = 0; c < 80; c++)
	{
		X[4][c] = L;
	}
	X[4][0] = 204;
	X[4][79] = 185;
	X[0][0] = 201;
	X[0][79] = 187;
	X[23][0] = 200;
	X[23][79] = 188;
	X[1][1] = 194;
	X[2][1] = '|';
	X[3][1] = '|';
	X[1][5] = 194;
	X[2][5] = '|';
	X[3][5] = '|';
	X[1][10] = 194;
	X[2][10] = '|';
	X[3][10] = '|';
	X[1][15] = 194;
	X[2][15] = '|';
	X[3][15] = '|';
	X[1][20] = 194;
	X[2][20] = '|';
	X[3][20] = '|';
	X[1][25] = 194;
	X[2][25] = '|';
	X[3][25] = '|';
	X[1][30] = 194;
	X[2][30] = '|';
	X[3][30] = '|';
	X[1][50] = 194;
	X[2][50] = '|';
	X[3][50] = '|';
	X[1][55] = 194;
	X[2][55] = '|';
	X[3][55] = '|';
	X[1][60] = 194;
	X[2][60] = '|';
	X[3][60] = '|';
	X[1][65] = 194;
	X[2][65] = '|';
	X[3][65] = '|';
	X[1][70] = 194;
	X[2][70] = '|';
	X[3][70] = '|';
	X[1][75] = 194;
	X[2][75] = '|';
	X[3][75] = '|';
	L = 205;
	for (int c = 0; c < 80; c++)
	{
		X[20][c] = L;
	}
	X[20][0] = 204;
	X[20][79] = 185;
	X[21][1] = 219;
	X[22][1] = '|';
	X[21][5] = 219;
	X[22][5] = '|';
	X[21][10] = 219;
	X[22][10] = '|';
	X[21][15] = 219;
	X[22][15] = '|';
	X[21][20] = 219;
	X[22][20] = '|';
	X[21][25] = 219;
	X[22][25] = '|';
	X[21][30] = 219;
	X[22][30] = '|';
	X[21][35] = 219;
	X[22][35] = '|';
	X[21][40] = 219;
	X[22][40] = '|';
	X[21][45] = 219;
	X[22][45] = '|';
	X[21][50] = 219;
	X[22][50] = '|';
	X[21][55] = 219;
	X[22][55] = '|';
	X[21][60] = 219;
	X[22][60] = '|';
	X[21][65] = 219;
	X[22][65] = '|';
	X[21][70] = 219;
	X[22][70] = '|';
	X[21][75] = 219;
	X[22][75] = '|';
}
void DispXToScreen(unsigned char X[][80])
{
	system("cls");
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			cout << X[r][c];
		}
	}
	cout.flush();
	Sleep(100);
}
void SetHero(unsigned char X[][80], int rHero, int cHero)
{
	X[rHero][cHero] = 1;
	X[rHero + 1][cHero] = '|';
	X[rHero + 1][cHero - 1] = '/';
	X[rHero + 1][cHero + 1] = '\\';
	X[rHero + 2][cHero - 1] = '/';
	X[rHero + 2][cHero + 1] = '\\';
	X[rHero + 1][cHero + 2] = '|';
	X[rHero][cHero + 2] = 218;

}
void MoveHero(int& rHero, int& cHero, char res)
{
	if (res == 'w')
	{
		rHero--;
	}
	if (res == 's')
	{
		rHero++;
	}
	if (res == 'a')
	{
		cHero--;
	}
	if (res == 'd')
	{
		cHero++;
	}
}
void SetEnmy(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 2] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy2(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 2] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy2(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy3(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 2] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy3(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy4(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 2] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy4(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy5(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 196;
	X[rEnmy][cEnmy + 4] = 196;
	X[rEnmy][cEnmy + 5] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 196;
	X[rEnmy + 1][cEnmy + 4] = 196;
	X[rEnmy + 1][cEnmy + 5] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 4] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy5(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy6(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 196;
	X[rEnmy][cEnmy + 4] = 196;
	X[rEnmy][cEnmy + 5] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 196;
	X[rEnmy + 1][cEnmy + 4] = 196;
	X[rEnmy + 1][cEnmy + 5] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 4] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy6(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy7(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 196;
	X[rEnmy][cEnmy + 4] = 196;
	X[rEnmy][cEnmy + 5] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 196;
	X[rEnmy + 1][cEnmy + 4] = 196;
	X[rEnmy + 1][cEnmy + 5] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 4] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy7(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy8(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 196;
	X[rEnmy][cEnmy + 4] = 196;
	X[rEnmy][cEnmy + 5] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 196;
	X[rEnmy + 1][cEnmy + 4] = 196;
	X[rEnmy + 1][cEnmy + 5] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 192;
	X[rEnmy][cEnmy - 2] = 218;
	X[rEnmy + 1][cEnmy + 4] = 'o';
	X[rEnmy + 1][cEnmy - 1] = 'o';
}
void MoveEnmy8(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy9(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 196;
	X[rEnmy][cEnmy + 4] = 196;
	X[rEnmy][cEnmy + 5] = 196;
	X[rEnmy][cEnmy + 6] = 196;
	X[rEnmy][cEnmy + 7] = 196;
	X[rEnmy][cEnmy + 8] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy][cEnmy - 2] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 196;
	X[rEnmy + 1][cEnmy + 4] = 196;
	X[rEnmy + 1][cEnmy + 5] = 196;
	X[rEnmy + 1][cEnmy + 6] = 196;
	X[rEnmy + 1][cEnmy + 7] = 196;
	X[rEnmy + 1][cEnmy + 8] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 196;
	X[rEnmy + 1][cEnmy - 3] = 192;
	X[rEnmy][cEnmy - 3] = 218;
	X[rEnmy + 1][cEnmy + 7] = 'o';
	X[rEnmy + 1][cEnmy - 2] = 'o';
	X[rEnmy + 1][cEnmy + 3] = 'o';
}
void MoveEnmy9(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy10(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 196;
	X[rEnmy][cEnmy + 4] = 196;
	X[rEnmy][cEnmy + 5] = 196;
	X[rEnmy][cEnmy + 6] = 196;
	X[rEnmy][cEnmy + 7] = 196;
	X[rEnmy][cEnmy + 8] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy][cEnmy - 2] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 196;
	X[rEnmy + 1][cEnmy + 4] = 196;
	X[rEnmy + 1][cEnmy + 5] = 196;
	X[rEnmy + 1][cEnmy + 6] = 196;
	X[rEnmy + 1][cEnmy + 7] = 196;
	X[rEnmy + 1][cEnmy + 8] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 196;
	X[rEnmy + 1][cEnmy - 3] = 192;
	X[rEnmy][cEnmy - 3] = 218;
	X[rEnmy + 1][cEnmy + 7] = 'o';
	X[rEnmy + 1][cEnmy - 2] = 'o';
	X[rEnmy + 1][cEnmy + 3] = 'o';
}
void MoveEnmy10(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void SetEnmy11(unsigned char X[][80], int rEnmy, int cEnmy)
{
	X[rEnmy][cEnmy] = 196;
	X[rEnmy][cEnmy + 1] = 196;
	X[rEnmy][cEnmy + 2] = 196;
	X[rEnmy][cEnmy + 3] = 196;
	X[rEnmy][cEnmy + 4] = 196;
	X[rEnmy][cEnmy + 5] = 196;
	X[rEnmy][cEnmy + 6] = 196;
	X[rEnmy][cEnmy + 7] = 196;
	X[rEnmy][cEnmy + 8] = 191;
	X[rEnmy][cEnmy - 1] = 196;
	X[rEnmy][cEnmy - 2] = 196;
	X[rEnmy + 1][cEnmy] = 196;
	X[rEnmy + 1][cEnmy + 1] = 196;
	X[rEnmy + 1][cEnmy + 2] = 196;
	X[rEnmy + 1][cEnmy + 3] = 196;
	X[rEnmy + 1][cEnmy + 4] = 196;
	X[rEnmy + 1][cEnmy + 5] = 196;
	X[rEnmy + 1][cEnmy + 6] = 196;
	X[rEnmy + 1][cEnmy + 7] = 196;
	X[rEnmy + 1][cEnmy + 8] = 217;
	X[rEnmy + 1][cEnmy - 1] = 196;
	X[rEnmy + 1][cEnmy - 2] = 196;
	X[rEnmy + 1][cEnmy - 3] = 192;
	X[rEnmy][cEnmy - 3] = 218;
	X[rEnmy + 1][cEnmy + 7] = 'o';
	X[rEnmy + 1][cEnmy - 2] = 'o';
	X[rEnmy + 1][cEnmy + 3] = 'o';
}
void MoveEnmy11(int& rEnmy, int& cEnmy)
{
	cEnmy++;
}
void main()
{
	unsigned char X[24][80];
	int rHero = 1, cHero = 40;
	int rEnmy = 5, cEnmy = 0;
	int rEnmy2 = 5, cEnmy2 = 20;
	int rEnmy3 = 5, cEnmy3 = 40;
	int rEnmy4 = 5, cEnmy4 = 60;
	int rEnmy5 = 10, cEnmy5 = 10;
	int rEnmy6 = 10, cEnmy6 = 30;
	int rEnmy7 = 10, cEnmy7 = 50;
	int rEnmy8 = 10, cEnmy8 = 70;
	int rEnmy9 = 15, cEnmy9 = 0;
	int rEnmy10 = 15, cEnmy10 = 30;
	int rEnmy11 = 15, cEnmy11 = 60;
	for (;;)
	{
		for (; !_kbhit();)
		{
			Fill(X);
			SetHero(X, rHero, cHero);
			SetEnmy(X, rEnmy, cEnmy);
			MoveEnmy(rEnmy, cEnmy);
			SetEnmy2(X, rEnmy2, cEnmy2);
			MoveEnmy2(rEnmy2, cEnmy2);
			SetEnmy3(X, rEnmy3, cEnmy3);
			MoveEnmy3(rEnmy3, cEnmy3);
			SetEnmy4(X, rEnmy4, cEnmy4);
			MoveEnmy4(rEnmy4, cEnmy4);
			SetEnmy5(X, rEnmy5, cEnmy5);
			MoveEnmy5(rEnmy5, cEnmy5);
			SetEnmy6(X, rEnmy6, cEnmy6);
			MoveEnmy6(rEnmy6, cEnmy6);
			SetEnmy7(X, rEnmy7, cEnmy7);
			MoveEnmy7(rEnmy7, cEnmy7);
			SetEnmy8(X, rEnmy8, cEnmy8);
			MoveEnmy8(rEnmy8, cEnmy8);
			SetEnmy9(X, rEnmy9, cEnmy9);
			MoveEnmy9(rEnmy9, cEnmy9);
			SetEnmy10(X, rEnmy10, cEnmy10);
			MoveEnmy10(rEnmy10, cEnmy10);
			SetEnmy11(X, rEnmy11, cEnmy11);
			MoveEnmy11(rEnmy11, cEnmy11);
			DispXToScreen(X);
		}
		char res = _getch();
		MoveHero(rHero, cHero, res);
	}
}