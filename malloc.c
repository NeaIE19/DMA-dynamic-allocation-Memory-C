#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char name[50];
  char address[50];
} myData;

const char *getString();
void createArray();
//char *getStringfromStruct();
void getStringfromStruct(myData *personal);
void displaystringfromStruct(myData *personal);
void ddfds();

int main(int argc, char const *argv[])
{
  myData *personal, displaypersonal;
  personal = &displaypersonal;

  getStringfromStruct(personal);
  displaystringfromStruct(&displaypersonal);

  return 0;
}

const char *getString()
{
  int size = 5;
  char *stringArrays = (char *) malloc(size* sizeof(char));
  *(stringArrays + 1) = 't';
  *(stringArrays + 2) = 'r';
  *(stringArrays + 3) = 'q';
  *(stringArrays + 4) = 'w';
  for(int i = 0; i < size; i++)
  {
    *(stringArrays + i) = 'e';
  }
  return stringArrays;
}

void getStringfromStruct(myData *PersonData)
{
  int manyData = 1;
  printf("enter the number of records : ");
  PersonData = (myData *) malloc(sizeof(myData) * manyData);
  for(int i = 0; i < manyData; i++)
  {
    scanf("%s %s", (PersonData + i)->name, (PersonData + i)->address);
  }
  

}

void displaystringfromStruct(myData *PersonData)
{
  int manyData = 1;
//PersonData = (myData *) malloc(sizeof(myData) * manyData);
  for(int i =0; i < manyData; i++){
    printf("my name : %s\n my address : %s\n", (PersonData + i)->name,
        (PersonData + i)->address);
  }
}


void ddfds()
{
   int n, i, sum = 0;
    printf("enter the elements A: ");
    scanf("%d", &n);
    int *pointer = (int *)malloc(n * sizeof(int));
    if (pointer == NULL)
    {
        puts("sorry! unable to allocate memory");
        exit(0);
    }
    printf("enter the elements of arrays : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", pointer + i);
        sum += *(pointer + i);

    }
    for(int i = 0; i < n; i++)
    {
      printf("%d\t", *(pointer + i));
    }
    puts("\n");
    printf("Sum = %d", sum);
    free(pointer);
  
}
