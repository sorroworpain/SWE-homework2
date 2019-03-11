// random_equation.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include"main.h"
using namespace std;

int Equ_Num=1;
//ofstream fp("result.txt");

int main()
{
	srand((unsigned int)time(NULL));

	value_type right_answer[10];
	value_type my_answer[10];
	char conti = 'y';
	int wrong_question[10];
	int w = 0;
	int s = 0;

	while(conti=='y') {
		int w = 0;
		clock_t b = clock();



		for (int j = 0; j < 10; j++) {
			int m = j + 1;
			cout << "question" << j+1 << ". ";
			right_answer[j]=Equ_generator();
			my_answer[j] = get_answer();
			if (my_answer[j] != right_answer[j] && my_answer[j]!=Mark) {
				wrong_question[w] = j;
				w++;
			}
			else if (my_answer[j] == Mark)s++;
		}


		clock_t e = clock();
		double elapsed1 = (double)(e - b)/1000;
		printf("It takes you: %f seconds to finish the questions\n", elapsed1);
		cout << "You made " << 10 - w -s<< " right answers" << endl;

		for (int j = 0; j < w; j++) {
			cout << "Question " << wrong_question[j]+1 << " is wrong. The right answer is " << right_answer[wrong_question[j]]<<endl;
		}

		cout << "Would you like to have one more round? Yes(press y)/No(press any other key):" << endl;
		conti = getch();
	}
	//fp.close();

	return 0;
}

