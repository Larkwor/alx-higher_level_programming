#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *list_obj) {
    PyListObject *list = (PyListObject *)list_obj;

    Py_ssize_t size = PyList_Size(list_obj);
    printf("[*] Size of the Python List = %ld\n", size);

    Py_ssize_t allocated = list->allocated;
    printf("[*] Allocated = %ld\n", allocated);

    for (Py_ssize_t i = 0; i < size; i++) {
        PyObject *item = PyList_GetItem(list_obj, i);
        const char *type_name = Py_TYPE(item)->tp_name;
        printf("Element %ld: %s\n", i, type_name);
    }
}
