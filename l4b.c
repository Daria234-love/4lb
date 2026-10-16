#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int task1()
{

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Символ: %c\n", c);
    printf("Целое число: %d\n", i);
    printf("Число float: %f\n", f);
    printf("Число double: %e\n", d);

 
    printf("\nВведите символ c: ");
    scanf(" %c", &c); 

    printf("Введите целое число i: ");
    scanf("%d", &i);

    printf("Введите вещественное число float (f): ");
    scanf("%f", &f);

    printf("Введите вещественное число double (d): ");
    scanf("%lf", &d);


    int int_part = (int)f;
    float frac_part = f - int_part;
    printf("\nЗадача 1а:\nВещественное число f: %f\nЦелая часть: %d, Дробная часть: %f\n", f, int_part, frac_part);


    printf("\nЗадача 1б:\nСимвол: '%c'\nДесятичный ASCII-код: %d\nШестнадцатеричный код: 0x%X\n", c, c, c);

    printf("\nЗадача 1в:\nЧисло i = %d\nЗначение 1/i = %f\n", i, 1.0 / i);

    return 0;
}

int task2()
{

    int a = 11;
    int b = 3;


    int x = a / b;
    float y = a / b;
    double z = a / b;

    printf("Результаты неявного преобразования:\n");
    printf("x (int)    = %d\n", x);
    printf("y (float)  = %f\n", y);
    printf("z (double) = %lf\n", z);


    printf("\nПояснение:\n");
    printf("Так как 'a' и 'b' имеют тип int, операция 'a / b' выполняется как целочисленное деление.\n");
    printf("11 / 3 дает результат 3 (остаток отбрасывается).\n");
    printf("Затем это число 3 записывается в переменные. Для y и z оно просто преобразуется в 3.000000.\n");


    printf("\nС явным преобразованием типов:\n");
    printf("((float)a / b)   = %f (Сначала 'a' приводится к float, затем делится на b)\n", (float)a / b);
    printf("((double)a / b)  = %lf (Сначала 'a' приводится к double, затем делится на b)\n", (double)a / b);

  
    printf("((float)(a / b)) = %f (Сначала идет деление int/int, результат 3 приводится к float)\n", (float)(a / b));

    return 0;
}

int task3()
{
    int n;
    int x, y, z;


    printf("Введите трёхзначное число N: ");
    scanf("%d", &n);

  
    if ((n < 100 || n > 999) && (n > -100 || n < -999))
    {
        printf("Ошибка: нужно ввести трёхзначное число.\n");
        return 0;
    }

 
    int temp = n < 0 ? -n : n;

    x = temp % 10;         
    y = (temp / 10) % 10;  
    z = temp / 100;        


    printf("Последняя цифра: %d, первая цифра: %d, сумма цифр: %d, число наоборот: %d\n",
        x, z, (x + y + z), (x * 100 + y * 10 + z));

    return 0;
}

int main()
{
    
    setlocale(LC_ALL, "RUS");

    task1();
    task2();
    task3();

    return 0;
}