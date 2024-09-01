#ifndef TASKS_HPP
# define TASKS_HPP

#include <string>
#include <vector>
#include "Element.hpp"

class Tasks
{
private:
	int                     tasks_id;
	std::string				tasks_title;
	std::vector<Element>    tasks;
	bool                    finished;
public:
	Tasks();
	Tasks(int id, std::string title, bool finished);
	Tasks(Tasks &other);
	Tasks &operator=(Tasks &other);
	~Tasks();
	std::vector<Element>    get_tasks() const;
	Element					&remove_task(int id);
	bool					modify_task(int id, std::string name, std::string description, bool finished);
	int						add_task(std::string name, std::string description, bool finished);
	void					show_tasks();
};

#endif