#ifndef PRACTICE2
#define PRACTICE2

#include<stdio.h>

void two();

//–â22
class Character
{
public:
	Character();

	void PrintParameter();

private:

	int m_HP;
	int m_MP;
	int m_Attack;

};

//–â33
class CharaBase
{
public:
	void Init();
	void Control();
	void Draw();


private:
	
	float m_PosX;
	float m_PosY;
	int m_LayerId;
	float m_Scals;
	float m_Angles;
	int m_Money;
	int m_Exp;
	int m_HP;
	int m_MP;
	int m_Deff;

};

//–â34
class Player:public CharaBase
{
public:
	void LevelUp();
private:
	int Level;
};

class Enemy :public CharaBase
{
public:
	void AiRun();
private:
	int RaceSubId;
};

class KADEN
{
public:
	void PrintShopname();
private:

};

class YODOBASHI:public KADEN
{
public:
	void PrintShopname();
private:

};

#endif // !PRACTICE2

