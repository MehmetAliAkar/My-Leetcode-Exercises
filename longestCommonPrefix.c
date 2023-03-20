
char * longestCommonPrefix(char **strs, int strsSize){
	int i;
	int j;
	char *ret_arr;
	ret_arr = (char *)malloc(sizeof(char) * 150);
	i = 1;
	j = 0;
	
	while (strs[0][j])
	{
		i = 1;
		while (i < strsSize)
		{
			if (strs[0][j] != strs[i][j])
			{
				ret_arr[j] = '\0';
				return (ret_arr);
			}
			i++;
		}
		ret_arr[j] = strs[0][j];
		j++;
	}
	ret_arr[j] = '\0';
	
	return (ret_arr);
}

int main(void)
{
	char *strs[150] = {"flower","flow","flight"};
	printf("%s", longestCommonPrefix(strs, 3));
	return (0);
}