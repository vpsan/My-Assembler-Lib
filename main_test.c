/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 22:02:03 by bhatches          #+#    #+#             */
/*   Updated: 2021/09/07 23:45:05 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <string.h>
# include <errno.h>
# include "libasm.h"

void	strlen_test(void)
{
    char    *s0 = "";
    char    *s1 = "1";
    char	*s2 = "22";
    char    *s3 = "333";
	char    *s4 = "Hello, wolrd!";
	char    *s5 = NULL;
    printf("\n################ START strlen_test: ################\n\n");

	printf("--- test 0\n");
    printf("string: s0 = '%s'\n", s0);
	printf("   strlen(s0) = %lu\n", strlen(s0));
	printf("ft_strlen(s0) = %lu\n\n", ft_strlen(s0));
	
	printf("--- test 1\n");
    printf("string: s1 = '%s'\n", s1);
	printf("   strlen(s1) = %lu\n", strlen(s1));
	printf("ft_strlen(s1) = %lu\n\n", ft_strlen(s1));

	printf("--- test 2\n");
    printf("string: s2 = '%s'\n", s2);
	printf("   strlen(s2) = %lu\n", strlen(s2));
	printf("ft_strlen(s2) = %lu\n\n", ft_strlen(s2));

	printf("--- test 3\n");
    printf("string: s3 = '%s'\n", s3);
	printf("   strlen(s3) = %lu\n", strlen(s3));
	printf("ft_strlen(s3) = %lu\n\n", ft_strlen(s3));

	printf("--- test 4\n");
    printf("string: s4 = '%s'\n", s4);
	printf("   strlen(s4) = %lu\n", strlen(s4));
	printf("ft_strlen(s4) = %lu\n\n", ft_strlen(s4));

	// printf("--- test 5\n");
    // printf("string: s5 = '%s'\n", s5);
	// printf("   strlen(s5) = %lu\n", strlen(s5));
	// printf("ft_strlen(s5) = %lu\n\n", ft_strlen(s5));

    printf("################ END strlen_test: ################\n\n");
    return ;
}

void	strcpy_test(void)
{
	char	dst0[100];
    char    *src0 = "";
    char    *src1 = "1";
    char	*src2 = "22";
    char    *src3 = "333";
	char    *src4 = "Hello, wolrd!";
	char	*src5 = NULL;
    printf("\n################ START strcpy_test: ################\n\n");

	printf("--- test 0\n");
    printf("string: src0 = '%s'\n", src0);
	printf("   strcpy(dst0, src0) = %s\n", strcpy(dst0, src0));
	printf("ft_strcpy(dst0, src0) = %s\n\n", ft_strcpy(dst0, src0));
	
	printf("--- test 1\n");
    printf("string: src1 = '%s'\n", src1);
	printf("   strcpy(dst0, src1) = %s\n", strcpy(dst0, src1));
	printf("ft_strcpy(dst0, src1) = %s\n\n", ft_strcpy(dst0, src1));
	
	printf("--- test 2\n");
    printf("string: src2 = '%s'\n", src2);
	printf("   strcpy(dst0, src2) = %s\n", strcpy(dst0, src2));
	printf("ft_strcpy(dst0, src2) = %s\n\n", ft_strcpy(dst0, src2));
	
	printf("--- test 3\n");
    printf("string: src3 = '%s'\n", src3);
	printf("   strcpy(dst0, src3) = %s\n", strcpy(dst0, src3));
	printf("ft_strcpy(dst0, src3) = %s\n\n", ft_strcpy(dst0, src3));
	
	printf("--- test 4\n");
    printf("string: src4 = '%s'\n", src4);
	printf("   strcpy(dst0, src4) = %s\n", strcpy(dst0, src4));
	printf("ft_strcpy(dst0, src4) = %s\n\n", ft_strcpy(dst0, src4));

	// printf("--- test 5\n");
    // printf("string: src4 = '%s'\n", src5);
	// printf("   strcpy(dst0, src5) = %s\n", strcpy(dst0, src5));
	// printf("ft_strcpy(dst0, src5) = %s\n\n", ft_strcpy(dst0, src5));

    printf("################ END strcpy_test: ################\n\n");
    return ;
}

void	strcmp_test(void)
{
    printf("\n################ START strcmp_test: ################\n\n");

	printf("--- test 0\n");
    printf("string: s00 = '%s'\n", "");
    printf("string: s01 = '%s'\n", "");
	printf("   strcmp(s00, s01) = %d\n", strcmp("", ""));
	printf("ft_strcmp(s00, s01) = %d\n\n", ft_strcmp("", ""));
	
	printf("--- test 1\n");
    printf("string: s10 = '%s'\n", "1");
    printf("string: s11 = '%s'\n", "2");
	printf("   strcmp(s10, s11) = %d\n", strcmp("1", "2"));
	printf("ft_strcmp(s10, s11) = %d\n\n", ft_strcmp("1", "2"));
	
	printf("--- test 2\n");
    printf("string: s20 = '%s'\n", "a");
    printf("string: s21 = '%s'\n", "c");
	printf("   strcmp(s20, s21) = %d\n", strcmp("a", "c"));
	printf("ft_strcmp(s20, s21) = %d\n\n", ft_strcmp("a", "c"));
	
	printf("--- test 3\n");
    printf("string: s30 = '%s'\n", "|fadf123a+saz`!*");
    printf("string: s31 = '%s'\n", "|fadf123a+saz`!*");
	printf("   strcmp(s30, s31) = %d\n", strcmp("|fadf123a+saz`!*", "|fadf123a+saz`!*"));
	printf("ft_strcmp(s30, s31) = %d\n\n", ft_strcmp("|fadf123a+saz`!*", "|fadf123a+saz`!*"));
	
	printf("--- test 4\n");
    printf("string: s40 = '%s'\n", "Hello, wolrd!");
    printf("string: s41 = '%s'\n", "Hello, WORLD!");
	printf("   strcmp(s40, s41) = %d\n", strcmp("Hello, wolrd!", "Hello, WORLD!"));
	printf("ft_strcmp(s40, s41) = %d\n\n", ft_strcmp("Hello, wolrd!", "Hello, WORLD!"));
	
	// printf("--- test 5\n");
    // printf("string: s50 = '%s'\n", NULL);
    // printf("string: s51 = '%s'\n", NULL);
	// printf("   strcmp(s50, s51) = %d\n", strcmp(NULL, NULL));
	// printf("ft_strcmp(s50, s51) = %d\n\n", ft_strcmp(NULL, NULL));

    printf("################ END strcmp_test: ################\n\n");
    return ;
}


void	test_write(void)
{
    char    *s0 = "";
    char    *s1 = "1";
    char	*s2 = "22";
    char    *s3 = "333";
	char    *s4 = "Hello, wolrd!";
	char	*s5 = "Hello, wolrd!";
	int		fdX = open("./files_for_testing/file_write.txt", O_WRONLY | O_CREAT);
    printf("\n################ START test_write: ################\n\n");

	printf("--- test 0\n");
    printf("string: s0 = '%s'\n", s0);
	printf(" - write(1, s1, strlen(s0)); \n return value = %zd\n", write(1, s0, strlen(s0)));
	printf(" - ft_write(1, s1, strlen(s0)); \n return value = %zd\n", ft_write(1, s0, strlen(s0)));
	printf("error code: %d\n", errno);
	printf("\n");

	printf("--- test 1\n");
    printf("string: s1 = '%s'\n", s1);
	printf(" - write(1, s1, strlen(s1)); \n return value = %zd\n", write(1, s1, strlen(s1)));
	printf(" - ft_write(1, s1, strlen(s1)); \n return value = %zd\n", ft_write(1, s1, strlen(s1)));
	printf("error code: %d\n", errno);
	printf("\n");

	printf("--- test 3.1\n");
    printf("string: s3 = '%s'\n", s3);
	printf(" - write(1, s3, strlen(s3)); \n return value = %zd\n", write(1, s3, strlen(s3)));
	printf(" - ft_write(1, s3, strlen(s3)); \n return value = %zd\n", ft_write(1, s3, strlen(s3)));
	printf("error code: %d\n", errno);
	printf("\n");

	printf("--- test 3.2\n");
    printf("string: s3 = '%s'\n", s3);
	printf(" - write(fdX, s3, strlen(s3)); \n return value = %zd\n", write(fdX, s3, strlen(s3)));
	printf(" - ft_write(fdX, s3, strlen(s3)); \n return value = %zd\n", ft_write(fdX, s3, strlen(s3)));
	printf("error code: %d\n", errno);
	printf("\n");

	printf("--- test 3.3\n");
    printf("string: s3 = '%s'\n", s3);
	printf(" - write(-1, s3, strlen(s3)); \n return value = %zd\n", write(-1, s3, strlen(s3)));
	printf(" - ft_write(-1, s3, strlen(s3)); \n return value = %zd\n", ft_write(-1, s3, strlen(s3)));
	printf("error code: %d\n", errno);
	perror("errno massage ");
	printf("\n");
	errno = 0;

    printf("################ END test_write: ################\n\n");
    return ;
}

void	test_read(void)
{
    int 	fd0;
	int		fd1; 
	int		fd2; 
	int		fd3;
    char    s00[150];
    char    s01[150];
    char    s10[150];
    char    s11[150];
    char    s20[150];
    char    s21[150];
    char    s30[150];
    char    s31[150];
	fd0 = open("./files_for_testing/file_read_0.txt", O_RDWR);
	fd1 = open("./files_for_testing/file_read_1.txt", O_RDWR);
	fd2 = open("./files_for_testing/file_read_2.txt", O_RDWR);
    printf("\n################ START test_read: ################\n\n");

	printf("--- test 0\n");
    printf("fd0 -> file0 -> ''\n");
	fd0 = open("./files_for_testing/file_read_0.txt", O_RDWR);
	printf("read(fd0, s00, 100); \n return value = %zd\n", read(fd0, s00, 100));
	close(fd0);
	fd0 = open("./files_for_testing/file_read_0.txt", O_RDWR);
	printf("read(fd0, s01, 100); \n return value = %zd\n", ft_read(fd0, s01, 100));
	printf("s00 = %s\n", s00);
	printf("s01 = %s\n", s01);
	printf("error code: %d\n", errno);
	printf("\n");

	printf("--- test 1\n");
    printf("fd1 -> file1 -> 'a'\n");
	fd1 = open("./files_for_testing/file_read_1.txt", O_RDWR);
	printf("read(fd1, s10, 100); \n return value = %zd\n", read(fd1, s10, 1));
	close(fd1);
	fd1 = open("./files_for_testing/file_read_1.txt", O_RDWR);
	printf("read(fd1, s11, 100); \n return value = %zd\n", ft_read(fd1, s11, 1));
	printf("s10 = %s\n", s10);
	printf("s11 = %s\n", s11);
	printf("error code: %d\n", errno);
	printf("\n");

	printf("--- test 2\n");
    printf("fd2 -> file2 -> 'Hellow, wolrd!'\n");
	fd2 = open("./files_for_testing/file_read_2.txt", O_RDWR);
	printf("read(fd2, s20, 100); \n return value = %zd\n", read(fd2, s20, 13));
	close(fd2);
	fd2 = open("./files_for_testing/file_read_2.txt", O_RDWR);
	printf("read(fd2, s21, 100); \n return value = %zd\n", ft_read(fd2, s21, 13));
	printf("s20 = %s\n", s20);
	printf("s21 = %s\n", s21);
	printf("error code: %d\n", errno);
	printf("\n");

	printf("--- test 3\n");
    printf("fd3 = doesnt exist\n");
	fd3 = open("./files_for_testing/file_read_3.txt", O_RDWR);
	printf("read(fd3, s30, 100); \n return value = %zd\n", read(-1, s30, 100));
	close(fd3);
	fd3 = open("./files_for_testing/file_read_3.txt", O_RDWR);
	printf("read(fd3, s31, 100); \n return value = %zd\n", ft_read(-1, s31, 100));
	printf("s30 = %s\n", s30);
	printf("s31 = %s\n", s30);
	printf("error code: %d\n", errno);
	printf("\n");

    printf("################ END test_read: ################\n\n");
    return ;
}


void	test_strdup(void)
{
    char    *s0 = "Test string";
    char    *s1 = "";
    char    *s2 = "long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_long_";
	char    *s3 = "\"fsaf'1";
    printf("\n################ START test_strdup: ################\n\n");

	printf("--- test 0\n");
    printf("string: s0 = '%s'\n", s0);
	printf("   strdup(s0) = %s\n", strdup(s0));
	printf("ft_strdup(s0) = %s\n\n", ft_strdup(s0));

	printf("--- test 1\n");
    printf("string: s1 = '%s'\n", s1);
	printf("   strdup(s1) = %s\n", strdup(s1));
	printf("ft_strdup(s1) = %s\n\n", ft_strdup(s1));

	printf("--- test 2\n");
    printf("string: s2 = '%s'\n", s2);
	printf("   strdup(s2) = %s\n", strdup(s2));
	printf("ft_strdup(s2) = %s\n\n", ft_strdup(s2));

	printf("--- test 3\n");
    printf("string: s3 = '%s'\n", s3);
	printf("   strdup(s3) = %s\n", strdup(s3));
	printf("ft_strdup(s3) = %s\n\n", ft_strdup(s3));

	// printf("--- test 4\n");
    // printf("string: s3 = '%s'\n", NULL);
	// printf("   strdup(s3) = %s\n", strdup(NULL));
	// printf("ft_strdup(s3) = %s\n\n", ft_strdup(NULL));

    printf("################ END test_strdup: ################\n\n");
    return ;
}


int main(void)
{
    strlen_test();
    strcpy_test();
    strcmp_test();
    test_write();
    errno = 0;
    test_read();
    errno = 0;
    test_strdup();
    return 0;
}
