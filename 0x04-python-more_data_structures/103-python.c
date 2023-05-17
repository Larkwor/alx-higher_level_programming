#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - Prints info about Python bytes objects
 * @p: Python object
 */
void print_python_bytes(PyObject *p)
{
	PyBytesObject *bytes = (PyBytesObject *)p;
	Py_ssize_t size, i;
	char *string;

	printf("[.] bytes object info\n");

	if (!PyBytes_CheckExact(bytes))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = PyBytes_Size(p);
	string = PyBytes_AsString(p);

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", string);

	printf("  first %ld bytes:", size + 1 > 10 ? 10 : size + 1);
	for (i = 0; i < size + 1 && i < 10; i++)
		printf(" %02hhx", string[i]);
	printf("\n");
}

/**
 * print_python_list - Prints info about Python lists
 * @p: Python object
 */
void print_python_list(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;
	Py_ssize_t size, i;
	PyObject *element;

	printf("[*] Python list info\n");

	if (!PyList_CheckExact(list))
	{
		printf("  [ERROR] Invalid List Object\n");
		return;
	}

	size = PyList_Size(p);

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; i < size; i++)
	{
		element = PyList_GET_ITEM(list, i);
		printf("Element %ld: %s\n", i, Py_TYPE(element)->tp_name);
		if (PyBytes_Check(element))
			print_python_bytes(element);
	}
}
