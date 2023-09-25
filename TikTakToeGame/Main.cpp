#include <iostream>
#include "TikTakToe.h"

using std::cout;

int main() {
	TikTakToe* game = new TikTakToe();
	game->print();

	unsigned int x = 0;
	unsigned int y = 0;
	char c = ',';

	while (true) {
		cout << "enter (x,y):";
		std::cin >> x >> c >> y;
		std::cout << "x: " << x << " y:" << y << "\n";

		if (x > 2 || y > 2) continue;

		game->next(x, y);
		game->print();
		if (game->hasRow()) {
			cout << "winner: " << game->getActive();
			return 0;
		}

		//bot move
	}

	//Matrix m0(10, 10); //stack obj
	//Matrix* m1 = new Matrix(10, 10); //heap obj
	//m0.func_1(1, 2) = X;
	//m1->func_1(1,2) = O;

	//if (m0.func_1(1, 2) == 0) {
	//	cout << "m0:" << m0.func_1(1, 2) << "\n";
	//	cout << "m1:" << m1->func_1(1, 2) << "\n";
	//}
	//if (m0.func_1(1, 2) == X) {
	//	cout << "m0:" << m0.func_1(1, 2) << "\n";
	//	cout << "m1:" << m1->func_1(1, 2) << "\n";
	//}

	
	return 0;
}