#include"1~10.h"

int main() {

	//��R
	Caluculator caluculator;
	printf("��3:add = %d\n", caluculator.Add(2, 2));
	printf("��3:sub = %d\n", caluculator.Sub(2, 2));
	printf("��3:mul = %d\n", caluculator.Mul(4, 2));
	printf("��3:div = %d\n\n", caluculator.Div(2 ,2));

	//��S
	printf("��4:add = %f\n\n", caluculator.Add(2.1f, 2.1f));

	//��T
	Drawer drawer;
	drawer.PrintParameter();

}