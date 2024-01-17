#include <stdio.h>
unsigned char	swap_bits(unsigned char c)
{
	return ((c >> 4) | (c << 4));
}

unsigned char reverse_bits(unsigned char octet);
{
  char  result;

  (())
}

int main ()
{
    unsigned char    *str = "01000001";
   // swap_bits(str);
  //  printf("%s", str);
    char c = 0xAF; // 1010 1111 1*8 0*4 +1*2 + 0*1 = 10 = A 
    char mask = 0XF0; // 1111 0000

    printf("%x", (char) c & mask);
    return (0);
}