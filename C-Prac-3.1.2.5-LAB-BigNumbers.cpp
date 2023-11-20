//Scenario
//The most popular, human - readable way to write an IP(to be precise, IPv4) is to write four numbers separated with dots(e.g., 127.0.0.1).But an IP address can also be written as a 32 - bit number.
//
//To get this form, you must multiply all the parts of the IP number by powers of 256 (256 * 256 * 256, 256 * 256, 256 and 1 - don't use precomputed versions).
//Write a program that asks the user to provide four numbers, and then checks if these numbers are more than or equal to 0, and less than or equal to 255.
//Next, the program should write both forms of the IP address : the human - readable one and the 32 - bit - number one.
//Use the unsigned long int type; to print it, use the "%lu" format in the printf function.
//If any of the address parts doesn't meet the given criteria (0<=x<=255), print only this simple error message: Inccorect IP Address..
//Your version of the program must print the same result as the expected output.
//
//Sample Input
//127
//0
//0
//1
//
//Expected output
//Human - readable IP address is : 127.0.0.1
//IP address as a 32 - bit number : 2130706433
//
//Sample Input
//192
//168
//1
//1
//
//Expected output
//Human - readable IP address is : 192.168.1.1
//IP address as a 32 - bit number : 3232235777
//
//Sample Input
//1
//268
//1
//1
//
//Expected output
//Incorrect IP Address.
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	unsigned long ip32 ;
	int v1=0, v2=0, v3=0, v4=0;
	printf("Enter every Ip number\n");
	scanf_s("%d", &v1);
	scanf_s("%d", &v2);
	scanf_s("%d", &v3);
	scanf_s("%d", &v4);
	if (v1 >= 0 && v1 <= 255 && v2 >= 0 && v2 <= 255 && v3 >= 0 && v3 <= 255 && v4 >= 0 && v4 <= 255)
	{
		ip32 = v1 * 256 * 256 * 256 + v2 * 256 * 256 + v3 * 256 + v4;
		printf("Human-readable IP adress is: %d.%d.%d.%d\n", v1, v2, v3, v4);
		printf("IP adress as a 32-bit number: %u\n", ip32);
	}
	else printf("Incorrect IP Address");
	return 0;
}