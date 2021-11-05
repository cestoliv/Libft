/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:54:05 by ocartier          #+#    #+#             */
/*   Updated: 2021/11/04 14:32:29 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main(void)
{
	// isalpha
	printf("\n---- isalpha ----\n");
	printf("5 isalpha : %d, real : %d\n", ft_isalpha('5'), isalpha('5'));
	printf("p isalpha : %d, real : %d\n", ft_isalpha('p'), isalpha('p'));
	printf("O isalpha : %d, real : %d\n", ft_isalpha('O'), isalpha('O'));
	// isdigit
	printf("\n---- isdigit ----\n");
	printf("5 isdigit : %d, real : %d\n", ft_isdigit('5'), isdigit('5'));
	printf("p isdigit : %d, real : %d\n", ft_isdigit('p'), isdigit('p'));
	printf("0 isdigit : %d, real : %d\n", ft_isdigit('0'), isdigit('0'));
	// isalnum
	printf("\n---- isalnum ----\n");
	printf("5 isalnum : %d, real : %d\n", ft_isalnum('5'), isalnum('5'));
	printf("p isalnum : %d, real : %d\n", ft_isalnum('p'), isalnum('p'));
	printf("D isalnum : %d, real : %d\n", ft_isalnum('D'), isalnum('D'));
	printf("! isalnum : %d, real : %d\n", ft_isalnum('!'), isalnum('!'));
	// isascii
	printf("\n---- isascii ----\n");
	printf("5 isascii : %d, real : %d\n", ft_isascii('5'), isascii('5'));
	printf("¡ isascii : %d, real : %d\n", ft_isascii(0xA1), isascii(0xA1));
	// isprint
	printf("\n---- isprint ----\n");
	printf("5 isprint : %d, real : %d\n", ft_isprint('5'), isprint('5'));
	printf("¡ isprint : %d, real : %d\n", ft_isprint(0xA1), isprint(0xA1));
	// strlen
	printf("\n---- strlen ----\n");
	printf("\"Hello 42\" strlen : %zu, real : %zu\n", ft_strlen("Hello 42"), strlen("Hello 42"));
	printf("\"\" strlen : %zu, real : %zu\n", ft_strlen(""), strlen(""));
	// memset
	printf("\n---- memset ----\n");
	char str_real[50];
	strcpy(str_real, "Hello 42");
	memset(str_real, '-', 20);
	char str_test[50];
	strcpy(str_test, "Hello 42");
	ft_memset(str_test, '-', 20);
	printf("\"Hello 42\" memset ('-', 20) : %s, real : %s\n", str_test, str_real);
	// bzero
	printf("\n---- bzero ----\n");
	char str_real2[50];
	strcpy(str_real2, "Hello 42");
	bzero(str_real2, 6);
	char str_test2[50];
	strcpy(str_test2, "Hello 42");
	ft_bzero(str_test2, 6);
	printf("\"Hello 42\" bzero (6) : %s seventh char : %c, real : %s seventh char : %c\n", str_test2, str_test2[6], str_real2, str_real2[6]);
	// memcpy
	printf("\n---- memcpy ----\n");
	char src_real1[50];
	char src_test1[50];
	char dest_real1[50];
	char dest_test1[50];
	strcpy(src_real1, "Lorem ipsum dolor sit amet");
	strcpy(src_test1, "Lorem ipsum dolor sit amet");
	strcpy(dest_real1, "consectetur adipiscing");
	strcpy(dest_test1, "consectetur adipiscing");
	printf("src content : %s, dest content : %s\n", src_real1, dest_real1);
	memcpy(dest_real1, src_real1, 6);
	ft_memcpy(dest_test1, src_test1, 6);
	printf("memcpy (dest, src, 6) : %s, real : %s\n", dest_test1, dest_real1);
	// memmove
	printf("\n---- memmove ----\n");
	char str_test7[] = "memmove can be very useful......";
	char str_real7[] = "memmove can be very useful......";
	ft_memmove(str_test7 + 20, str_test7 + 15, 11);
	memmove(str_real7 + 20, str_real7 + 15, 11);
	printf("Real : %s\n", str_real7);
	printf("Test : %s\n", str_test7);
	// strlcpy
	printf("\n---- strlcpy ---\n");
	char src_real2[] = "Hello 42 !";
    char dest_real2[19];
    char dest_test2[19];
    int src_real2_s;
    int src_test2_s;
    src_test2_s = ft_strlcpy(dest_test2, src_real2, 5);
    src_real2_s = strlcpy(dest_real2, src_real2, 5);
    printf("Real : Copied '%s' into '%s', length %d\n", src_real2, dest_real2, src_real2_s);
    printf("Test : Copied '%s' into '%s', length %d\n", src_real2, dest_test2, src_test2_s);
	// strlcat
	printf("\n---- strlcat ----\n");
	char src_real6[] = "Hello 42 !";
    char dest_real6[19];
    char dest_test6[19];
    int src_real6_s;
    int src_test6_s;
	strcpy(dest_real6, "Hi, ");
	strcpy(dest_test6, "Hi, ");
    src_test6_s = ft_strlcat(dest_test6, src_real6, 9);
    src_real6_s = strlcat(dest_real6, src_real6, 9);
    printf("Real : Added '%s' : '%s', length %d\n", src_real6, dest_real6, src_real6_s);
    printf("Test : Added '%s' : '%s', length %d\n", src_real6, dest_test6, src_test6_s);
	// toupper
	printf("\n---- toupper ----\n");
	printf("t, H, 5, k, z toupper : %c, %c, %c, %c, %c\n", ft_toupper('t'), ft_toupper('H'), ft_toupper('5'), ft_toupper('k'), ft_toupper('z'));
	// tolower
	printf("\n---- tolower ----\n");
	printf("t, H, 5, k, Z tolower : %c, %c, %c, %c, %c\n", ft_tolower('t'), ft_tolower('H'), ft_tolower('5'), ft_tolower('k'), ft_tolower('Z'));
	// strchr
	printf("\n---- strchr ----\n");
	char str_real3[50];
	strcpy(str_real3, "Hello 42 !");
	char *pos_real1 = strchr(str_real3, 'o');
	char *pos_test1 = ft_strchr(str_real3, 'o');
	printf("str : %s : strchr : %s, real : %s\n", str_real3, pos_test1, pos_real1);
	// strrchr
	printf("\n---- strrchr ----\n");
	char str_real4[50];
	strcpy(str_real4, "Hello 42 ! ! 24 olleH");
	char *pos_real2 = strrchr(str_real4, 'e');
	char *pos_test2 = ft_strrchr(str_real4, 'e');
	printf("str : %s : strrchr : %s, real : %s\n", str_real4, pos_test2, pos_real2);
	// strncmp
	printf("\n---- strncmp ----\n");
	printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "ABCDEF", 2), strncmp("abcdef", "ABCDEF", 2));
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "abcdef", 2), strncmp("abcdef", "abcdef", 2));
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 5), strncmp("abcdef", "abcdey", 5));
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 6), strncmp("abcdef", "abcdey", 6));
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_strncmp("\200", "\0", 6), strncmp("\200", "\0", 6));
	printf("\n---- memchr ----\n");
	// memchr
	char str_real5[50];
	strcpy(str_real5, "Hello 42 !");
	char *pos_real3 = memchr(str_real5, 'o', 5);
	char *pos_test3 = ft_memchr(str_real5, 'o', 5);
	printf("str : %s : memchr : %s, real : %s\n", str_real5, pos_test3, pos_real3);
	// memcmp
	printf("\n---- memcmp ----\n");
	printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "ABCDEF", 2), memcmp("abcdef", "ABCDEF", 2));
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "abcdef", 2), memcmp("abcdef", "abcdef", 2));
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 5), memcmp("abcdef", "abcdey", 5));
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 6), memcmp("abcdef", "abcdey", 6));	
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_memcmp("\200", "\0", 6), memcmp("\200", "\0", 6));
	// strnstr
	printf("\n---- strnstr ----\n");
	printf("hay = 'Hello 42', need = '', len = 4 : %s, real : %s\n", ft_strnstr("Hello 42", "", 4), strnstr("Hello 42", "", 4));
	printf("hay = 'Hello 42', need = 'lo', len = 5 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 5), strnstr("Hello 42", "lo", 5));
	printf("hay = 'Hello 42', need = 'lo', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 100), strnstr("Hello 42", "lo", 100));
	printf("hay = 'Hello 42', need = 'uiok', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "uiok", 100), strnstr("Hello 42", "uiok", 100));
	// atoi
	printf("\n---- atoi ----\n");
	printf("'1456' : %d, real : %d\n", ft_atoi("1456"), atoi("1456"));
	printf("'-1456' : %d, real : %d\n", ft_atoi("-1456"), atoi("-1456"));
	printf("'   +1456' : %d, real : %d\n", ft_atoi("   +1456"), atoi("   +1456"));
	printf("'   +-+1456' : %d, real : %d\n", ft_atoi("   +-+1456"), atoi("   +-+1456"));
	printf("' y  +-+1456' : %d, real : %d\n", ft_atoi(" y  +-+1456"), atoi(" y  +-+1456"));
	printf("'   145o6' : %d, real : %d\n", ft_atoi("   145o6"), atoi("   145o6"));
	printf("'o' : %d, real : %d\n", ft_atoi("o"), atoi("o"));
}
