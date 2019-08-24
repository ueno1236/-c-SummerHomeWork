#include"20~40.h"


void two() {

	printf("問21:class内のみだが継承先まで使える\n\n");

	printf("問22:headerに記載\n\n");

	printf("問23:privateにアクセスするためのメンバ関数\n\n");

	printf("問24:privateの変数を参照し変更したい値をreturnで返す。\n\n");

	printf("問25:geterで返さえれた値を変更するための関数\n\n");

	printf("問26:privateで行われていない為\n\n");

	printf("問27:別のオブジェクトから直接利用される必要のないものを隠す\n\n");

	printf("問28:既存のクラス情報を別のクラスに移す\n\n");

	printf("問29:基本クラス、親クラス、スーパークラス\n\n");

	printf("問30:派生クラス、子クラス、サブクラス\n\n");

	printf("問31:複数のクラスの情報を1つにまとめる\n\n");

	printf("問32:1つにまとめることによることによる作業の効率化\n\n");

	printf("問33:headerに記載\n\n");

	printf("問34:headerに記載\n\n");

	printf("問35:前から順番\n\n");

	printf("問36:後ろから順番\n\n");

	printf("問37:派生クラスの型の変数をを基底クラスポインタに移動させている（？）\n\n");

	printf("問38:\n\n");

	printf("問39:基底クラスの関数の情報を派生クラス内で上書きするための処理\n\n");

	printf("問40:");

}
//問40
void KADEN::PrintShopname() {
	printf("家電店\n");
}

void YODOBASHI::PrintShopname() {
	printf("ヨドバシ\n\n");
}