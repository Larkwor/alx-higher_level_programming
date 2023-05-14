#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to the head of the linked list
 * Return: 1 if the linked list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow, *fast, *prev_slow = NULL, *mid = NULL;
    listint_t *second_half, *prev = *head;
    int result = 1;

    if (*head != NULL && (*head)->next != NULL)
    {
        slow = *head;
        fast = *head;

        /* find middle of the linked list */
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            prev_slow = slow;
            slow = slow->next;
        }

        /* odd number of nodes, move slow pointer to the next node */
        if (fast != NULL)
        {
            mid = slow;
            slow = slow->next;
        }

        /* reverse the second half of the linked list */
        second_half = slow;
        prev_slow->next = NULL;
        reverse_list(&second_half);

        /* compare first and second half of the linked list */
        result = compare_lists(*head, second_half);

        /* restore the reversed second half */
        reverse_list(&second_half);

        /* if there was a mid node, put it back */
        if (mid != NULL)
        {
            prev_slow->next = mid;
            mid->next = second_half;
        }
        else
        {
            prev_slow->next = second_half;
        }
    }

    return result;
}

/**
 * reverse_list - reverses a linked list
 * @head: double pointer to the head of the linked list
 * Return: void
 */
void reverse_list(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

/**
 * compare_lists - compares two linked lists for equality
 * @list1: first linked list to compare
 * @list2: second linked list to compare
 * Return: 1 if the linked lists are equal, 0 otherwise
 */
int compare_lists(listint_t *list1, listint_t *list2)
{
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->n != list2->n)
            return 0;
        list1 = list1->next;
        list2 = list2->next;
    }
    return (list1 == NULL && list2 == NULL);
}
