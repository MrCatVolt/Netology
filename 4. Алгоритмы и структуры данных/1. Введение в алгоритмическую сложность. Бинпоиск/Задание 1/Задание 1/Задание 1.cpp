﻿int calc(int* arr, int size)
{
    int ans = 0;
    for (int i = 1; i < size; i++)
    {
        ans += arr[i] - arr[i - 1];
    }
    return ans;
}

что вижу = это не рекурсия, но цикл.программа будет перебирать каждое значение, а их разницу заносить в сумму т.е.для каждого шага 1 действие.



скорость = О(n), линейная асимптотика.для 100 значений нужно 100 действий.


память = О(1), память константа т.к.мы в коде не запрашиваем дополнительную память.



