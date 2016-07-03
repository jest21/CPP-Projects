  #include<iostream.h>
  #include<conio.h>
  class queue
  {
   int queue[100],front,rear;
   public:
    queue()
    {
     front=-1;
     rear=-1;
    }
    void inserted()
    {
     rear++;
     if(rear==100)
     {
      cout<<"queue is full";
     }
     if(rear==0)
     {
      cout<<"enter the element:\n";
      cin>>queue[rear];
      front=0;
     }
     else
     {
      cout<<"enter the element:\n";
      cin>>queue[rear];
      }
     }
    void deleted()
    {
     if(rear==-1&&front==-1)
     {
      cout<<"queue is empty\n";
     }
     else
     {
      if(rear==front)
      {
       front=rear=-1;
      }
      else
      {
      front++;
     }
     cout<<"element is deleted\n";
    }
   }
   void display()
   {
    cout<<"the elements are:\n";
    for(int i=front;i<=rear;i++)
    {
     cout<<queue[i]<<" ";
    }
   }
};
void main()
{
 int choice;
 char ch;
 clrscr();
 queue q;
 do
 {
 cout<<"enter 1 for insertion 2 for deletion 3 for display";
 cin>>choice;
 switch(choice)
 {
  case 1:q.inserted();
	 break;
  case 2:q.deleted();
	 break;
  case 3:q.display();
	 break;
 }
 cout<<"do you want to continue\n";
 cin>>ch;
 }
 while(ch=='y'|| ch=='Y');
 getch();
}


