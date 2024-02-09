#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	std::string s1;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 1);
	for (int x = 1; x < ac; x++)
	{
//		if (x != 1)
//			putchar(' ');
		s1 = av[x];
		for (int y = 0; y < s1.size(); y++)
			putchar(toupper(s1[y]));
	}
	putchar('\n');
	return (1);
}
