/* chess program step 1, print chess set */
#include<stdio.h>

char a1, a2, a3, a4, a5, a6, a7, a8;
char b1, b2, b3, b4, b5, b6, b7, b8;
char c1, c2, c3, c4, c5, c6, c7, c8;
char d1, d2, d3, d4, d5, d6, d7, d8;
char e1, e2, e3, e4, e5, e6, e7, e8;
char f1, f2, f3, f4, f5, f6, f7, f8;
char g1, g2, g3, g4, g5, g6, g7, g8;
char h1, h2, h3, h4, h5, h6, h7, h8;

void ascii(void);
void move_peice(void);

int main(void)
{
	int move_number = 1;
	a1='R',b1='N',c1='B',d1='Q',e1='K',f1='B',g1='N',h1='R';
	a2='P',b2='P',c2='P',d2='P',e2='P',f2='P',g2='P',h2='P';
	a3='x',b3='x',c3='x',d3='x',e3='x',f3='x',g3='x',h3='x';
	a4='x',b4='x',c4='x',d4='x',e4='x',f4='x',g4='x',h4='x';
	a5='x',b5='x',c5='x',d5='x',e5='x',f5='x',g5='x',h5='x';
	a6='x',b6='x',c6='x',d6='x',e6='x',f6='x',g6='x',h6='x';
	a7='p',b7='p',c7='p',d7='p',e7='p',f7='p',g7='p',h7='p';
	a8='r',b8='n',c8='b',d8='q',e8='k',f8='b',g8='n',h8='r';


	ascii(); /*print board*/
	
	while ( 1 )
	{
	
	if (move_number % 2 == 1)/*check whos move it is an print prompt*/
		printf("\nWhite move: ");
	else
		printf("\nBlack move: ");
	
	move_peice();
	printf("\n");
	ascii();
	move_number = move_number + 1;
	}


	return 0;
}

void move_peice(void)
{
	
	char input[5];
	scanf("%s", &input);/*get move input*/
	char *p1, *p2, *p3, *p4;/*put input into pointers*/
	p1 = &input[0];
	p2 = &input[1];
	p3 = &input[2];
	p4 = &input[3];
	char *from, *to, temp;
/* putting location of squire being moved from into 'from' pointer */
	if (*p1=='a' && *p2=='1')/*all posible from positions*/
		from = &a1;
	else if (*p1=='a' && *p2=='2')
		from = &a2;
	else if (*p1=='a' && *p2=='3')
		from = &a3;
	else if (*p1=='a' && *p2=='4')
		from = &a4;
	else if (*p1=='a' && *p2=='5')
		from = &a5;
	else if (*p1=='a' && *p2=='6')
		from = &a6;
	else if (*p1=='a' && *p2=='7')
		from = &a7;
	else if (*p1=='a' && *p2=='8')
		from = &a8;
	else if (*p1=='b' && *p2=='1') /* b */
		from = &b1;
	else if (*p1=='b' && *p2=='2')
		from = &b2;
	else if (*p1=='b' && *p2=='3')
		from = &b3;
	else if (*p1=='b' && *p2=='4')
		from = &b4;
	else if (*p1=='b' && *p2=='5')
		from = &b5;
	else if (*p1=='b' && *p2=='6')
		from = &b6;
	else if (*p1=='b' && *p2=='7')
		from = &b7;
	else if (*p1=='b' && *p2=='8')
		from = &b8;
	else if (*p1=='c' && *p2=='1')/* c */
		from = &c1;
	else if (*p1=='c' && *p2=='2')
		from = &c2;
	else if (*p1=='c' && *p2=='3')
		from = &c3;
	else if (*p1=='c' && *p2=='4')
		from = &c4;
	else if (*p1=='c' && *p2=='5')
		from = &c5;
	else if (*p1=='c' && *p2=='6')
		from = &c6;
	else if (*p1=='c' && *p2=='7')
		from = &c7;
	else if (*p1=='c' && *p2=='8')
		from = &c8;
	else if (*p1=='d' && *p2=='1') /* d */
		from = &d1;
	else if (*p1=='d' && *p2=='2')
		from = &d2;
	else if (*p1=='d' && *p2=='3')
		from = &d3;
	else if (*p1=='d' && *p2=='4')
		from = &d4;
	else if (*p1=='d' && *p2=='5')
		from = &d5;
	else if (*p1=='d' && *p2=='6')
		from = &d6;
	else if (*p1=='d' && *p2=='7')
		from = &d7;
	else if (*p1=='d' && *p2=='8')
		from = &d8;
	else if (*p1=='e' && *p2=='1')/* e */
		from = &e1;
	else if (*p1=='e' && *p2=='2')
		from = &e2;
	else if (*p1=='e' && *p2=='3')
		from = &e3;
	else if (*p1=='e' && *p2=='4')
		from = &e4;
	else if (*p1=='e' && *p2=='5')
		from = &e5;
	else if (*p1=='e' && *p2=='6')
		from = &e6;
	else if (*p1=='e' && *p2=='7')
		from = &e7;
	else if (*p1=='e' && *p2=='8')
		from = &e8;
	else if (*p1=='f' && *p2=='1')/* f */
		from = &f1;
	else if (*p1=='f' && *p2=='2')
		from = &f2;
	else if (*p1=='f' && *p2=='3')
		from = &f3;
	else if (*p1=='f' && *p2=='4')
		from = &f4;
	else if (*p1=='f' && *p2=='5')
		from = &f5;
	else if (*p1=='f' && *p2=='6')
		from = &f6;
	else if (*p1=='f' && *p2=='7')
		from = &f7;
	else if (*p1=='f' && *p2=='8')
		from = &f8;
	else if (*p1=='g' && *p2=='1')/* g */
		from = &g1;
	else if (*p1=='g' && *p2=='2')
		from = &g2;
	else if (*p1=='g' && *p2=='3')
		from = &g3;
	else if (*p1=='g' && *p2=='4')
		from = &g4;
	else if (*p1=='g' && *p2=='5')
		from = &g5;
	else if (*p1=='g' && *p2=='6')
		from = &g6;
	else if (*p1=='g' && *p2=='7')
		from = &g7;
	else if (*p1=='g' && *p2=='8')
		from = &g8;
	else if (*p1=='h' && *p2=='1')/* h */
		from = &h1;
	else if (*p1=='h' && *p2=='2')
		from = &h2;
	else if (*p1=='h' && *p2=='3')
		from = &h3;
	else if (*p1=='h' && *p2=='4')
		from = &h4;
	else if (*p1=='h' && *p2=='5')
		from = &h5;
	else if (*p1=='h' && *p2=='6')
		from = &h6;
	else if (*p1=='h' && *p2=='7')
		from = &h7;
	else if (*p1=='h' && *p2=='8')
		from = &h8;


	if (*p3=='a' && *p4=='1')/*all possible to positions*/
		to = &a1;
	else if (*p3=='a' && *p4=='2')
		to = &a2;
	else if (*p3=='a' && *p4=='3')
		to = &a3;
	else if (*p3=='a' && *p4=='4')
		to = &a4;
	else if (*p3=='a' && *p4=='5')
		to = &a5;
	else if (*p3=='a' && *p4=='6')
		to = &a6;
	else if (*p3=='a' && *p4=='7')
		to = &a7;
	else if (*p3=='a' && *p4=='8')
		to = &a8;
	else if (*p3=='b' && *p4=='1') /* b */
		to = &b1;
	else if (*p3=='b' && *p4=='2')
		to = &b2;
	else if (*p3=='b' && *p4=='3')
		to = &b3;
	else if (*p3=='b' && *p4=='4')
		to = &b4;
	else if (*p3=='b' && *p4=='5')
		to = &b5;
	else if (*p3=='b' && *p4=='6')
		to = &b6;
	else if (*p3=='b' && *p4=='7')
		to = &b7;
	else if (*p3=='b' && *p4=='8')
		to = &b8;
	else if (*p3=='c' && *p4=='1')/* c */
		to = &c1;
	else if (*p3=='c' && *p4=='2')
		to = &c2;
	else if (*p3=='c' && *p4=='3')
		to = &c3;
	else if (*p3=='c' && *p4=='4')
		to = &c4;
	else if (*p3=='c' && *p4=='5')
		to = &c5;
	else if (*p3=='c' && *p4=='6')
		to = &c6;
	else if (*p3=='c' && *p4=='7')
		to = &c7;
	else if (*p3=='c' && *p4=='8')
		to = &c8;
	else if (*p3=='d' && *p4=='1') /* d */
		to = &d1;
	else if (*p3=='d' && *p4=='2')
		to = &d2;
	else if (*p3=='d' && *p4=='3')
		to = &d3;
	else if (*p3=='d' && *p4=='4')
		to = &d4;
	else if (*p3=='d' && *p4=='5')
		to = &d5;
	else if (*p3=='d' && *p4=='6')
		to = &d6;
	else if (*p3=='d' && *p4=='7')
		to = &d7;
	else if (*p3=='d' && *p4=='8')
		to = &d8;
	else if (*p3=='e' && *p4=='1')/* e */
		to = &e1;
	else if (*p3=='e' && *p4=='2')
		to = &e2;
	else if (*p3=='e' && *p4=='3')
		to = &e3;
	else if (*p3=='e' && *p4=='4')
		to = &e4;
	else if (*p3=='e' && *p4=='5')
		to = &e5;
	else if (*p3=='e' && *p4=='6')
		to = &e6;
	else if (*p3=='e' && *p4=='7')
		to = &e7;
	else if (*p3=='e' && *p4=='8')
		to = &e8;
	else if (*p3=='f' && *p4=='1')/* f */
		to = &f1;
	else if (*p3=='f' && *p4=='2')
		to = &f2;
	else if (*p3=='f' && *p4=='3')
		to = &f3;
	else if (*p3=='f' && *p4=='4')
		to = &f4;
	else if (*p3=='f' && *p4=='5')
		to = &f5;
	else if (*p3=='f' && *p4=='6')
		to = &f6;
	else if (*p3=='f' && *p4=='7')
		to = &f7;
	else if (*p3=='f' && *p4=='8')
		to = &f8;
	else if (*p3=='g' && *p4=='1')/* g */
		to = &g1;
	else if (*p3=='g' && *p4=='2')
		to = &g2;
	else if (*p3=='g' && *p4=='3')
		to = &g3;
	else if (*p3=='g' && *p4=='4')
		to = &g4;
	else if (*p3=='g' && *p4=='5')
		to = &g5;
	else if (*p3=='g' && *p4=='6')
		to = &g6;
	else if (*p3=='g' && *p4=='7')
		to = &g7;
	else if (*p3=='g' && *p4=='8')
		to = &g8;
	else if (*p3=='h' && *p4=='1')/* h */
		to = &h1;
	else if (*p3=='h' && *p4=='2')
		to = &h2;
	else if (*p3=='h' && *p4=='3')
		to = &h3;
	else if (*p3=='h' && *p4=='4')
		to = &h4;
	else if (*p3=='h' && *p4=='5')
		to = &h5;
	else if (*p3=='h' && *p4=='6')
		to = &h6;
	else if (*p3=='h' && *p4=='7')
		to = &h7;
	else if (*p3=='h' && *p4=='8')
		to = &h8;


	temp = *from; /* moving pointer 'from' to variable 'temp' */
	to = &temp;
	char x = 'x';
	from = &x; /* putting an x in place of the moved from squire */

	if (*p1=='a' && *p2=='1')/*writing x to old square*/
		a1 = *from;
	else if (*p1=='a' && *p2=='2')
		a2 = *from;
	else if (*p1=='a' && *p2=='3')
		a3 = *from;
	else if (*p1=='a' && *p2=='4')
		a4 = *from;
	else if (*p1=='a' && *p2=='5')
		a5 = *from;
	else if (*p1=='a' && *p2=='6')
		a6 = *from;
	else if (*p1=='a' && *p2=='7')
		a7 = *from;
	else if (*p1=='a' && *p2=='8')
		a8 = *from;
	else if (*p1=='b' && *p2=='1') /* b */
		b1 = *from;
	else if (*p1=='b' && *p2=='2')
		b2 = *from;
	else if (*p1=='b' && *p2=='3')
		b3 = *from;
	else if (*p1=='b' && *p2=='4')
		b4 = *from;
	else if (*p1=='b' && *p2=='5')
		b5 = *from;
	else if (*p1=='b' && *p2=='6')
		b6 = *from;
	else if (*p1=='b' && *p2=='7')
		b7 = *from;
	else if (*p1=='b' && *p2=='8')
		b8 = *from;
	else if (*p1=='c' && *p2=='1')/* c */
		c1 = *from;
	else if (*p1=='c' && *p2=='2')
		c2 = *from;
	else if (*p1=='c' && *p2=='3')
		c3 = *from;
	else if (*p1=='c' && *p2=='4')
		c4 = *from;
	else if (*p1=='c' && *p2=='5')
		c5 = *from;
	else if (*p1=='c' && *p2=='6')
		c6 = *from;
	else if (*p1=='c' && *p2=='7')
		c7 = *from;
	else if (*p1=='c' && *p2=='8')
		c8 = *from;
	else if (*p1=='d' && *p2=='1') /* d */
		d1 = *from;
	else if (*p1=='d' && *p2=='2')
		d2 = *from;
	else if (*p1=='d' && *p2=='3')
		d3 = *from;
	else if (*p1=='d' && *p2=='4')
		d4 = *from;
	else if (*p1=='d' && *p2=='5')
		d5 = *from;
	else if (*p1=='d' && *p2=='6')
		d6 = *from;
	else if (*p1=='d' && *p2=='7')
		d7 = *from;
	else if (*p1=='d' && *p2=='8')
		d8 = *from;
	else if (*p1=='e' && *p2=='1')/* e */
		e1 = *from;
	else if (*p1=='e' && *p2=='2')
		e2 = *from;
	else if (*p1=='e' && *p2=='3')
		e3 = *from;
	else if (*p1=='e' && *p2=='4')
		e4 = *from;
	else if (*p1=='e' && *p2=='5')
		e5 = *from;
	else if (*p1=='e' && *p2=='6')
		e6 = *from;
	else if (*p1=='e' && *p2=='7')
		e7 = *from;
	else if (*p1=='e' && *p2=='8')
		e8 = *from;
	else if (*p1=='f' && *p2=='1')/* f */
		f1 = *from;
	else if (*p1=='f' && *p2=='2')
		f2 = *from;
	else if (*p1=='f' && *p2=='3')
		f3 = *from;
	else if (*p1=='f' && *p2=='4')
		f4 = *from;
	else if (*p1=='f' && *p2=='5')
		f5 = *from;
	else if (*p1=='f' && *p2=='6')
		f6 = *from;
	else if (*p1=='f' && *p2=='7')
		f7 = *from;
	else if (*p1=='f' && *p2=='8')
		f8 = *from;
	else if (*p1=='g' && *p2=='1')/* g */
		g1 = *from;
	else if (*p1=='g' && *p2=='2')
		g2 = *from;
	else if (*p1=='g' && *p2=='3')
		g3 = *from;
	else if (*p1=='g' && *p2=='4')
		g4 = *from;
	else if (*p1=='g' && *p2=='5')
		g5 = *from;
	else if (*p1=='g' && *p2=='6')
		g6 = *from;
	else if (*p1=='g' && *p2=='7')
		g7 = *from;
	else if (*p1=='g' && *p2=='8')
		g8 = *from;
	else if (*p1=='h' && *p2=='1')/* h */
		h1 = *from;
	else if (*p1=='h' && *p2=='2')
		h2 = *from;
	else if (*p1=='h' && *p2=='3')
		h3 = *from;
	else if (*p1=='h' && *p2=='4')
		h4 = *from;
	else if (*p1=='h' && *p2=='5')
		h5 = *from;
	else if (*p1=='h' && *p2=='6')
		h6 = *from;
	else if (*p1=='h' && *p2=='7')
		h7 = *from;
	else if (*p1=='h' && *p2=='8')
		h8 = *from;

	if (*p3=='a' && *p4=='3')/*moving peice to new square*/
		a3 = *to;
	else if (*p3=='a' && *p4=='2')
		a2 = *to;
	else if (*p3=='a' && *p4=='3')
		a3 = *to;
	else if (*p3=='a' && *p4=='4')
		a4 = *to;
	else if (*p3=='a' && *p4=='5')
		a5 = *to;
	else if (*p3=='a' && *p4=='6')
		a6 = *to;
	else if (*p3=='a' && *p4=='7')
		a7 = *to;
	else if (*p3=='a' && *p4=='8')
		a8 = *to;
	else if (*p3=='b' && *p4=='1') /* b */
		b1 = *to;
	else if (*p3=='b' && *p4=='2')
		b2 = *to;
	else if (*p3=='b' && *p4=='3')
		b3 = *to;
	else if (*p3=='b' && *p4=='4')
		b4 = *to;
	else if (*p3=='b' && *p4=='5')
		b5 = *to;
	else if (*p3=='b' && *p4=='6')
		b6 = *to;
	else if (*p3=='b' && *p4=='7')
		b7 = *to;
	else if (*p3=='b' && *p4=='8')
		b8 = *to;
	else if (*p3=='c' && *p4=='1')/* c */
		c1 = *to;
	else if (*p3=='c' && *p4=='2')
		c2 = *to;
	else if (*p3=='c' && *p4=='3')
		c3 = *to;
	else if (*p3=='c' && *p4=='4')
		c4 = *to;
	else if (*p3=='c' && *p4=='5')
		c5 = *to;
	else if (*p3=='c' && *p4=='6')
		c6 = *to;
	else if (*p3=='c' && *p4=='7')
		c7 = *to;
	else if (*p3=='c' && *p4=='8')
		c8 = *to;
	else if (*p3=='d' && *p4=='1') /* d */
		d1 = *to;
	else if (*p3=='d' && *p4=='2')
		d2 = *to;
	else if (*p3=='d' && *p4=='3')
		d3 = *to;
	else if (*p3=='d' && *p4=='4')
		d4 = *to;
	else if (*p3=='d' && *p4=='5')
		d5 = *to;
	else if (*p3=='d' && *p4=='6')
		d6 = *to;
	else if (*p3=='d' && *p4=='7')
		d7 = *to;
	else if (*p3=='d' && *p4=='8')
		d8 = *to;
	else if (*p3=='e' && *p4=='1')/* e */
		e1 = *to;
	else if (*p3=='e' && *p4=='2')
		e2 = *to;
	else if (*p3=='e' && *p4=='3')
		e3 = *to;
	else if (*p3=='e' && *p4=='4')
		e4 = *to;
	else if (*p3=='e' && *p4=='5')
		e5 = *to;
	else if (*p3=='e' && *p4=='6')
		e6 = *to;
	else if (*p3=='e' && *p4=='7')
		e7 = *to;
	else if (*p3=='e' && *p4=='8')
		e8 = *to;
	else if (*p3=='f' && *p4=='1')/* f */
		f1 = *to;
	else if (*p3=='f' && *p4=='2')
		f2 = *to;
	else if (*p3=='f' && *p4=='3')
		f3 = *to;
	else if (*p3=='f' && *p4=='4')
		f4 = *to;
	else if (*p3=='f' && *p4=='5')
		f5 = *to;
	else if (*p3=='f' && *p4=='6')
		f6 = *to;
	else if (*p3=='f' && *p4=='7')
		f7 = *to;
	else if (*p3=='f' && *p4=='8')
		f8 = *to;
	else if (*p3=='g' && *p4=='1')/* g */
		g1 = *to;
	else if (*p3=='g' && *p4=='2')
		g2 = *to;
	else if (*p3=='g' && *p4=='3')
		g3 = *to;
	else if (*p3=='g' && *p4=='4')
		g4 = *to;
	else if (*p3=='g' && *p4=='5')
		g5 = *to;
	else if (*p3=='g' && *p4=='6')
		g6 = *to;
	else if (*p3=='g' && *p4=='7')
		g7 = *to;
	else if (*p3=='g' && *p4=='8')
		g8 = *to;
	else if (*p3=='h' && *p4=='1')/* h */
		h1 = *to;
	else if (*p3=='h' && *p4=='2')
		h2 = *to;
	else if (*p3=='h' && *p4=='3')
		h3 = *to;
	else if (*p3=='h' && *p4=='4')
		h4 = *to;
	else if (*p3=='h' && *p4=='5')
		h5 = *to;
	else if (*p3=='h' && *p4=='6')
		h6 = *to;
	else if (*p3=='h' && *p4=='7')
		h7 = *to;
	else if (*p3=='h' && *p4=='8')
		h8 = *to;




}

void ascii(void)
{
	printf("   A B C D E F G H   \n"); /*print the chess board*/
	printf("  =================  \n"); /*using variables for positions*/
	printf("8| %c %c %c %c %c %c %c %c |8\n",a8,b8,c8,d8,e8,f8,g8,h8);
	printf("7| %c %c %c %c %c %c %c %c |7\n",a7,b7,c7,d7,e7,f7,g7,h7);
	printf("6| %c %c %c %c %c %c %c %c |6\n",a6,b6,c6,d6,e6,f6,g6,h6);
	printf("5| %c %c %c %c %c %c %c %c |5\n",a5,b5,c5,d5,e5,f5,g5,h5);
	printf("4| %c %c %c %c %c %c %c %c |4\n",a4,b4,c4,d4,e4,f4,g4,h4);
	printf("3| %c %c %c %c %c %c %c %c |3\n",a3,b3,c3,d3,e3,f3,g3,h3);
	printf("2| %c %c %c %c %c %c %c %c |2\n",a2,b2,c2,d2,e2,f2,g2,h2);
	printf("1| %c %c %c %c %c %c %c %c |1\n",a1,b1,c1,d1,e1,f1,g1,h1);
	printf("  =================  \n");
	printf("   A B C D E F G H   \n");
}
