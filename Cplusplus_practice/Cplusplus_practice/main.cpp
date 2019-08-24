#include<stdio.h>
#include"1~20.h"
#include"20~40.h"
#include"40~60.h"

int main() {
	
	one();

	two();

	KADEN kaden;
	YODOBASHI yodobashi;

	kaden.PrintShopname();
	yodobashi.PrintShopname();

	three();

	return 0;
}
