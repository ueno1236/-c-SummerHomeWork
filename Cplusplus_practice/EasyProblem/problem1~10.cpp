#include"1~10.h" 

//��R
int Caluculator::Add(int a, int b)
{
	return a + b;
}

int Caluculator::Sub(int c, int d)
{
	return c - d;
}

int Caluculator::Mul(int e, int f)
{
	return e * f;
}

float Caluculator::Div(float g, float h)
{
	return g / h;
}

//��S
float Caluculator::Add(float j, float k)
{
	return j + k;
}


//��T
Drawer::Drawer()
{
	m_posX = 0.0f;

	m_posY = 0.0f;

	m_Angle = 0.0f;

	m_Scale = 0.0f;
}

void Drawer::PrintParameter() 
{
	printf("��5:%f\n",m_posX);

	printf("��5:%f\n",m_posY);

	printf("��5:%f\n",m_Angle);

	printf("��5:%f\n\n",m_Scale);
}
/*
//��U
Character::Character()
{
	m_Name[32] = "������";
	m_Hp = 0;
	m_Mp = 0;
	m_At = 0;
	m_Deff = 0;
}

*/
