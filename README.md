# Libft

**Libft ([42cursus](https://www.42.fr)) 2023**

**Actual Status :** Finished

**Result :** 125%

This project is about coding a C library. It contains many general-purpose functions that my next programs written for School 42 in C will rely on. This project is dedicated to understanding how standard functions work in С, their implementation and training in their use.

## Part 1 - Libc functions:

This is a set of functions from libc. The functions have the
same prototypes and the same behavior as the originals. They are fully consistent with how they are defined in their man. The only difference is their names. They
start with the prefix ’ft_’. For example, strlen becomes ft_strlen.

![functions libc](https://github.com/AGolz/Libft_42Yerevan/blob/b0ef7a56eee8dd51558501abfef693085bc80a5c/image/Screen%20Shot%202023-01-18%20at%205.48.46%20AM.png)

## Part 2 - Additional Functions:

This is a set of functions that either do not exist in libc,
or that are part of it, but in a different form.

Their detailed description can be found [here](https://github.com/AGolz/Libft_42Yerevan/blob/main/en.subject.pdf), page 7.

Run `make` to compile the **libft** library .

```
$>make
libft.a:   object files are created
libft.a:   libft.a created
```

The makefile also contains the rules `clean` - delete object files, `fclean` - delete everything, including lift.a, and `re` - delete everything, including lift.a and compile again.

## Bonus part:

This is a set of functions for manipulating lists. To represent the list node, the following structure was used, declared in the libfdt.h file:

```
typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}			t_list;
```

The members of the t_list structure are:

• content: data contained in the node.
  void * allows you to store any data.

• next: the address of the next node, or NULL if the next node is the last.

Their detailed description can be found [here](https://github.com/AGolz/Libft_42Yerevan/blob/main/en.subject.pdf), page 11.

Run `make bonus` to compile the **bonus functions** from libft.

```
$>make bonus
bonus object files are created
```

## Unit-test results:

[libft-unit-test](https://github.com/alelievr/libft-unit-test)

![first part](https://github.com/AGolz/Libft_42Yerevan/blob/main/image/Screen%20Shot%202023-01-18%20at%206.50.32%20AM.png)

![second part](https://github.com/AGolz/Libft_42Yerevan/blob/main/image/Screen%20Shot%202023-01-18%20at%206.51.29%20AM.png)

![bonus part](https://github.com/AGolz/Libft_42Yerevan/blob/main/image/Screen%20Shot%202023-01-18%20at%206.52.01%20AM.png)

[libftTester](https://github.com/Tripouille/libftTester)

![first part_tester](https://github.com/AGolz/Libft_42Yerevan/blob/main/image/Screen%20Shot%202023-01-20%20at%2012.35.19%20AM.png)

![bonus part_tester](https://github.com/AGolz/Libft_42Yerevan/blob/main/image/Screen%20Shot%202023-01-20%20at%2012.38.02%20AM.png)


**[Project instructions](/en.subject.pdf)**

Need help: emaksimo@student.42yerevan.am

Special thanks: [tripouille](https://github.com/Tripouille) for the [libftTester](https://github.com/Tripouille/libftTester), [aleliver](https://github.com/alelievr) for the [libft-unit-test](https://github.com/alelievr/libft-unit-test) and [jtoty](https://github.com/jtoty) for the [Libftest](https://github.com/jtoty/Libftest) (:
