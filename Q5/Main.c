//문제1: 함수포인터를 이용하여 500, 480.5, "Monster"를 출력하는 프로그램을 작성하세요.

//문제2 : 함수포인터를 이용하여 몬스터의 HP를 증가 및 감소시키는 프로그램을 작성하세요.

//문제3 : 구조체를 이용하여 몬스터의 상태 정보를 입력하고 출력하는 프로그램을 작성하세요.

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
	printf("레벨업! HP가 %d올라서 %d이(가) 되었다!\n",_hp ,totalHp);

	totalHp = _hp - _hpUp;
	printf("하지만 저주로 HP가 %d다운되어서 %d이(가) 되었다! \n",_hp, totalHp);	
}

void GetMonsterState()
{
	MonsterState ms = {"몬스터는 기절했다.","몬스터는 분노 했다.","몬스터는 죽었다"};
	int nSelect = 0;
	printf("몬스터가 나타났다 \n");
	printf("1.검으로 공격 2.주먹으로 공격 3.겁나쌔게 명치때리기 \n");
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
	//문제1: 함수포인터를 이용하여 500, 480.5, "Monster"를 출력하는 프로그램을 작성하세요.
	int nHp = 500;
	float fMp = 480.5f;
	char cName[] = "Monster";

	void(*pQ1Func)(int, float, char) = Q1Function;

	pQ1Func(nHp, fMp, cName);

	printf("\n=====================================================\n");

	//문제2 : 함수포인터를 이용하여 몬스터의 HP를 증가 및 감소시키는 프로그램을 작성하세요.

	int nHpDefault = 500;
	
	void(*MonsterHP)(int, int, int) = AddHP;

	MonsterHP(nHpDefault, 100, 50);

	printf("\n=====================================================\n");
	//문제3 : 구조체를 이용하여 몬스터의 상태 정보를 입력하고 출력하는 프로그램을 작성하세요.

	GetMonsterState();

}
