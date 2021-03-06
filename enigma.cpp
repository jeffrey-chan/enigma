#include "enigma.h"
#include <iostream>

using namespace std;

void Enigma::ResetPlugBoard()
{
	KeyBoardUpper[0] = 'Q';
	KeyBoardUpper[1] = 'W';
	KeyBoardUpper[2] = 'E';
	KeyBoardUpper[3] = 'R';
	KeyBoardUpper[4] = 'T';
	KeyBoardUpper[5] = 'Y';
	KeyBoardUpper[6] = 'U';
	KeyBoardUpper[7] = 'I';
	KeyBoardUpper[8] = 'O';
	KeyBoardUpper[9] = 'P';
	KeyBoardUpper[10] = 'A';
	KeyBoardUpper[11] = 'S';
	KeyBoardUpper[12] = 'D';
	KeyBoardUpper[13] = 'F';
	KeyBoardUpper[14] = 'G';
	KeyBoardUpper[15] = 'H';
	KeyBoardUpper[16] = 'J';
	KeyBoardUpper[17] = 'K';
	KeyBoardUpper[18] = 'L';
	KeyBoardUpper[19] = 'Z';
	KeyBoardUpper[20] = 'X';
	KeyBoardUpper[21] = 'C';
	KeyBoardUpper[22] = 'V';
	KeyBoardUpper[23] = 'B';
	KeyBoardUpper[24] = 'N';
	KeyBoardUpper[25] = 'M';

	KeyBoardLower[0] = 'q';
	KeyBoardLower[1] = 'w';
	KeyBoardLower[2] = 'e';
	KeyBoardLower[3] = 'r';
	KeyBoardLower[4] = 't';
	KeyBoardLower[5] = 'y';
	KeyBoardLower[6] = 'u';
	KeyBoardLower[7] = 'i';
	KeyBoardLower[8] = 'o';
	KeyBoardLower[9] = 'p';
	KeyBoardLower[10] = 'a';
	KeyBoardLower[11] = 's';
	KeyBoardLower[12] = 'd';
	KeyBoardLower[13] = 'f';
	KeyBoardLower[14] = 'g';
	KeyBoardLower[15] = 'h';
	KeyBoardLower[16] = 'j';
	KeyBoardLower[17] = 'k';
	KeyBoardLower[18] = 'l';
	KeyBoardLower[19] = 'z';
	KeyBoardLower[20] = 'x';
	KeyBoardLower[21] = 'c';
	KeyBoardLower[22] = 'v';
	KeyBoardLower[23] = 'b';
	KeyBoardLower[24] = 'n';
	KeyBoardLower[25] = 'm';	

	return;
}

Enigma::Enigma()
{

	// Set RotorI values
	RotorI[0] = 4;
	RotorI[1] = 10;
	RotorI[2] = 12;
	RotorI[3] = 5;
	RotorI[4] = 11;
	RotorI[5] = 6;
	RotorI[6] = 3;
	RotorI[7] = 16;
	RotorI[8] = 21;
	RotorI[9] = 25;
	RotorI[10] = 13;
	RotorI[11] = 19;
	RotorI[12] = 14;
	RotorI[13] = 22;
	RotorI[14] = 24;
	RotorI[15] = 7;
	RotorI[16] = 23;
	RotorI[17] = 20;
	RotorI[18] = 18;
	RotorI[19] = 15;
	RotorI[20] = 0;
	RotorI[21] = 8;
	RotorI[22] = 1;
	RotorI[23] = 17;
	RotorI[24] = 2;
	RotorI[25] = 9;

	// Set RotorII values
	RotorII[0] = 0;
	RotorII[1] = 9;
	RotorII[2] = 3;
	RotorII[3] = 10;
	RotorII[4] = 18;
	RotorII[5] = 8;
	RotorII[6] = 17;
	RotorII[7] = 20;
	RotorII[8] = 23;
	RotorII[9] = 1;
	RotorII[10] = 11;
	RotorII[11] = 7;
	RotorII[12] = 22;
	RotorII[13] = 19;
	RotorII[14] = 12;
	RotorII[15] = 2;
	RotorII[16] = 16;
	RotorII[17] = 6;
	RotorII[18] = 25;
	RotorII[19] = 13;
	RotorII[20] = 15;
	RotorII[21] = 24;
	RotorII[22] = 5;
	RotorII[23] = 21;
	RotorII[24] = 14;
	RotorII[25] = 4;

	// Set RotorIII values
	RotorIII[0] = 1;
	RotorIII[1] = 3;
	RotorIII[2] = 5;
	RotorIII[3] = 7;
	RotorIII[4] = 9;
	RotorIII[5] = 11;
	RotorIII[6] = 2;
	RotorIII[7] = 15;
	RotorIII[8] = 17;
	RotorIII[9] = 19;
	RotorIII[10] = 23;
	RotorIII[11] = 21;
	RotorIII[12] = 25;
	RotorIII[13] = 13;
	RotorIII[14] = 24;
	RotorIII[15] = 4;
	RotorIII[16] = 8;
	RotorIII[17] = 22;
	RotorIII[18] = 6;
	RotorIII[19] = 0;
	RotorIII[20] = 10;
	RotorIII[21] = 12;
	RotorIII[22] = 20;
	RotorIII[23] = 18;
	RotorIII[24] = 16;
	RotorIII[25] = 14;

	// Set Reflector Paths 
	Reflector[0] = 24;
	Reflector[1] = 17;
	Reflector[2] = 20;
	Reflector[3] = 7;
	Reflector[4] = 16;
	Reflector[5] = 18;
	Reflector[6] = 11;
	Reflector[7] = 3;
	Reflector[8] = 15;
	Reflector[9] = 23;
	Reflector[10] = 13;
	Reflector[11] = 6;
	Reflector[12] = 14;
	Reflector[13] = 10;
	Reflector[14] = 12;
	Reflector[15] = 8;
	Reflector[16] = 4;
	Reflector[17] = 1;
	Reflector[18] = 5;
	Reflector[19] = 25;
	Reflector[20] = 2;
	Reflector[21] = 22;
	Reflector[22] = 21;
	Reflector[23] = 9;
	Reflector[24] = 0;
	Reflector[25] = 19;

	ResetPlugBoard();

	
	
	
}

// Convert Letter to Number
int Enigma::Keyboard_Input (char c)
{
	for( int i = 0; i < 26; i++)
	{

		if( c == KeyBoardUpper[i] || c == KeyBoardLower[i])
		{
			return i;
		}
	}


	return 26;

}

//convert number to letter
char Enigma::Keyboard_Output (int n)
{
	char c = ' ';
	if(n == 26)
	{
		return c;
	}

	return KeyBoardUpper[n];
}

//Return value in input r1
int Enigma::Encryption_RotorI (int r1)
{
	if(r1 == 26)
	{
		return 26;
	}

	return RotorI[r1];
}

//Return value in input r2
int Enigma::Encryption_RotorII (int r2)
{
	if(r2 == 26)
	{
		return 26;
	}

	return RotorII[r2];
}

//Return value in input r3
int Enigma::Encryption_RotorIII (int r3)
{
	if(r3 == 26)
	{
		return 26;
	}

	return RotorIII[r3];
}

//Return value in input re
int Enigma::ReflectionPath (int re)
{
	if(re == 26)
	{
		return 26;
	}

	return Reflector[re];
}


//return the index who has value of r1
int Enigma::Reflect_Encryption_RotorI (int r1)
{

	if(r1 == 26)
	{
		return 26;
	}

	for(int i = 0; i < 26; i++)
	{
		if(RotorI[i] == r1)
		{
			return i;
		}
	}


}

//return the index who has value of r2
int Enigma::Reflect_Encryption_RotorII (int r2)
{

	if(r2 == 26)
	{
		return 26;
	}

	for(int i = 0; i < 26; i++)
	{
		if(RotorII[i] == r2)
		{
			return i;
		}
	}


}

//return the index who has value of r3
int Enigma::Reflect_Encryption_RotorIII (int r3)
{

	if(r3 == 26)
	{
		return 26;
	}

	for(int i = 0; i < 26; i++)
	{
		if(RotorIII[i] == r3)
		{
			return i;
		}
	}


}

void Enigma::RotorSwap()
{
	if(RotorI[0] == 4)
	{
		R2Swap();
		R1Swap();
	}else if(RotorII[0] == 14)
	{
		R3Swap();
		R2Swap();
		R1Swap();
	}else{

	R1Swap();

	}

	return;
}

void Enigma::R1Swap()
{
	int temp;
	temp = RotorI[25];

	for(int i = 25; i != 0; i--)
	{
		RotorI[i] = RotorI[i-1];
		
	}

	RotorI[0] = temp;

	return;
}

void Enigma::R2Swap()
{
	int temp;
	temp = RotorII[25];

	for(int i = 25; i != 0; i--)
	{
		RotorII[i] = RotorII[i-1];
		
	}

	RotorII[0] = temp;

	return;

}

void Enigma::R3Swap()
{
	int temp;
	temp = RotorIII[25];

	for(int i = 25; i != 0; i--)
	{
		RotorIII[i] = RotorIII[i-1];
		
	}

	RotorIII[0] = temp;

	return;

}


char Enigma::EncryptedChar (char letter)
{
	int num;		//letter converted in letter number
	int E_num;		//Encrypted letter number
	char E_char;	//Encrypted char
	num = Keyboard_Input(letter);


	E_num = Encryption_RotorIII (Encryption_RotorII(Encryption_RotorI(num)));	
	E_num = ReflectionPath(E_num);
	E_num = Reflect_Encryption_RotorI(Reflect_Encryption_RotorII(Reflect_Encryption_RotorIII(E_num)));

	E_char = Keyboard_Output(E_num);

	if( E_char != ' ')
	{
		RotorSwap();
		
	}

	return E_char;

}


void Enigma::SetRotorI (char c)
{
	int num = Keyboard_Input(c);

	if(num == 26)
	{
		return;
	}

	while(RotorI[0] != num)
	{
		R1Swap();
	}


	return;
}

void Enigma::SetRotorII (char c)
{
	int num = Keyboard_Input(c);

	if(num == 26)
	{
		return;
	}

	while(RotorII[0] != num)
	{
		R2Swap();
	}


	return;
}

void Enigma::SetRotorIII (char c)
{
	int num = Keyboard_Input(c);

	if(num == 26)
	{
		return;
	}

	while(RotorIII[0] != num)
	{
		R3Swap();
	}


	return;
}


char Enigma::GetRotorI()
{
	char E_char = Keyboard_Output(RotorI[0]);

	return E_char;
}
		
char Enigma::GetRotorII()
{
	char E_char = Keyboard_Output(RotorII[0]);

	return E_char;
}						// Get Rotor2
		
char Enigma::GetRotorIII()
{
	char E_char = Keyboard_Output(RotorIII[0]);

	return E_char;
}

void Enigma::PlugBoard(char first, char second)
{
	int num_1 = Keyboard_Input(first);
	int num_2 = Keyboard_Input(second);
	int tempUpper = KeyBoardUpper[num_1];
	int tempLower = KeyBoardLower[num_1];
	KeyBoardUpper[num_1] = KeyBoardUpper[num_2];
	KeyBoardLower[num_1] = KeyBoardLower[num_2];
	KeyBoardUpper[num_2] = tempUpper;
	KeyBoardLower[num_2] = tempLower;

	return;

}
