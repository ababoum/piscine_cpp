/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:19:06 by mababou           #+#    #+#             */
/*   Updated: 2022/03/30 15:36:02 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ICharacter::ICharacter()
{
}

ICharacter::ICharacter( const ICharacter & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ICharacter::~ICharacter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ICharacter &				ICharacter::operator=( ICharacter const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */