#include <stdio.h>
// SOLUTION FILE


main()
{
  int var_int; char var_char; double var_double;                    // 2

  unsigned char uchar1, uchar2;   // 3
  signed char schar1, schar2;

  int x, y;                       // 4

  char i;                         // 5
  char shift_char;

  int a[10] = {0,10,20,30,40,50,60,70,80,90};    // 6

  int b[10], c[10];               // 7
  int *ip, *ip2;
  int j, k;

  char AString[] = "HAL";           // 8

  // 1 -- change "World" to your name
  printf("\n\n PART 1 ---------\n");

  printf("\n Hello John! \n");

  // 2 -- find sizes of the other C datatypes
  printf("\n\n PART 2 ----------\n");

  printf("\n size of data type int = %d ", sizeof(var_int));
  printf("\n size of data type int = %d ", sizeof(var_char));
  printf("\n size of data type int = %d ", sizeof(var_double));

  // 3 -- explore signed versus unsigned datatypes and their interactions
  printf("\n\n PART 3 ----------\n");

  uchar1 = 0xFF;
  uchar2 = 0xFE;
  schar1 = 0xFF;
  schar2 = 0xFE;

  printf("\n uchar1 = %d ", uchar1);
  printf("\n schar1 = %d ", schar1);

	if(uchar1 > uchar2){
		printf("uchar1 = %d is larger\n", uchar1);	
	}
	else{
		printf("uchar2 = %d is larger\n", uchar2);
	}
	if(schar1 > schar2){                                                                                                            printf("schar1 = %d is larger\n", schar1);
	}
        else{
                printf("schar2 = %d is larger\n", schar2);
        }

	if(uchar1 > schar1){                                                                                                            printf("uchar1 = %d is larger\n", uchar1);
        }
        else{
                printf("schar1 = %d is larger\n", schar1);
        }
	
printf("schar3 = %d\n", schar1 + schar2);
printf("uchar3 = %d\n", uchar1 + uchar2);
printf("%d\n", schar1 + uchar1);


  // 4 -- Booleans
  printf("\n\n PART 4 ----------\n");

  x = 1; y = 2;

	printf("\n Boolean true value = %d", x == x);
	printf("\n Boolean false value = %d", x == y);

	printf("\n Boolean size = %d", sizeof(x));

	printf("\n Using && we get %d", x&&y);
	printf("\n Using & we get %d", x&y);
	printf("\n Using ~ we get %d", ~x);
	printf("\n Using ! we get %d", !x);
  // 5 -- shifts
  printf("\n\n PART 5 ----------\n");

  shift_char = 15;
  i = 1;


  printf("\n shift_char << %d = %d", i, shift_char << i);
  printf("\n shift_char >> %d = %d", i, shift_char >> i);
  
  
  // HINT: If you cannot observe any "interesting" results using the above statement,
  // try assigning the shifted value to a different variable and then printing the new 
  // variable.


  // 6 -- pointer basics
  printf("\n\n PART 6 ----------\n");

  ip = a;
  printf("\nstart %d %d %d %d %d %d %d \n",
	 a[0], *(ip), *(ip+1), *ip++, *ip, *(ip+3), *(ip-1));
  printf("\n Corrected Version = %d %d %d %d %d %d %d \n", 
	a[0], a[0], *(ip), a[0], a[0], *(ip+3), a[0]);
  printf("\n Corrected Version2 = %d %d %d %d %d %d %d \n",
        *(ip), *(ip), *(ip+1), *(ip), *(ip+1), *(ip+4), *(ip));

	printf("\n size of pointer = %d", sizeof(ip));
	printf("\n pointer itself = %x", ip);


  // 7 -- programming with pointers
  printf("\n\n PART 7 ----------\n");

	 j = 0;
	 k = 9;

	 for(j = 0; j < 10; j++){
		b[k] = a[j];
		k--;
	}
	for(j = 0; j < 10; j++){
		printf("%d,", b[j]);
	}
	printf("\n");
	
	for(j = 0; j < 10; j++){
		c[j] = *(a+9-j);
	}
	for(j = 0; j < 10; j++){
		printf("%d,", c[j]);
	}

  // 8 -- strings
  printf("\n\n PART 8 ----------\n");

  printf("\n %s \n", AString);

  printf("\n ASCII values of AString is %d %d %d", AString[0], AString[1], AString[2]);
	printf("\nByte value is %hhx", AString[3]);
	printf("\nV Astring with 1 added to every letter %d %d %d", AString[0] + 1, AString[1] + 1, AString[2] + 1);
	AString[3] = AString[3] + 60;
	printf("\n %s", AString);

  // 9 -- address calculation
  printf("\n\n PART 9 ----------\n");
  for (k = 0; k < 10; k++){
	 b[k] = a[k];         // direct reference to array element
	printf("%d \t", b[k]);
}

printf("\n");

  ip = a;
  ip2 = b;
  for (k = 0; k < 10; k++){
	printf("%d \t", *ip2);
	 *ip2++ = *ip++;     // indirect reference to array element
	
}


  // all done
  printf("\n\n ALL DONE\n");
}
