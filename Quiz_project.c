#include<stdio.h>
#include <ctype.h>



int main(){ 
    char que[][100]={"1.What does 'C' mean?",
              "2.Who is the father of C?",
              "3.Keywords are:",
              "4.Is string a datatype in c?",
              "5.Which of the following can not be a variable?",
              "6.Which of the folowing is not a sorting technique?",
              "7.Datatypes in C:",
              "8.Header files start with symbol:",
              "9.Which of the following is pallindrome no.?",
              "10.Which of the following is a searching technique?"
    };
  char opt[][100]={"A.Custom", "B.Code","C.Compile","D.Copy",
                       "A. Steve Jobs", "B. James gosling", "C. Dennis Ritchie", "D. none of these",
                       "A. Reserved", "B. Repeated", "C. Unreserved", "D. none of these",
                       "A. Yes","B. No","C.Both","D.None",
                       "A. name" ,"B. roll_no", "C.a", "D.structure",
                       "A.Merge","B.Bubble","C.Swap","D.Insertion",
                       "A.int","B.float","C.long","D.All of these",
                       "A.@","B.&","C.#","D.$",
                       "A.12345","B.987789","C.34526","D.3567",
                       "A.Cubic","B.Quadratic","C.Linear","D.None of these" };
  char ans [10]={'B','C', 'A', 'B', 'D','C','D','C','B','C'};
  int n =sizeof(que)/sizeof(que[0]);
  char your_ans;
  int marks=0;
  char name;
  char choice;
  printf("                **Welcome to the QUIZ**\n");

  printf("Enter Your Name:\n");
  scanf ("%c",name);

  printf("             Hey %c!!..Let's test your C skils",name);
  
  for(int i=0;i<n;i++){
    printf("....................................................\n");
    printf("%s\n",que[i]);
    printf("....................................................\n");
    for(int j=(i*4);j<((i*4)+4);j++){
        printf("%s\n",opt[j]);
    }
    printf("Your Answer: ");
    scanf("%c",&your_ans);
    scanf("%c");
    
    your_ans = toupper(your_ans);
    
    if(your_ans==ans[i]){
      printf("You got this right!!!\n");
      marks++;
    }
    else{
        printf("Wrong\n");
    }
  }
  
  printf("*************************\n");
  printf("Final Score:%d/%d\n",marks,n);
  printf("***************************\n");
  if(marks==10){
      printf("Congratulations!! You're really good at C");
  }
  return 0;
}