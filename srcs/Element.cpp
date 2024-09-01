#include "../includes/Element.hpp"
#include <iostream>

Element::Element() : task_id(-1), task_name("N/A"), task_description("N/A"), task_finished(false)
{
	std::cout << "DEFAULT Element constructor!" << std::endl;
}

Element::Element(int id, std::string name, std::string description, bool finished) : task_id(id), task_name(name), task_description(description), task_finished(finished)
{
	std::cout << "PARAMETRED Element constructor!" << std::endl;
}

Element::Element(const Element &other) : task_id(other.task_id), task_name(other.task_name), task_description(other.task_description), task_finished(other.task_finished)
{
	std::cout << "COPY Element constructor!" << std::endl;
}

Element &Element::operator=(const Element &other)
{
	std::cout << "COPY Element OPERATOR!" << std::endl;
	if (this == &other)
		return (*this);
	this->task_id = other.task_id;
	this->task_name = other.task_name;
	this->task_description = other.task_description;
	this->task_finished = other.task_finished;
	return (*this);
}

Element::~Element()
{
	std::cout << "Element Destructor!" << std::endl;
}

int Element::get_id()
{
	return (this->task_id);
}

std::string Element::get_name()
{
	return (this->task_name);
}

std::string Element::get_description()
{
	return (this->task_description);
}

bool Element::get_finished()
{
	return (this->task_finished);
}

void Element::set_id(int id)
{
	this->task_id = id;
}

void Element::set_name(std::string name)
{
	this->task_name = name;
}

void Element::set_description(std::string description)
{
	this->task_description = description;
}

void Element::set_finished(bool finished)
{
	this->task_finished =finished;
}

void Element::show_infos()
{
	std::cout << "ID          : " << this->get_id() << std::endl;
	std::cout << "NAME        : " << this->get_name() << std::endl;
	std::cout << "DESCRIPTION : " << this->get_description() << std::endl;
	std::cout << "FINISHED    : " << (this->get_finished() ? "True" : "False") << std::endl;
}