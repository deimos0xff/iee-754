#include <stdio.h>
#include "iee357.h"






//bit mask win
unsinged int floatohex(char *float[]){

	 unsigned int float_buff = 0;




	if (float[0] == *"-"){

		float_buff |= 2 << 31;

	}


	usigned int exponent = 0;
		


	for (int i = 0; i <= 255; i++){

		if (float[i] == *"."){


			exponent += i * 10 * 
}











int main(){


	 HexFloat hex;

	 hex.fromhex = 0xc0a00000;



	 printf("%f\n", hex.tofloat);






	return 0;
}





















