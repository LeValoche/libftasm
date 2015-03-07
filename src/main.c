#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_bzero(void *s, int n);
char	*ft_strcat(char *s1, char *s2);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_puts(char *s);
int		ft_strlen(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, void *src, size_t n);
char	*ft_strdup(char *s1);

void 	check_alnum(void)
{
	printf("Test of ft_isalnum:\n");
	printf("Test on %c, return = %d\n", 'a', ft_isalnum('a'));
	printf("Test on %c, return = %d\n", 'z', ft_isalnum('z'));
	printf("Test on %c, return = %d\n", '*', ft_isalnum('*'));
	printf("Test on %c, return = %d\n", 'Z', ft_isalnum('Z'));
	printf("Test on %c, return = %d\n", 'A', ft_isalnum('A'));
	printf("Test on %c, return = %d\n", '0', ft_isalnum('0'));
	printf("Test on %c, return = %d\n", '9', ft_isalnum('9'));
	printf("Test on %c, return = %d\n", '4', ft_isalnum('4'));
	printf("Test with NULL, ");
	printf("return = %d\n\n", ft_isalnum(0));
}

void 	check_digit(void)
{
	printf("Test of ft_isdigit:\n");
	printf("Test on %c, return = %d\n", 'a', ft_isdigit('a'));
	printf("Test on %c, return = %d\n", 'z', ft_isdigit('z'));
	printf("Test on %c, return = %d\n", '*', ft_isdigit('*'));
	printf("Test on %c, return = %d\n", 'Z', ft_isdigit('Z'));
	printf("Test on %c, return = %d\n", 'A', ft_isdigit('A'));
	printf("Test on %c, return = %d\n", '0', ft_isdigit('0'));
	printf("Test on %c, return = %d\n", '9', ft_isdigit('9'));
	printf("Test on %c, return = %d\n", '4', ft_isdigit('4'));
	printf("Test with NULL, ");
	printf("return = %d\n\n", ft_isdigit(0));
}

void 	check_alpha(void)
{
	printf("Test of ft_isalpha:\n");
	printf("Test on %c, return = %d\n", 'a', ft_isalpha('a'));
	printf("Test on %c, return = %d\n", 'z', ft_isalpha('z'));
	printf("Test on %c, return = %d\n", '*', ft_isalpha('*'));
	printf("Test on %c, return = %d\n", 'Z', ft_isalpha('Z'));
	printf("Test on %c, return = %d\n", 'A', ft_isalpha('A'));
	printf("Test on %c, return = %d\n", '0', ft_isalpha('0'));
	printf("Test on %c, return = %d\n", '9', ft_isalpha('9'));
	printf("Test on %c, return = %d\n", '4', ft_isalpha('4'));
	printf("Test with NULL, ");
	printf("return = %d\n\n", ft_isalpha(0));
}

void 	check_tolower(void)
{
	printf("Test of ft_tolower:\n");
	printf("Test on %c, return = %c\n", 'a', ft_tolower('a'));
	printf("Test on %c, return = %c\n", 'z', ft_tolower('z'));
	printf("Test on %c, return = %c\n", '*', ft_tolower('*'));
	printf("Test on %c, return = %c\n", 'Z', ft_tolower('Z'));
	printf("Test on %c, return = %c\n", 'A', ft_tolower('A'));
	printf("Test on %c, return = %c\n", '0', ft_tolower('0'));
	printf("Test on %c, return = %c\n", '9', ft_tolower('9'));
	printf("Test on %c, return = %c\n", '4', ft_tolower('4'));
	printf("Test with NULL, ");
	printf("return = %c\n\n", ft_tolower(0));
}

void 	check_toupper(void)
{
	printf("Test of ft_toupper:\n");
	printf("Test on %c, return = %c\n", 'a', ft_toupper('a'));
	printf("Test on %c, return = %c\n", 'z', ft_toupper('z'));
	printf("Test on %c, return = %c\n", '*', ft_toupper('*'));
	printf("Test on %c, return = %c\n", 'Z', ft_toupper('Z'));
	printf("Test on %c, return = %c\n", 'A', ft_toupper('A'));
	printf("Test on %c, return = %c\n", '0', ft_toupper('0'));
	printf("Test on %c, return = %c\n", '9', ft_toupper('9'));
	printf("Test on %c, return = %c\n", '4', ft_toupper('4'));
	printf("Test with NULL, ");
	printf("return = %c\n\n", ft_toupper(0));
}

void 	check_isascii(void)
{
	printf("Test of ft_isascii:\n");
	printf("Test on %c : %d, return = %d\n", 'a', 'a', ft_isascii('a'));
	printf("Test on %c : %d, return = %d\n", 'z', 'z', ft_isascii('z'));
	printf("Test on %c : %d, return = %d\n", 'A', 'A', ft_isascii('A'));
	printf("Test on %c : %d, return = %d\n", 'Z', 'Z', ft_isascii('Z'));
	printf("Test on %c : %d, return = %d\n", 245, 245, ft_isascii(245));
	printf("Test on %c : %d, return = %d\n", 221, 221, ft_isascii(221));
	printf("Test with NULL, ");
	printf("return = %d\n\n", ft_isascii(0));
}

void 	check_bzero(void)
{
	char str[4] = "jui";

	printf("Test of ft_bzero:\n");
	printf("str[0] = %d = %c\n", str[0], str[0]);
	printf("str[1] = %d = %c\n", str[1], str[1]);
	printf("str[2] = %d = %c\n", str[2], str[2]);
	printf("After using ft_bzero:\n");
	ft_bzero(str, 3);
	printf("str[0] = %d = %c\n", str[0], str[0]);
	printf("str[1] = %d = %c\n", str[1], str[1]);
	printf("str[2] = %d = %c\n", str[2], str[2]);
	printf("Test with NULL\n\n");
	ft_bzero(NULL, 5);
}

void 	check_strlen(void)
{
	char str[5] = "abcd";
	char str2[3] = "op";

	printf("Test of ft_strlen:\n");
	printf("%s, sized: %d\n", str, (int)ft_strlen(str));
	printf("%s, sized: %d\n", str2, (int)ft_strlen(str2));

	printf("Test with NULL, ");
	printf("sized: %d\n\n", (int)ft_strlen(0));
}

void 	check_puts(void)
{
	printf("Test of ft_puts:\n");
	
	ft_puts("FT_PUTS CALLED\n\n");
}

void 	check_memcpy(void)
{
	char 	str[2];
	char 	str2[6];

	ft_bzero(str, 2);
	ft_bzero(str2, 6);

	printf("Test of ft_memcpy:\n");
	printf("Str1 size: %d, Content: %s\n", (int)ft_strlen(str), str);
	printf("Str2 size: %d, Content: %s\n", (int)ft_strlen(str2), str2);
	ft_memcpy((void*)str, (void*)"a", 1);
	ft_memcpy((void*)str2, (void*)"hello", 5);
	printf("Using ft_memcpy:\n");
	printf("Str1 size: %d, Content: %s\n", (int)ft_strlen(str), str);
	printf("Str2 size: %d, Content: %s\n\n", (int)ft_strlen(str2), str2);
}

void 	check_strdup(void)
{
	char 	*str;
	char 	f[] = "h";
	char 	s[] = "hello";
	char 	t[] = "";

	printf("Test of ft_strdup:\n");
	str = ft_strdup(f);
	printf("Str after strdup (\"%s\") %d\n", str, (int)ft_strlen(str));
	str = ft_strdup(s);
	printf("Str after strdup (\"%s\") %d\n", str, (int)ft_strlen(str));
	str = ft_strdup(t);
	printf("Str after strdup (\"%s\") %d\n\n", str, (int)ft_strlen(str));
}

void 	check_memset(void)
{
	printf("Test of ft_memset:\n");
	printf("Before memset: %s\n", "abcd");
	printf("After memset: %s\n\n", (char*)ft_memset(ft_strdup("abcd"), 'A', 1));
}

void 	check_strcat(void)
{
	char 	str[5];

	str[0] = 'h';
	str[1] = '\0';
	printf("Test of ft_strcat:\n");
	printf("Str: %s\n", ft_strcat(str, "e"));
	printf("Str: %s\n\n", ft_strcat(str, "llo"));
}

void 	check_cat(void)
{
	int fd;

	fd = open("auteur", O_RDONLY);
	printf("Test of ft_cat:\n");
	ft_cat(fd);
	printf("\n\n");
	close(fd);
}

void 	check_b(void)
{
	printf("Test of ft_puts v2.0\n");
	printf(" => return : %d\n", ft_puts("a"));
	printf(" => return : %d\n", ft_puts("$#@#',./,~!@~=+"));
	printf("Test with null\n");
	printf(" => return : %d\n\n", ft_puts(NULL));
}

void	check_islower(void)
{
	printf("Test of ft_islower:\n");
	printf("Test on %c : %d, return = %d\n", 'a', 'a', ft_islower('a'));
	printf("Test on %c : %d, return = %d\n", 'z', 'z', ft_islower('z'));
	printf("Test on %c : %d, return = %d\n", 'A', 'A', ft_islower('A'));
	printf("Test on %c : %d, return = %d\n", 'Z', 'Z', ft_islower('Z'));
	printf("Test on %c : %d, return = %d\n", 245, 245, ft_islower(245));
	printf("Test on %c : %d, return = %d\n", 221, 221, ft_islower(221));
	printf("Test with NULL, ");
	printf("return = %d\n\n", ft_islower(0));
}

void	check_isupper(void)
{
	printf("Test of ft_isupper:\n");
	printf("Test on %c : %d, return = %d\n", 'a', 'a', ft_isupper('a'));
	printf("Test on %c : %d, return = %d\n", 'z', 'z', ft_isupper('z'));
	printf("Test on %c : %d, return = %d\n", 'A', 'A', ft_isupper('A'));
	printf("Test on %c : %d, return = %d\n", 'Z', 'Z', ft_isupper('Z'));
	printf("Test on %c : %d, return = %d\n", 245, 245, ft_isupper(245));
	printf("Test on %c : %d, return = %d\n", 221, 221, ft_isupper(221));
	printf("Test with NULL, ");
	printf("return = %d\n\n", ft_isupper(0));
}

int main(void){
	   check_digit();
	   check_alpha();
	   check_alnum();
	   check_islower();
	   check_isupper();
	   check_tolower();
	   check_toupper();
	   check_isascii();
	   check_bzero();
	   check_strlen();
	   check_strdup();
	   check_memset();
	   check_strcat();
	   check_memcpy();
	   check_cat();
	return 0;
}