#include "Entity.h"
#include "Player.h"

int main()
{
	//Seed Set
	srand(time(NULL));

	Entity entity = Entity("Green Ooze", 50, 1, 10);
	Player player = Player("Player", 50, 1, 10);

	while (true)
	{
		//Entity "Round Start" Statuses
		entity.PrintEntityDetails();
		cout << "vs.\n";
		player.PrintEntityDetails();

		//Player Turn
		char option;
		cout << "\nChoose what you would like to do adventurer!\n" <<
			"A) Attack The Enemy!\n" <<
			"B) Block Some Damage From The Incoming Enemy Attack!\n" <<
			"Your Choice: ";
		cin >> option;

		//Clean up screen
		system("CLS");

		switch (option)
		{
		case 'A':
		case 'a':
			entity.DecreaseHeath(player.Attack());
			break;
		case 'B':
		case 'b':
			player.Block();
			break;
		default:
			cout << "Invalid Option!\n\n";

			//Continue will jump us back to loop start
			continue;
			break;
		}

		//Entity Attack
		player.DecreaseHeath(entity.Attack());
		cout << endl;

		//State Check
		if(!entity.AliveStatus())
		{
			cout << "YOU WIN!!!" << endl;
			return 0;
		} 
		else if (!player.AliveStatus())
		{
			cout << "YOU LOSE!!!" << endl;
			return 0;
		}

	}
}