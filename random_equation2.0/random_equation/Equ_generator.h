#pragma once
#define Equ_Len 7//算式数值数目最大值
#define Mark 99999
#define value_type int

extern int Ope_Num;
extern value_type Value;
extern int Ope;

typedef struct Cal_Unit {
	char ope;
	value_type value;
	int flag;
}Unit;

extern Unit unit[Equ_Len];


value_type Equ_generator(void);
value_type Equ_calculator(Unit unit[Equ_Len]);
value_type get_answer();
