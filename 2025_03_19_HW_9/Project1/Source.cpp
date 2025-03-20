#include<string>
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

struct Student
{
	string name;
	int hp;
	int dmg;
	int luck;

	Student(string name, int hp, int dmg, int luck) :
		name(name), hp(hp), dmg(dmg), luck(luck)
	{
	}

	Student(const Student& student) :
		name(student.name),
		hp(student.hp),
		dmg(student.dmg),
		luck(student.luck)
	{
	}

	~Student()
	{
	}

	bool luckWorks()
	{
		return (rand() % 100 < luck);
	}

	bool isDead()
	{
		return (hp < 1);
	}

	void getDmg(int dmg)
	{
		if (luckWorks())
		{
			cout << "\t" << name << " LUCK WORKS FOR GETTING DAMAGE\n";
			dmg /= 2;
		}
		hp -= dmg;
	}

	int makeDmg()
	{
		if (luckWorks())
		{
			cout << "\t" << name << " LUCK WORKS FOR MAKING DAMAGE\n";
			return dmg * 2;
		}
		else
		{
			return dmg;
		}
	}

	void print()
	{
		cout << name << " [" << hp << "] (";
		cout << "luck=" << luck << ";";
		cout << "damage=" << dmg << ")\n";
	}
};

Student battle(Student st1, Student st2)
{
	int round = 1;
	while (!(st1.isDead() || st2.isDead()))
	{
		cout << "\t\tROUND " << round++ << "\n";
		st1.print();
		cout << "versus\n";
		st2.print();
		st1.getDmg(st2.makeDmg());
		st2.getDmg(st1.makeDmg());
		if (st1.name == "Edgar" && st1.luckWorks())
		{
			st1.getDmg(-st1.makeDmg());
		}
	}
	if (st1.isDead() && st2.isDead())
	{
		cout << "DRAW\n";
		return;
	}
	else
	{
		cout << (st1.isDead() ? st2.name : st1.name) << " wins\n";
		return st1.isDead() ? st2 : st1;
	}
}

int main()
{
	srand(time(0));
	int* a = (int*)malloc(sizeof(int) * 48);
	int b = 0;
	for (int i = 0; i < 16; ++i)
	{
		int start = 5;
		int end = 10;
		int dmg = (rand() % (end - start + 1) + start);
		dmg -= dmg % 5;
		a[b] = dmg;
		++b;
		start = 50;
		end = 100;
		int hp = (rand() % (end - start + 1) + start);
		hp -= hp % 10;
		a[b] = hp;
		++b;
		start = 0;
		end = 30;
		int luck = (rand() % (end - start + 1) + start);
		luck -= luck % 5;
		a[b] = luck;
		++b;
	}
	for (int i = 0; i < 30; ++i)
	{
		std::cout << a[i] << " ";
	}
	Student st1("student1", a[0], a[1], a[2]);
	Student st2("student2", a[3], a[4], a[5]);
	Student st3("student3", a[6], a[7], a[8]);
	Student st4("student4", a[9], a[10], a[11]);
	Student st5("student5", a[12], a[13], a[14]);
	Student st6("student6", a[15], a[16], a[17]);
	Student st7("student7", a[18], a[19], a[20]);
	Student st8("student8", a[21], a[22], a[23]);
	Student st9("student9", a[24], a[25], a[26]);
	Student st10("student10", a[27], a[28], a[29]);
	Student st11("student11", a[30], a[31], a[32]);
	Student st12("student12", a[33], a[34], a[35]);
	Student st13("student13", a[36], a[37], a[38]);
	Student st14("student14", a[39], a[40], a[41]);
	Student st15("student15", a[42], a[43], a[44]);
	Student st16("student16", a[45], a[46], a[47]);
	Student win1 = battle(st1, st2);
	Student win2 = battle(st3, st4);
	Student win3 = battle(st5, st6);
	Student win4 = battle(st7, st8);
	Student win5 = battle(st9, st10);
	Student win6 = battle(st11, st12);
	Student win7 = battle(st13, st14);
	Student win8 = battle(st15, st16);
	Student win9 = battle(win1, win2);
	Student win10 = battle(win3, win4);
	Student win11 = battle(win5, win6);
	Student win12 = battle(win7, win8);
	Student win13 = battle(win9, win10);
	Student win14 = battle(win11, win12);
	Student wintotal = battle(win13, win14);
	free(a);
	return 0;
}