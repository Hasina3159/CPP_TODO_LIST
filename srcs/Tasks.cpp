#include "../includes/Tasks.hpp"
#include <iostream>

Tasks::Tasks() : tasks_id(-1), finished(false)
{}

Tasks::Tasks(int id, std::string title, bool finished) : tasks_id(id), finished(finished)
{}

Tasks::Tasks(Tasks &other) : tasks_id(other.tasks_id), tasks_title(other.tasks_title), tasks(other.tasks), finished(other.finished)
{}

Tasks &Tasks::operator=(Tasks &other)
{
	if (this == &other)
		return (*this);
	this->tasks_id = other.tasks_id;
	this->tasks_title = other.tasks_title;
	this->tasks = other.tasks;
	this->finished = other.finished;
	return (*this);
}

Tasks::~Tasks()
{
}

std::vector<Element>	Tasks::get_tasks() const
{
	return (this->tasks);
}

int	Tasks::add_task(std::string name, std::string description, bool finished)
{
	Element task(this->tasks.size(), name, description, finished);
	tasks.push_back(task);
	return (this->tasks.size());
}

bool Tasks::modify_task(int id, std::string name, std::string description, bool finished)
{
	int index = 0;

	if (id < 0 || id >= static_cast<int>(this->tasks.size()))
		return (false);
	while(index < static_cast<int>(this->tasks.size()))
	{
		if (this->tasks.at(index).get_id() == id)
		{
			if (name != "")
				this->tasks.at(index).set_name(name);
			if (description != "")
				this->tasks.at(index).set_description(description);
			this->tasks.at(index).set_finished(finished);
			return (true);
		}
		index++;
	}
	return (false);
}

void	Tasks::show_tasks()
{
	int	index = 0;

	while (index < static_cast<int>(this->tasks.size()))
	{
		this->tasks.at(index).show_infos();
		std::cout << std::endl;
		index++;
	}
}