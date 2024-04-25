#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
//# include  <string>

class	Fixed
{
	private:
		int					m_fpValue;
		static const int	m_fb = 8;
		
	public:
		//default constructor
		Fixed();
		//copy constructor
		Fixed(const Fixed &other);
		//assignation operator overload
		Fixed & operator = (const Fixed &other);
		//destructor
		~Fixed();
		//public m-methods
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
};

#endif