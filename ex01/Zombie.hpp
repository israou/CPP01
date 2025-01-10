/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:24:19 by ichaabi           #+#    #+#             */
/*   Updated: 2025/01/10 21:43:46 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();//constructeur par default pour le tableau de zombie sans nom
		Zombie(std::string name);//constructeur pour le zombie avec nom
		~Zombie(void);
		void	setName(std::string name);
		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);
#endif
