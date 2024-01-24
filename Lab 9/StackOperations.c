//declare the size of the array
int a[10];
//define the top to -1
int min = -1;

void isEmpty(){
	if (min==-1){
		printf("Stack is empty.\n");
	}
	else
	printf("Stack is not empty.\n");
}

void push(int element) 
{
	//write your code here to push an element
	if(min==9)
	{
		printf("Stack is overflow.\n");
		return;
	}
	a[++min] = element;
	printf("Successfully pushed.\n");
	
}

void display() 
{
	//Write your code here to display the stack
	int i=min;
	if(i==-1)
	{
		isEmpty();
		return;
	}
	printf("Elements of the stack are : ");
	while(i>-1)
	{
		printf("%d ",a[i]);
		i--;
	}
	printf("\n");
	
}

void pop() 
{
	//write your code here to pop an element
	int j=min;
	if(j==-1)
	{
		printf("Stack is underflow.\n");
		return;
	}
	printf("Popped value = %d\n",a[j]);
	min--;
	
}

void peek()
{
	//write your code here to find the peek element
	if(min==-1)
	{
		printf("Stack is underflow.\n");
		return;
	}
	printf("Peek value = %d\n",a[min]);
	
}
