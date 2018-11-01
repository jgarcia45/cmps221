//code courtesy of Melissa Danforth
//example of care that must be taken
//when using arrays

#include <iostream>
using namespace std;

#define MAX_SIZE  10

int main()
{
  int i, score[MAX_SIZE], min;

  // Reading in values into an array
  for(i = 0; i < MAX_SIZE; i++)
  {
    cout << "Enter score " << i + 1 << ": ";
    cin >> score[i];
  }

  // Compute the minimum score
  cout << "\nCalculating the minimum...\n";
  min = score[0];
  for(i = 1; i < MAX_SIZE; i++)
  {
    if(score[i] < min)
    {
      min = score[i];
    }
  }
  cout << "The minimum score is " << min << endl;

  // Trigger an index out of bounds situation
  cout << "\nIndex out of bounds example\n";
  cout << "The max index of score is " << MAX_SIZE - 1 << endl;
  cout << "The value of min is currently " << min << " and ";
  cout << "score[" << MAX_SIZE << "] is also " << score[MAX_SIZE] << endl;
  cout << "The value of i is currently " << i << " and ";
  cout << "score[" << MAX_SIZE+1 << "] is also " << score[MAX_SIZE+1] << endl;
  cout << endl;

  // Show the memory addresses
  cout << "The base address of the array is " << score << endl;
  cout << "The address of min is " << &min << endl;
  cout << "The address of score[" << MAX_SIZE << "] is " << &(score[MAX_SIZE]) << endl;
  cout << "The address of i is " << &i << endl;
  cout << "The address of score[" << MAX_SIZE+1 << "] is " << &(score[MAX_SIZE+1]) << endl;
  cout << endl;

  // Use the index operator with invalid indices to overwrite i and min
  cout << "Setting score[" << MAX_SIZE << "] to 500 and ";
  score[MAX_SIZE] = 500;
  cout << "setting score[" << MAX_SIZE+1 << "] to 999999\n";
  score[MAX_SIZE+1] = 999999;
  cout << "The value of min is now " << min << endl;
  cout << "The value of i is now " << i << endl;

  return 0;
}
