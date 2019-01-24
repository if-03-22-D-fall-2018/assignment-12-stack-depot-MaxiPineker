#include <stdlib.h>
#include "stack.h"

struct Node {
    struct Node* next;
    void* data;
};

struct StackImplementation {
    struct Node* head;
    int count;
};

Stack create_stack()
{
  Stack stack = (Stack)smalloc(sizeof(StackImplementation));
  stack->head = 0;
  stack->count = 0;
}
void delete_stack(Stack stack)
{

}
void push_stack(Stack stack, void *data)
{

}
int get_count(Stack stack)
{
  return stack->count;;
}
void* pop_stack(Stack stack)
{

}
void* peek_stack(Stack stack)
{

}
