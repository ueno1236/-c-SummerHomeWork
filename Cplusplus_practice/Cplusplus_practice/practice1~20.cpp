#include"1~20.h"

class Character
{
public:
	Character(int a, int b)
	{
		m_Hp = a;
		m_Mp = b;
	}

	int m_Hp;
	int m_Mp;
};


void one() {
	printf("問1:メンバ変数とは\nclassに格納された変数\n\n");
	
	printf("問2:メンバ関数とは\nclassに格納された関数\n\n");

	printf("問3:class定義の最後の：が足りない為\n\n");

	printf("問4:同じ関数名でも引数の違いにより処理を変更できる\n\n");

	printf("問5:原因は③、⑤\n\n");

	printf("問6:戻り値の型だけで識別される関数はオーバーロードできない為\n\n");

	printf("問7:実体生成の際に最初に自動的に呼ばれるので初期化や動的メモリの確保に便利\n\n");

	printf("問8:実体生成の際に最後に自動的に呼ばれるので動的メモリの確保に便利\n\n");
	
	printf("問9:class名と同じ名前はコンストラクタでないといけない\n\n");

	printf("問10:引数が存在しないコンストラクタ\n\n");

	Character ch(1, 10);
	printf("問11:HP = %d,MP = %d\n\n", ch.m_Hp, ch.m_Mp);

	printf("問12:⑤\n\n");

	printf("問13:クラス定義された実体\n\n");

	printf("問14:すべての実態をオブジェクトといいその中でクラス分けされているものをインスタンスという\n\n");

	printf("問15:クラス定義されたモノを実体化する事\n\n");

	printf("問16:動的ではプログラム側でオブジェクトの作成と破棄を管理することができる静的では自動\n\n");

	printf("問17:条件に合わせて必要なだけメモリを確保できる。デメリットはメモリの開放を忘れるとメモリ破壊を起こす。\n\n");

	printf("問18:deleat *chを忘れているため\n\n");

	printf("問19:クラス外、内部でも使用可\n\n");

	printf("問20:クラス内のみ使用可\n\n");

}