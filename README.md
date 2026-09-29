# Recursive integer power

**42 C fundamentals** · Computes a base raised to a non-negative exponent using a recursive base case.

## Build and use

```sh
cc ft_recursive_power.c -o power
./power
```

The executable uses the example or prompts shown in the source.

## Implementation note

The included main demonstrates 2³. Negative exponents return 0; int arithmetic can overflow.

Source: [`ft_recursive_power.c`](ft_recursive_power.c). [License](LICENSE).
