#include <iostream>
#include "../includes/Tasks.hpp"
#include "../includes/Element.hpp"

int main(void)
{
	Tasks task;
	task.add_task("TACHE1", "JUST SOME RANDOM TEXT", false);
	task.add_task("TACHE2", "JUST SOME RANDOM TEXT2", true);
	task.show_tasks();
	task.modify_task(0, "MODIFIED TASK", "", false);
	task.show_tasks();
	return (0);
}