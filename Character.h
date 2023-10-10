#pragma once

class Character {
private:
	std::string name;
	int health;
	int damage;
	int level;
	int experience;

public:
	Character() {
		this->health = 100;
		this->damage = 5;
		this->level = 1;
		this->experience = 0;
	}

	Character(int health, int damage, int level, int experience) {
		this->health = health;
		this->damage = damage;
		this->level = level;
		this->experience = experience;
	}

	int getHealth() {
		return this->health;
	}

	void setHealth(int newHealth) {
		this->health = newHealth;
	}

	int takeDamage(int damage) {
		return this->health -= damage;
	}
};
