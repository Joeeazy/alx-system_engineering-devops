#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/** prototype func*/
int infinte_while(void);

/**
 * main - a function that creats 5 zombie process
 * Return: 0 on sucess
*/
int main(void)
{
	int child_process = 0;
	pid_t pid;

	while (child_process < 5)
	{
		pid = fork();
		if (!pid)
			break;
		printf("Zombie process created, PID: %i\n", (int)pid);
		child_process++;
	}
	if (pid != 0)
		infinte_while();
	return (0);
}

/**
 * infinite_while - a function that will run an infinite times
 * Return: 0 in the end
*/
int infinte_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
