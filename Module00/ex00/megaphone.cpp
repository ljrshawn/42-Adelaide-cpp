/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:58:03 by jlyu              #+#    #+#             */
/*   Updated: 2023/08/28 14:58:05 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void print_argv(char *argv[]) {
	while (*argv != nullptr) {
		char *str = *argv;
		while (*str != '\0') {
			*str = std::toupper(*str);
			std::cout << *str;
			str++;
		}
		argv++;
	}
}

int main(int argc, char *argv[]) {
	if (argc > 1) {
		print_argv(++argv);
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return 0;
}