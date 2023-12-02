#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 1024
int	g_word_count = 0;
int	ft_strlen(char *str);
int	ft_open(char *path);
int	ft_close(int fd);
int	count_lines(char *buf);
char	*get_word(char* buf);
void	count_word(char **dictionary, char *buf);

int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	int	count;
	char	*path;
	char	**dictionary;
	char	buf[BUF_SIZE];
	int	i;
	int	fd;
	
	count = 0;
	path = "./numbers.dict";
	fd = ft_open(path);
	while (read(fd, buf, BUF_SIZE) != 0)
		count += count_lines(buf);
	printf("%d\n",count);
	dictionary = (char**)malloc(sizeof(char*) * count);
	i = 0;
	printf("%p\n",dictionary);
	i = -1;
	while (++i < count)
		printf("%p\n",dictionary[i]);
	ft_close(fd);
	return (0);
}

int	count_lines(char *buf)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < BUF_SIZE)
	{
		if (buf[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	*get_word(char* buf)
{
	char	*str;
	int	i;

	str = (char*)malloc(g_word_count + 1);
	i = 0;
	while (i < g_word_count)
	{
		str[i] = buf[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	count_word(char ***dictionary, char *buf)
{
	int	i;
	int	j;

	i = 0;
	while(read(fd, buf, BUF_SIZE) != 0)
	{
		while (i < BUF_SIZE)
		{
			while (buf[i] != ':' && i < BUF_SIZE)
				i++;
			while(buf[i] >= 32 && buf[i] < 127 && i < BUF_SIZE)
			{
				j = i;
				g_word_count++;
				i++;
			}
			if (buf[i] == '\n')
			{
				*dictionary = get_word(buf + j);
				g_word_count = 0;
				dictionary += 1;
			}
		}
		else
			i++;
	}
}

int	ft_close(int fd)
{
	if(close(fd))
	{
		write(2, "Close error\n", 12);
		return(-1);
	}
	return (0);
}

int	ft_open(char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Open error\n", BUF_SIZE);
		return(-1);
	}
	return (fd);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
