//HILTRUNE by djflashpoint//

#include "iostream"
#include "stdlib.h"
#include "stdio.h"
#include "time.h"
#include "windows.h"


int hp = 35, mp = 50, enemyhp = 35, move;

void lose(void)
{
	std::cout << "You lose." << std::endl;
	hp = 35;
	mp = 50;
	enemyhp = 35;
	Sleep(5000);
	{
		int counter = 015;
		Sleep(1000);
		while (counter >= 1)
		{
			std::cout << "\rGame restarts in: " << counter;
			Sleep(1000);
			counter--;
			system("cls");
		}
	}
}

void win(void)
{
	std::cout << "You win." << std::endl;
	hp = 35;
	mp = 50;
	enemyhp = 35;
	Sleep(5000);
	{
		int counter = 015;
		Sleep(1000);
		while (counter >= 1)
		{
			std::cout << "\rGame restarts in: " << counter;
			Sleep(1000);
			counter--;
			system("cls");
		}
	}
}

void start(void)
{
	std::cout << "H ";
	Sleep(1000);
	std::cout << "I ";
	Sleep(1000);
	std::cout << "L ";
	Sleep(1000);
	std::cout << "T ";
	Sleep(1000);
	std::cout << "R ";
	Sleep(1000);
	std::cout << "U ";
	Sleep(1000);
	std::cout << "N ";
	Sleep(1000);
	std::cout << "E\n";
	Sleep(2000);
	std::cout << "YOU ARE A MIGHTY WARRIOR WHO HAS BEEN BLESSED WITH MAGICAL POWERS!\nYOU HAVE ATTUNED THEM TO WORK WITH FOUR GEM RUNES IN THE HILT OF YOUR SWORD,\nH I L T R U N E!\n";
	Sleep(3000);
	std::cout << "HILTRUNE HAS 4 GEMRUNES:\nRUBY (FIRE ENCHANTED ATTACK)\nSAPPHIRE (HEALTH SIPHON ATTACK)\nEMERALD (MAGIC POWER SIPHON)\nAND QUARTZ (PURE LIGHT ATTACK)!\n";
	Sleep(3000);
	std::cout << "YOU ALSO HAVE AN ETERNAL FLASK (RESTORE 10 HEALTH)\nAND A VOID FLASK (RESTORE 10 MAGIC POWER AT THE COST OF 5 HEALTH)!\n";
	Sleep(3000);
}

int main()
{
	std::cout << "H ";
	Sleep(1000);
	std::cout << "I ";
	Sleep(1000);
	std::cout << "L ";
	Sleep(1000);
	std::cout << "T ";
	Sleep(1000);
	std::cout << "R ";
	Sleep(1000);
	std::cout << "U ";
	Sleep(1000);
	std::cout << "N ";
	Sleep(1000);
	std::cout << "E\n";
	Sleep(2000);
	std::cout << "YOU ARE A MIGHTY WARRIOR WHO HAS BEEN BLESSED WITH MAGICAL POWERS!\nYOU HAVE ATTUNED THEM TO WORK WITH FOUR GEM RUNES IN THE HILT OF YOUR SWORD,\nH I L T R U N E!\n";
	Sleep(3000);
	std::cout << "HILTRUNE HAS 4 GEMRUNES:\nRUBY (FIRE ENCHANTED ATTACK)\nSAPPHIRE (HEALTH SIPHON ATTACK)\nEMERALD (MAGIC POWER SIPHON)\nAND QUARTZ (PURE LIGHT ATTACK)!\n";
	Sleep(3000);
	std::cout << "YOU ALSO HAVE AN ETERNAL FLASK (RESTORE 10 HEALTH)\nAND A VOID FLASK (RESTORE 10 MAGIC POWER AT THE COST OF 5 HEALTH)!\n";
	Sleep(3000);

label:
	std::cout << "Enemy Health: " << enemyhp << std::endl << "Your Health: " << hp << std::endl << "Magic Power: " << mp << std::endl;
	std::cout << "(0) Sword Thrust\n"
		"(1) Magic Firebolt\n"
		"(2) Summon Familiar\n"
		"(3) Drink from Eternal Flask\n"
		"(4) Drink from Void Flask\n"
		"(5) Ruby Hiltrune Attack\n"
		"(6) Sapphire Hiltrune Attack\n"
		"(7) Emerald Hiltrune Attack\n"
		"(8) Quartz Hiltrune Attack\n"
		"(9) Run\n";
	std::cin >> move;
	system("cls");
	std::cout << "You've chosen: " << move << std::endl;
	Sleep(3000);
	std::cout << "Status:" << std::endl;



	if (move == 0)
	{
		std::cout << "You sliced the enemy with your sword." << std::endl;
		enemyhp -= 1;
		Sleep(2000);
		std::cout << "The Enemy was wounded for 1 hp by Hiltrune's Blade!" << std::endl;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "The enemy cast a Magic Firebolt!" << std::endl;
		hp -= 2;
		Sleep(2000);
	}

	if (move == 1)
	{
		std::cout << "You cast a Magic Firebolt." << std::endl;
		enemyhp -= 2;
		mp -= 1;
		Sleep(2000);
		std::cout << "The Enemy was scorched for 2 hp by your Magic Firebolt!" << std::endl;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "The enemy used his sword!" << std::endl;
		hp -= 1;
		Sleep(2000);
	}

	if (move == 2)
	{
		std::cout << "You summoned a Familiar!" << std::endl;
		enemyhp -= 10;
		mp -= 15;
		hp -= 1;
		Sleep(2000);
		std::cout << "The Enemy was Massacred for 10 hp by your Familiar!" << std::endl;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "The enemy cast a Magic Firebolt!" << std::endl;
		hp -= 2;
		Sleep(2000);
	}

	if (move == 3)
	{
		std::cout << "You drank from the Eternal Flask!" << std::endl;
		hp += 10;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "You gained 10 Health Points!" << std::endl;
		Sleep(2000);
	}

	if (move == 4)
	{
		std::cout << "You drank from the Void Flask!" << std::endl;
		mp += 10;
		hp -= 5;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "You gained 10 Magic Power at the cost of 5 Health!" << std::endl;
		Sleep(2000);
	}

	if (move == 5)
	{
		std::cout << "Ruby Hiltrune, Sword Attack!" << std::endl;
		enemyhp -= 20;
		hp -= 5;
		mp -= 5;
		Sleep(2000);
		std::cout << "The Enemy was scorched for 20 hp by your Ruby Hiltrune Attack!" << std::endl;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "The enemy cast a Magic Firebolt!" << std::endl;
		hp -= 2;
		Sleep(2000);
	}

	if (move == 6)
	{
		std::cout << "Sapphire Hiltrune, Sword Attack!" << std::endl;
		hp += 15;
		enemyhp -= 15;
		Sleep(2000);
		std::cout << "You Siphoned 15 hp while dealing 15 hp damage by your Sapphire Hiltrune Attack!" << std::endl;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "The enemy used his sword!" << std::endl;
		hp -= 1;
		Sleep(2000);
	}

	if (move == 7)
	{
		std::cout << "Emerald Hiltrune, Sword Attack!" << std::endl;
		mp += 15;
		enemyhp -= 15;
		Sleep(2000);
		std::cout << "You Siphoned 15 Magic Points while dealing 15 hp damage by your Emerald Hiltrune Attack!" << std::endl;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "The enemy used his sword!" << std::endl;
		hp -= 1;
		Sleep(2000);
	}

	if (move == 8)
	{
		std::cout << "Quartz Hiltrune, Sword Attack!" << std::endl;
		hp -= 10;
		mp -= 10;
		enemyhp -= 15;
		Sleep(2000);
		std::cout << "You blinded the enemy while dealing 15 hp damage by your Quartz Hiltrune Attack!" << std::endl;
		Sleep(2000);
		std::cout << "The enemy ran blinded!" << std::endl;
		enemyhp -= 2;
		Sleep(2000);
		std::cout << "The enemy chases after you!" << std::endl;
		enemyhp -= 1;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
	}

	if (move == 9)
	{
		std::cout << "You Ran!" << std::endl;
		hp -= 1;
		Sleep(2000);
		if (enemyhp < 0)
		{
			win();
			Sleep(1000);
			start();
		}

		if (hp < 0)
		{
			lose();
			Sleep(1000);
			start();
		}
		std::cout << "The enemy chases after you!" << std::endl;
		enemyhp -= 1;
		Sleep(2000);
	}
	//else heart.break

	goto label;
	Sleep(1000);
}