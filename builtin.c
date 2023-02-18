#include "shell.h"
/**
* _myexit - exits the shell
* @info: Structure containing potential arguments. Used to maintain
* constant function prototype.
* Return: exits with a given exit status
* (0) if info.argv[0] != "exit"
*/
int _myexit(info_t *info)
{
	int exitcheck;

	if (info->argv[1]) /* If there is an exit arguement */
	{
		exitcheck = _errato(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "illegal number:");

