/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <jlyu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:52:18 by jlyu              #+#    #+#             */
/*   Updated: 2023/09/14 11:52:23 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl h;

	h.complain("DEBUG");
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
}