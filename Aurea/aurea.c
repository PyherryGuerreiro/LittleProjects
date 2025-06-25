#include <stdio.h>
#include <gmp.h>
int main(){

mpz_t a, b, c;
mpz_init_set_str(a,"1", 10);
mpz_init_set_str(b, "1", 10);
mpz_init_set_str(c,"1", 10);
int max_num = 100000;
while (max_num!=0) {

	mpz_add(c, a, b);
	mpz_set(a, b);
	//a = b;
	mpz_set(b, c);
	//b = c;
	gmp_printf("%Zd\n", c);
	max_num -= 1;
}
mpz_clear(a);
mpz_clear(b);
mpz_clear(c);
return 0;
}
