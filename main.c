//static int g_fd;
//path = ../dictionary/default.dict

void	open(char *path)
{
	fd = open(path, O_RDONLY); //error when fail
	char *line;
	while(line = read_line(fd))//stop when eof
	{
		key_value(line);
	}
	clse(fd);
}

char	*read_line(int fd)
{
	int		i;
	char	*result;
	result = (char *)malloc(1024);
	while (read(fd, &result[i], 1))
	{
		if (result[i] == '\n')
		{
			result[i] = '\0';
			break ;
		}
		i++;
	}
	return (result);
}

void	key_value(char *line)
{
	
