#include<iostream>
#include<graphics.h>
using namespace std;



int main()
{

	initgraph(640, 480);


	char a[10];
	InputBox(a, 10, "������뾶��");

	int r = atoi(a);

	char p[10];
	InputBox(p, 10, "����X");
	int x = atoi(p);

	char y[10];
	InputBox(y, 10, "����Y");

	int ss = atoi(y);
	setlinecolor(RED);
	circle(x, ss, r);




	system("pause");
	closegraph();
	return 0;
}