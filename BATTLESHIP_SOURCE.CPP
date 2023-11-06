#include <iostream>

#include <cstring>

#include "Utils.h"




enum
{
	AIRCRAFT_CARRIER_SIZE = 5,
	BATTLESHIP_SIZE = 4,
	CRUISER_SIZE = 3,
	DESTROYER_SIZE = 3,
	SUBMARINE_SIZE = 2,


	BOARD_SIZE = 10,
	NUM_SHIPS = 5,
	PLAYER_NAME_SIZE = 8,
	MAX_SHIP_SIZE = 8,
	MAX_SHIP_SIZE = AIRCRAFT_CARRIER_SIZE
};



enum ShipType
{
	ST_None = 0,
	ST_AIRCRAFT_CARRIER,
	ST_BATTLESHIP,
	ST_CRUISER,
	ST_DESTROYER,
	ST_SUBMARINE

};

enum ShipOrientationType
{
	SO_HORIZONTAL = 0,
	SO_VERTICAL,
};


struct ShipPositionType
{
	int row;
	int col;
};


struct Ship
{
	ShipType shipType;
	int shipSize;
	ShipOrientationType orientation;
	ShipPositionType position;
};

enum GuessType
{
	GT_NONE = 0,
	GT_MISSED,
	GT_HIT
};

struct ShipPartType
{
	ShipType shipType;
	bool isHit;
};

struct Player
{
	char playerName[PLAYER_NAME_SIZE];
	Ships ships[NUM_SHIPS];
	GuessType guessBoard[BOARD_SIZE][BOARD_SIZE];
	ShipPartType shipBoard[BOARD_SIZE][BOARD_SIZE];
};






void InitializePlayer(Player & player, const char * playerName);

void InitializeShip(Ship& ship, int shipSize, ShipType shipType);


int main()
{
	Player player1;
	Player player2;

	return 0;
}

void InitializePlayer(Player & player, const char * playerName)
{
	if(playerName != nullptr && strlen(playerName) > 0)
	{
		strcpy(player.playerName, playerName);
	}

	player.ships[0].shipType = ST_AIRCRAFT_CARRIER;
	player.ships[0].shipSize = AIRCRAFT_CARRIER_SIZE;
	player.ships[0].position.row = 0;
	player.ships[0].position.col = 0;
	player.ships[0].orientation. SO_HORIZONTAL;
}


void InitializeShip(Ship& ship, int shipSize, ShipType shipType)
{
	ship.shipType = shipType;
	ship.shipSize = shipSize;
	ship.position.row = 0;
	ship.position.col = 0;
	ship.orientation = SO_HORIZONTAL;
}