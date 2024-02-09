#include <iostream>

int	main(int ac, char **av)
{
	std::string s1;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 1);
	for (int x = 1; x < ac; x++)
	{
		s1 = av[x];
		for (std::string::iterator it=s1.begin(); it!=s1.end(); ++it)
			std::cout << (char)toupper(*it);
	}
	std::cout << '\n';
	return (1);
}
