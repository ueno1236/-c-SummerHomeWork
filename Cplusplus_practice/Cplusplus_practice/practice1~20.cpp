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
	printf("��1:�����o�ϐ��Ƃ�\nclass�Ɋi�[���ꂽ�ϐ�\n\n");
	
	printf("��2:�����o�֐��Ƃ�\nclass�Ɋi�[���ꂽ�֐�\n\n");

	printf("��3:class��`�̍Ō�́F������Ȃ���\n\n");

	printf("��4:�����֐����ł������̈Ⴂ�ɂ�菈����ύX�ł���\n\n");

	printf("��5:�����͇B�A�D\n\n");

	printf("��6:�߂�l�̌^�����Ŏ��ʂ����֐��̓I�[�o�[���[�h�ł��Ȃ���\n\n");

	printf("��7:���̐����̍ۂɍŏ��Ɏ����I�ɌĂ΂��̂ŏ������⓮�I�������̊m�ۂɕ֗�\n\n");

	printf("��8:���̐����̍ۂɍŌ�Ɏ����I�ɌĂ΂��̂œ��I�������̊m�ۂɕ֗�\n\n");
	
	printf("��9:class���Ɠ������O�̓R���X�g���N�^�łȂ��Ƃ����Ȃ�\n\n");

	printf("��10:���������݂��Ȃ��R���X�g���N�^\n\n");

	Character ch(1, 10);
	printf("��11:HP = %d,MP = %d\n\n", ch.m_Hp, ch.m_Mp);

	printf("��12:�D\n\n");

	printf("��13:�N���X��`���ꂽ����\n\n");

	printf("��14:���ׂĂ̎��Ԃ��I�u�W�F�N�g�Ƃ������̒��ŃN���X��������Ă�����̂��C���X�^���X�Ƃ���\n\n");

	printf("��15:�N���X��`���ꂽ���m�����̉����鎖\n\n");

	printf("��16:���I�ł̓v���O�������ŃI�u�W�F�N�g�̍쐬�Ɣj�����Ǘ����邱�Ƃ��ł���ÓI�ł͎���\n\n");

	printf("��17:�����ɍ��킹�ĕK�v�Ȃ������������m�ۂł���B�f�����b�g�̓������̊J����Y���ƃ������j����N�����B\n\n");

	printf("��18:deleat *ch��Y��Ă��邽��\n\n");

	printf("��19:�N���X�O�A�����ł��g�p��\n\n");

	printf("��20:�N���X���̂ݎg�p��\n\n");

}