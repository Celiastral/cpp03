/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre <eandre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:33:51 by eandre            #+#    #+#             */
/*   Updated: 2024/09/12 16:14:54 by eandre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(const FragTrap &other_FragTrap);
		~FragTrap();
		FragTrap	&operator=(const FragTrap &other_FragTrap);
		void		highFivesGuys(void);
};

#endif