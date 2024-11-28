int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int n = 1;
	int len;
	int result;

	i = 0;
	n = 1;
	result = 0;
	if (str[i] == '-')
	{
		n *= -n;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		i++;
	}
	return (result * n);
}

#include <stdio.h>
#include <stdlib.h>
int ft_atoi_base(const char *str, int str_base);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <string> <base>\n", argv[0]);
        return 1;
    }

    const char *str = argv[1];
    int base = atoi(argv[2]);

    int result = ft_atoi_base(str, base);
    printf("Input: %s (base %d)\nOutput: %d\n", str, base, result);

    return 0;
}
