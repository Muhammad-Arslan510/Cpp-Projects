#include<iostream>
using namespace std;
int main()
{
	cout << "\n               GAME  : TIK   TAK  TOE \n" << endl;
	char border[9] = { '1','2','3','4','5','6','7','8','9' };
	char choice;
	char player = 'X';
	bool gameover = false;

	cout << "     Player[X]\n" << endl;
	cout << "     Player[0]\n" << endl;

	while (!gameover)
	{
		cout << "Player " << player << "'s turn \n" << endl;

		cout << "\t\t       ""|""       ""|""       " << endl;
		cout << "\t\t   " << border[0] << "   ""|   " << border[1] << "   ""|   " << border[2] << "   " << endl;
		cout << "\t\t       ""|""       ""|""       " << endl;
		cout << "\t\t-------""-""-------""-""-------" << endl;
		cout << "\t\t       ""|""       ""|""       " << endl;
		cout << "\t\t   " << border[3] << "   ""|   " << border[4] << "   ""|   " << border[5] << "   " << endl;
		cout << "\t\t       ""|""       ""|""       " << endl;
		cout << "\t\t-------""-""-------""-""-------" << endl;
		cout << "\t\t       ""|""       ""|""       " << endl;
		cout << "\t\t   " << border[6] << "   ""|   " << border[7] << "   ""|   " << border[8] << "   " << endl;
		cout << "\t\t       ""|""       ""|""       " << endl;

		cout << "Enter a number (1-9) to place " << player << ": ";
		cin >> choice;

		if (choice < '1' || choice > '9' || border[choice - 1] == 'X' || border[choice - 1] == 'O')

		{
			cout << "Invalid Move. Try Again \n";
			continue;
		}
		
		
		border[choice - '1'] = player;

		if
			((border[0] == border[1] && border[1] == border[2]) ||
				(border[3] == border[4] && border[4] == border[5]) ||
				(border[6] == border[7] && border[7] == border[8]) ||
				(border[0] == border[3] && border[3] == border[6]) ||
				(border[1] == border[4] && border[4] == border[7]) ||
				(border[2] == border[5] && border[5] == border[8]) ||
				(border[0] == border[4] && border[4] == border[8]) ||
				(border[2] == border[4] && border[4] == border[6]))
		{
			cout << "Player " << player << " Wins ";
			gameover = true;
		}
		bool draw = true;
		for (int i = 0; i < 9; i++)
		{
			if (border[i] != 'X' && border[i] != 'O')
			{
				draw = false;
				break;

			}
		}
		if (draw)
		{
			cout << "It is a draw ! \n";
			gameover = true;
		}
		if (player == 'X') {
			player = 'O';
		}
		else {
			player = 'X';
		}


	}
	cout << "\n\t Final  Board \n";

	cout << "\t\t       ""|""       ""|""       " << endl;
	cout << "\t\t   " << border[0] << "   ""|   " << border[1] << "   ""|   " << border[2] << "   " << endl;
	cout << "\t\t       ""|""       ""|""       " << endl;
	cout << "\t\t-------""-""-------""-""-------" << endl;
	cout << "\t\t       ""|""       ""|""       " << endl;
	cout << "\t\t   " << border[3] << "   ""|   " << border[4] << "   ""|   " << border[5] << "   " << endl;
	cout << "\t\t       ""|""       ""|""       " << endl;
	cout << "\t\t-------""-""-------""-""-------" << endl;
	cout << "\t\t       ""|""       ""|""       " << endl;
	cout << "\t\t   " << border[6] << "   ""|   " << border[7] << "   ""|   " << border[8] << "   " << endl;
	cout << "\t\t       ""|""       ""|""       " << endl;

	system("pause");
	return 0;

}