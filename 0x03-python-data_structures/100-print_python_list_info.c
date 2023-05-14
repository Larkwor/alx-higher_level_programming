#include <Python.h>
#include <stdio.h>

void print_python_list_info(PyObject *p)
{
    PyListObject *list = (PyListObject *)p;
    Py_ssize_t i, size;

    size = PyList_GET_SIZE(p);
    printf("[*] Size of the Python List = %ld\n", size);

    printf("[*] Allocated = %ld\n", list->allocated);

    for (i = 0; i < size; i++)
    {
        printf("Element %ld: ", i);
        printf("%s\n", Py_TYPE(PyList_GetItem(p, i))->tp_name);
    }
}
