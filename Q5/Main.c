//����1: �Լ������͸� �̿��Ͽ� 500, 480.5, "Monster"�� ����ϴ� ���α׷��� �ۼ��ϼ���.

//����2 : �Լ������͸� �̿��Ͽ� ������ HP�� ���� �� ���ҽ�Ű�� ���α׷��� �ۼ��ϼ���.

//����3 : ����ü�� �̿��Ͽ� ������ ���� ������ �Է��ϰ� ����ϴ� ���α׷��� �ۼ��ϼ���.

#include<stdio.h>

typedef struct monsterstate
{
	char groggy[20];
	char frenzy[20];
	char dead[20];

}MonsterState;


void Q1Function(int _hp, float _mp, char *_name)
{
	printf("HP:%d MP:%.1f Name:%s\n", _hp, _mp, _name);
}

void AddHP(int _hp, int _hpUp, int _hpDown)
{	
	int totalHp = 0;
	totalHp = _hp + _hpUp;
	printf("������! HP�� %d�ö� %d��(��) �Ǿ���!\n",_hp ,totalHp);

	totalHp = _hp - _hpUp;
	printf("������ ���ַ� HP�� %d�ٿ�Ǿ %d��(��) �Ǿ���! \n",_hp, totalHp);	
}

void GetMonsterState()
{
	MonsterState ms = {"���ʹ� �����ߴ�.","���ʹ� �г� �ߴ�.","���ʹ� �׾���"};
	int nSelect = 0;
	printf("���Ͱ� ��Ÿ���� \n");
	printf("1.������ ���� 2.�ָ����� ���� 3.�̳��ذ� ��ġ������ \n");
	scanf_s("%d", &nSelect);
	switch (nSelect)
	{
	case 1:
		printf("%s\n", ms.groggy);
		break;
	case 2:
		printf("%s\n", ms.frenzy);
		break;
	case 3:
		printf("%s\n", ms.dead);
		break;
	}
}

void main()
{
	//����1: �Լ������͸� �̿��Ͽ� 500, 480.5, "Monster"�� ����ϴ� ���α׷��� �ۼ��ϼ���.
	int nHp = 500;
	float fMp = 480.5f;
	char cName[] = "Monster";

	void(*pQ1Func)(int, float, char) = Q1Function;

	pQ1Func(nHp, fMp, cName);

	printf("\n=====================================================\n");

	//����2 : �Լ������͸� �̿��Ͽ� ������ HP�� ���� �� ���ҽ�Ű�� ���α׷��� �ۼ��ϼ���.

	int nHpDefault = 500;
	
	void(*MonsterHP)(int, int, int) = AddHP;

	MonsterHP(nHpDefault, 100, 50);

	printf("\n=====================================================\n");
	//����3 : ����ü�� �̿��Ͽ� ������ ���� ������ �Է��ϰ� ����ϴ� ���α׷��� �ۼ��ϼ���.

	GetMonsterState();

}
