#include <iostream>

int main()
{
  // stack
  int stack_num = 5;
  std::cout << "stack_num: " << stack_num << std::endl;

  // raw ptrs
  int *num = new int(5);
  std::cout << "num ptr: " << num << std::endl;
  std::cout << "num value: " << *num << std::endl;
  delete num;
  int *arr = new int[5];
  for (int i = 0; i < 5; i++)
  {
    arr[i] = i;
  }
  for (int i = 0; i < 5; i++)
  {
    std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
  }
  delete[] arr;

  // smart ptr
  std::unique_ptr<int> smart_num = std::make_unique<int>(5);
  std::cout << "smart_num ptr: " << smart_num.get() << std::endl;
  std::cout << "smart_num value: " << *smart_num << std::endl;

  // unique ptr semantics
  std::unique_ptr<int> uniquePtr = std::make_unique<int>(10);
  std::cout << "uniquePtr value: " << *uniquePtr << std::endl;
  std::unique_ptr<int> anotherUniquePtr = std::move(uniquePtr);
  if (!uniquePtr)
  {
    std::cout << "uniquePtr is now null" << std::endl;
  }
  std::cout << "anotherUniquePtr value: " << *anotherUniquePtr << std::endl;

  // shared ptr semantics
  std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(20);
  std::shared_ptr<int> sharedPtr2 = sharedPtr1; // Shared ownership
  std::cout << "sharedPtr1 value: " << *sharedPtr1 << std::endl;
  std::cout << "sharedPtr2 value: " << *sharedPtr2 << std::endl;
  std::cout << "sharedPtr1 use count: " << sharedPtr1.use_count() << std::endl;
  std::cout << "sharedPtr2 use count: " << sharedPtr2.use_count() << std::endl;

  return 0;
}