#include"1~10.h"

int main() {

	//–â‚R
	Caluculator caluculator;
	printf("–â3:add = %d\n", caluculator.Add(2, 2));
	printf("–â3:sub = %d\n", caluculator.Sub(2, 2));
	printf("–â3:mul = %d\n", caluculator.Mul(4, 2));
	printf("–â3:div = %d\n\n", caluculator.Div(2 ,2));

	//–â‚S
	printf("–â4:add = %f\n\n", caluculator.Add(2.1f, 2.1f));

	//–â‚T
	Drawer drawer;
	drawer.PrintParameter();

}