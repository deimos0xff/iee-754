#include <stdio.h>







typedef union {

	int fromhex;

	float tofloat;

} HexFloat;






int main(){


	 HexFloat bytes;

	 bytes.fromhex = 0xffffffff;



	 printf("%f\n", bytes.tofloat);






	return 0;
}





















