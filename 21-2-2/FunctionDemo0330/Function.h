
// 可以给别人看

int getMax(int a, int b);// 如果函数名出现了多个单词，一般第一个单词首字符小写后续单词首字符大写
int factorial(int n); //函数的声明
// factorial(int n)叫做函数签名 Function Signature
int getMin(int a, int b);
int getDayth(int year, int month, int day);

int getMax(int a, int b, int c); // 函数重载：函数名相同，参数表不同（参数个数不同，或参数类型不同， 或参数顺不同）

void swapTwoIntegersByValue(int a, int b);
void swapTwoIntegersByReference(int &a, int &b);
void swapTwoIntegersByPointer(int *a, int *b);

//一维数组作为函数参数
//void initializeArray(int *arr, int len, int value);
void initializeArray(int arr[], int len, int value);
//void printArray(int *arr, int len);
void printArray(int arr[], int len);

// 二维数组传递给函数
void printTwoDimArray(int arr[][3], int row);
