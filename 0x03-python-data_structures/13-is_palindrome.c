#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: head of singly linked list
 * Return: 1 if palindrome else 0
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head, *prev = NULL, *temp;
    listint_t *first_half = *head, *second_half, *prev_second_half = NULL;
    int is_palindrome = 1;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;

        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }

    if (fast != NULL)
    {
        second_half = slow->next;
    }
    else
    {
        second_half = slow;
    }

    while (second_half != NULL)
    {
        if (first_half->n != second_half->n)
        {
            is_palindrome = 0;
            break;
        }

        temp = second_half->next;
        second_half->next = prev_second_half;
        prev_second_half = second_half;
        second_half = temp;
        first_half = first_half->next;
    }

    while (prev_second_half != NULL)
    {
        temp = prev_second_half->next;
        prev_second_half->next = second_half;
        second_half = prev_second_half;
        prev_second_half = temp;
    }

    return is_palindrome;
}
