// lab.h
// Purpose: Header file for the Lab class

#ifndef LAB_H
#define LAB_H
#include <iostream>

const std::string BLANK = "";



class Lab
{
    public:
	Lab();
        //void    init();                 // sets up lab, remove dead squirrels
	bool	add(std::string);	// does not allow duplicates
	void	print();		// prints names then enrolled/space
	bool	is_in(std::string);	// is name in this lab
	void	set_title(std::string);	// set title
	std::string	get_title();	// return the current title
	bool	drop(std::string);	// drop a naem from list
	int	get_count();		// how many are enrolled in this lab
	int	get_capacity();		// get maximum enrollment
	void 	expand();
	
    private:
	int 		LAB_SPACE;  // need 'static' for class constants
	std::string	title;
	std::string	*names;
	int		used;
};
#endif

