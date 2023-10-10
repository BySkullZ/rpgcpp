#pragma once

class Game {
public:
	void StartGame() {
		DisplayCombatSelection();
	}

	int MenuSelect(int min, int max) {
		int Selection = 0;

		while (Selection > max || Selection < min) {
			std::cout << std::endl << "What do you want to do ? ";
			std::cin >> Selection;
		}

		return Selection;
	}

	void DisplayCombatSelection() {
		system("CLS");

		std::cout << "****************************************" << std::endl;
		std::cout << "*                                      *" << std::endl;
		std::cout << "*   1. ATTACK              2. SKILLS   *" << std::endl;
		std::cout << "*                                      *" << std::endl;
		std::cout << "*   3. ITEMS               4. ESCAPE   *" << std::endl;
		std::cout << "*                                      *" << std::endl;
		std::cout << "****************************************" << std::endl;

		int Choice = MenuSelect(1, 4);

		switch (Choice) {
			case 1:
				Attack();
			case 2:
				DisplaySkills();
			case 3:
				DisplayItems();
			case 4:
				Escape();
		}
	}

	void Attack() {}

	void DisplaySkills() {
		system("CLS");

		std::cout << "YOUR SKILLS:" << std::endl;
		std::cout << "1. TORNADO" << std::endl;
		std::cout << "2. WHIRLWIND" << std::endl;

		std::cout << std::endl << "3. BACK" << std::endl;

		int Choice = MenuSelect(1, 3);

		switch (Choice) {
			case 3:
				DisplayCombatSelection();
		}
	}

	void DisplayItems() {
		system("CLS");
		std::cout << "YOUR SKILLS:" << std::endl;
		std::cout << "1. TORNADO" << std::endl;
		std::cout << "2. WHIRLWIND" << std::endl;
	}

	void Escape() {}

};