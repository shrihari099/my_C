#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){

	printf("sizeofchar(char) =%u\n",sizeof(char));
	printf("sizeofchar(short) =%u\n",sizeof(short));
	printf("sizeofchar(int) =%u\n",sizeof(int));
	printf("sizeofchar(long) =%u\n",sizeof(long));
	printf("sizeofchar(float) =%u\n",sizeof(float));
	printf("sizeofchar(double) =%u\n",sizeof(double));
	printf("sizeofchar(long double) =%u\n",sizeof(long double));

	printf("SCHAR_MIN =%u\n",SCHAR_MIN);
	printf("SCHAR_MAX =%u\n",SCHAR_MAX);
	printf("UCHAR_MAX =%u\n",UCHAR_MAX);

	printf("SHRT_MIN =%u\n",SHRT_MIN);
	printf("SHRT_MAX =%u\n",SHRT_MAX);
	printf("USHRT_MAX =%u\n",USHRT_MAX);

	printf("INT_MIN =%u\n",INT_MIN);
	printf("INT_MAX =%u\n",INT_MAX);
	printf("UINT_MAX =%u\n",UINT_MAX);

	printf("LONG_MIN =%u\n",LONG_MIN);
	printf("LONG_MAX =%u\n",LONG_MAX);
	printf("ULONG_MAX =%u\n",ULONG_MAX);

	printf("FLT_MIN =%u\n",FLT_MIN);
	printf("FLT_MAX =%u\n",FLT_MAX);

	printf("DBL_MIN =%u\n",DBL_MIN);
	printf("DBL_MAX =%u\n",DBL_MAX);

	printf("lDBL_MIN =%u\n",LDBL_MIN);
	printf("lDBL_MAX =%u\n",LDBL_MAX);

	//number of digits of precision

	printf("FLT_DIG =%u\n",FLT_DIG);
	printf("DBL_DIG =%u\n",DBL_DIG);
	printf("LDBL_DIG =%u\n",LDBL_DIG);
}



