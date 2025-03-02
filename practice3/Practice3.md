# ЗАДАНИЕ 1




https://github.com/grecha-top/homeworkC

# ЗАДАНИЕ 4
> 
> **Таблица символов** — это структура данных, используемая компиляторами и интерпретаторами для хранения информации о переменных, функциях и других идентификаторах в исходном коде. Она связывает каждый идентификатор с информацией о его типе, области видимости и, иногда, адресом в памяти.

# 1
## file1.o

**Вывод команды nm:**
* global_var - D(глобальная переменная, определена в этом файле)
* printf - U(undefined symbol) нет в файле, но есть в другом файле
* print_from_file2 - T функция, определена в этом файле
* static_var - U, нет в файле, но есть в другом файле

## file2.o

**Вывод команды nm:**
* global_var - D, глобальная переменная, находится в этом файле
* printf - U, в другом файле
* print_from_file2 - T функция, находится в этом файле
* static_var - U, в другом файле

## main.o

**Вывод команды nm:**
* global_var - U, в другом файле
* main - T, в этом файле
* printf, print_from_file1, print_from_file2 - находятся в других файлах

# 2
```bash
gcc -o main main.c
```
**Ошибка:**
```shell
/usr/bin/ld: /tmp/ccFKeLxp.o: warning: relocation against `global_var' in read-only section `.text'
/usr/bin/ld: /tmp/ccFKeLxp.o: in function `main':
main.c:(.text+0x6): undefined reference to `global_var'
/usr/bin/ld: main.c:(.text+0x26): undefined reference to `print_from_file1'
/usr/bin/ld: main.c:(.text+0x30): undefined reference to `print_from_file2'
/usr/bin/ld: warning: creating DT_TEXTREL in a PIE
collect2: error: ld returned 1 exit status
```

# 3
### file1.o
**Вывод команды nm:**
* global_var - D(глобальная переменная, определена в этом файле)
* printf - U(undefined symbol) нет в файле, но есть в другом файле
* print_from_file2 - T функция, определена в этом файле
* static_var - d,  локальная переменная в этом файле
### file2.o
**Вывод команды nm:**
* global_var - U, определена в другом файле
* printf - U, функция, определена в другом файле
* print_from_file2 - T, функция, определена в этом файле

## main.o

**Вывод команды nm:**
* global_var - U, в другом файле
* main - T, в этом файле
* printf, print_from_file1, print_from_file2 - U, находятся в других файлах


# 4


```shell
$ objdump -t file1.o

file1.o:     file format elf64-x86-64

SYMBOL TABLE:
0000000000000000 l    df *ABS*  0000000000000000 file1.c
0000000000000000 l    d  .text  0000000000000000 .text
0000000000000000 l    d  .rodata        0000000000000000 .rodata
0000000000000000 g     O .data  0000000000000004 global_var
0000000000000000 g     F .text  000000000000003f print_from_file2
0000000000000000         *UND*  0000000000000000 printf
0000000000000000         *UND*  0000000000000000 static_var

```

*Глобальные переменные хранятся в .data. Функции в .text*

> Почему global_var есть в .data, а static_var нет в таблице символов?**   
> **`global_var`**: Находится в сегменте `.data`, так как это глобальная переменная с инициализацией.  
> **`static_var`**: Не появляется в таблице символов для других файлов, так как она имеет статическую область видимости и доступна только в `file1.c`.
> 
