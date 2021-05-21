/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hael-bri <hael-bri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:16:10 by rchallie          #+#    #+#             */
/*   Updated: 2021/05/21 18:03:55 by hael-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libasm.h"

void check_strlen()
{
	char *empty = "";
	char *hello_world = "Hello world !";
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	printf("\n================================\n");
	printf("========== FT_STRLEN ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", empty);
	printf("%-20s: 0\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen(empty));	
	printf("%-20s: %zu\n", "libasm", ft_strlen(empty));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: 13\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen(hello_world));	
	printf("%-20s: %zu\n", "libasm", ft_strlen(hello_world));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", alphabet);
	printf("%-20s: 0\n", "expected lenght");
	printf("%-20s: %zu\n", "libc", strlen(alphabet));	
	printf("%-20s: %zu\n", "libasm", ft_strlen(alphabet));
	printf("\nTEST OK\n");
	
	// ------- NULL = SEGFAULT
	// printf("%-20s: \"%s\"\n", "char *", "NULL");
	// printf("%-20s: 0\n", "expected lenght");
	// printf("%-20s\n", "libc");
	// printf("%-20s: %zu\n", "", strlen(NULL));
	// printf("%-20s\n", "libasm");	
	// printf("%-20s: %zu\n", "", ft_strlen(NULL));
	// printf("\n");
}

void clear_buffer(char *buffer, int size)
{
	int i = 0;
	while (i < size)
		buffer[i++] = 0;
}

void check_strcpy()
{
	char buffer[30];
	
	char *empty = "";
	char *hello_world = "Hello world !";
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	printf("\n================================\n");
	printf("========== FT_STRCPY ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char []", empty);
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, empty));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "libasm", ft_strcpy(buffer, empty));	
	clear_buffer(buffer, 30);
	printf("\n");
	printf("%-20s: \"%s\"\n", "char []", hello_world);
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, hello_world));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "libasm", ft_strcpy(buffer, hello_world));	
	clear_buffer(buffer, 30);
	printf("\n");
	printf("%-20s: \"%s\"\n", "char []", alphabet);
	printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, alphabet));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "libasm", ft_strcpy(buffer, alphabet));
	clear_buffer(buffer, 30);
	printf("\n");

	// ------- NULL = SEGFAULT
	// printf("%-20s: \"%s\"\n", "char []", "NULL");
	// printf("%-20s: \"%s\"\n", "libc", strcpy(buffer, NULL));	
	// clear_buffer(buffer, 30);
	// printf("%-20s: \"%s\"\n", "libasm", ft_strcpy(buffer, NULL));
	// clear_buffer(buffer, 30);
	// printf("\n");
}

void check_strcmp()
{
	char *empty = "";
	char *hello_world = "Hello world !";
	char *hello_human = "Hello human !";
	char *hello_world2 = "Hello world !";
	
	printf("\n================================\n");
	printf("========== FT_STRCMP ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: \"%s\"\n", "compared to", hello_human);
	printf("%-20s: \"%d\"\n", "libc", strcmp(hello_world, hello_human));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(hello_world, hello_human));
	
	puts("\nTest empty: ");
	printf("%-20s: \"%d\"\n", "libc", strcmp(empty, empty));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(empty, empty));
	
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: \"%s\"\n", "compared to", hello_world2);
	printf("%-20s: \"%d\"\n", "libc", strcmp(hello_world, hello_world2));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(hello_world, hello_world2));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world2);
	printf("%-20s: \"%s\"\n", "compared to", empty);
	printf("%-20s: \"%d\"\n", "libc", strcmp(empty, hello_world2));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(empty, hello_world2));
	printf("\n");

	// ------- NULL = SEGFAULT
	// printf("%-20s: \"%s\"\n", "char *", hello_world2);
	// printf("%-20s: %s\n", "compared to", "NULL");
	// printf("%-20s: \"%d\"\n", "libc", strcmp(NULL, hello_world2));
	// printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(NULL, empty));
	// printf("\n");
}

void check_write()
{
	// char *hello_world = "Coucou";
	// char *empty = "";

	// printf("\n================================\n");
	// printf("========== FT_WRITE ============\n");
	// printf("================================\n\n");
	// int fd = open("test", O_CREAT| O_RDWR);
	// int fd1 = open("test1", O_CREAT| O_RDWR);
	// printf("%-20s: \"%s\"\n", "char *", hello_world);
	// printf("%-20s: \"Libc:%zu\"\n", "libc", write(fd, hello_world, 7));
	// // printf("\n");
	// printf("%-20s: \"Libasm:%zu\"\n", "libasm", ft_write(fd1, hello_world, 7));
	// printf("\n");
	// printf("%-20s: \"%s\"\n", "char *", empty);
	// printf("%-20s: \"Libc:%zu\"\n", "libc", write(1, empty, 0));
	// // printf("\n");
	// printf("%-20s: \"Libasm:%zu\"\n", "libasm", ft_write(1, empty, 0));
	// printf("\n");
	// printf("%-20s: \"%s\"\n", "char *", "NULL");
	// printf("%-20s: \"Libc:%zu\"\n", "libc", write(-7, NULL, 7));
	// // printf("\n");
	// printf("%-20s: \"Libasm:%zu\"\n", "libasm", ft_write(-7, NULL, 7));
	// // printf("\n");
	

	char		*s=NULL;
	// char		*s1="hello world!";
	int			bz;
	ssize_t		n;
	char		*s1="\xff";
	char		*s2="\xffh";
	
	bz = -12;
	int fd1 = open("test11", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	int fd2 = open("test22", O_CREAT|O_RDWR, S_IRUSR|S_IWUSR);
	n = ft_write(fd1, s, bz);
	printf("ft_errno = %d\n", errno);
	printf("\n|M| ==> the return value of ft_write is |%ld|\n", n);
	n =    write(fd2 , s, bz);
	printf("\n   errno = %d\n", errno);
	printf("\n|O| ==> the return value of    write is |%ld|\n", n);
	close(fd1);
	close(fd2);
	
}

void check_read()
{
	int fd = open("main.c", O_RDONLY);
	char buff1[891];
	int ret = 1;
	printf("\n================================\n");
	printf("========== FT_READ =============\n");
	printf("================================\n\n");
	printf("%-20s: \n", "header main.c | libc ");
	ret = read(fd, buff1, 890);
	buff1[ret] = '\0';
	printf("[return : %d]\n|%s|\n", ret, buff1);
	printf("\n");
	close(fd);
	fd = open("main.c", O_RDONLY);
	clear_buffer(buff1, 891);
	printf("%-20s: \n", "header main.c | libasm ");
	ret = ft_read(fd, buff1, 890);
	buff1[ret] = '\0';
	printf("[return : %d]\n|%s|\n", ret, buff1);
	printf("\n");
	clear_buffer(buff1, 891);
	close(fd);

	fd = open("test", O_RDONLY);
	printf("%-20s: \n", "file test | libc ");
	ret = read(fd, buff1, 890);
	buff1[ret] = '\0';
	printf("[return : %d]\n|%s|\n", ret, buff1);
	printf("\n");
	close(fd);
	fd = open("test", O_RDONLY);
	clear_buffer(buff1, 891);
	printf("%-20s: \n", "file test | libasm ");
	ret = ft_read(fd, buff1, 890);
	buff1[ret] = '\0';
	printf("[return : %d]\n|%s|\n", ret, buff1);
	printf("\n");
	clear_buffer(buff1, 891);
	close(fd);

	fd = open("ft_strlen.s", O_RDONLY);
	printf("%-20s: \n", "ft_strlen.s | libc ");
	ret = read(fd, buff1, 890);
	buff1[ret] = '\0';
	printf("[return : %d]\n|%s|\n", ret, buff1);
	printf("\n");
	close(fd);
	fd = open("ft_strlen.s", O_RDONLY);
	clear_buffer(buff1, 891);
	printf("%-20s: \n", "ft_strlen.s | libasm ");
	ret = ft_read(fd, buff1, 890);
	buff1[ret] = '\0';
	printf("[return : %d]\n|%s|\n", ret, buff1);
	printf("\n");
	clear_buffer(buff1, 891);
	close(fd);
}

void check_strdup()
{
	char *hello_world = "Hello world !";
	char *empty = NULL;
	char *save;
	char *save2;
	
	printf("\n================================\n");
	printf("========== FT_STRDUP ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	save = strdup(hello_world);
	printf("%-20s: \"%s\"\n", "libc", save);
	free(save);
	save = NULL;
	save2 = ft_strdup(hello_world);
	printf("%-20s: \"%s\"\n", "libasm", save2);
	free(save2);
	save2 = NULL;
	printf("\n");

	// printf("%-20s: \"%s\"\n", "char *", empty);
	// save = strdup(empty);
	// printf("%-20s: \"%s\"\n", "libc", save);
	// free(save);
	// save = NULL;
	save2 = ft_strdup(empty);
	puts("hello");
	printf("%-20s: \"%s\"\n", "libasm", save2);
	free(save2);
	save2 = NULL;
	printf("\n");

	// ------- NULL = SEGFAULT
	// printf("%-20s: NULL\n", "char *");
	// save = strdup(NULL);
	// printf("%-20s: \"%s\"\n", "libc", save);
	// free(save);
	// save = NULL;
	// save2 = ft_strdup(NULL);
	// printf("%-20s: \"%s\"\n", "libasm", save2);
	// free(save2);
	// save2 = NULL;
	// printf("\n");
}

int main()
{
	// check_strlen();
	// check_strcpy();
	// check_strcmp();
	// check_write();
	// check_read();
	check_strdup();
}