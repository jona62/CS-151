#ifndef STACK_H
#define STACK_H

struct Node{
  char data;
  Node* link;
};

Node* createNode(char data,Node* link){
  Node* tmp = new Node;
  tmp->data = data;
  tmp->link = link;
return tmp;
}

struct Stack{
    Node* top;
};

void initialize(Stack& _this){
  _this.top = NULL;
}

bool isEmpty(const Stack& _this){
  return _this.top == NULL;
}

char top(const Stack& _this){
  return _this.top->data;
}

void push(Stack& _this,char item){
  Node* tmp = createNode(item, _this.top);
  _this.top = tmp;
}

void pop(Stack& _this){
  if(!(isEmpty( _this))){
    Node* tmp = _this.top;
      _this.top = _this.top->link;
      delete tmp;
      tmp = NULL;
    }
}
#endif
