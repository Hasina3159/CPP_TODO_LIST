#ifndef ELEMENT_HPP
# define ELEMENT_HPP

#include <string>

class Element
{
private:
	int			task_id;
	std::string task_name;
	std::string task_description;
	bool		task_finished;
public:
	Element();
	Element(int id, std::string name, std::string description, bool finished);
	Element(const Element &other);
	Element &operator=(const Element &other);
	~Element();
	int 		get_id();
	std::string	get_name();
	std::string	get_description();
	bool		get_finished();
	void 		set_id(int id);
	void		set_name(std::string name);
	void		set_description(std::string description);
	void		set_finished(bool finished);
	void		show_infos();
};

#endif