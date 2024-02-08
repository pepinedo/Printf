<div align="center">
    <img src="https://github.com/15Galan/42_project-readmes/blob/master/banners/cursus/projects/ft_printf-light.png?raw=true#gh-light-mode-only" alt="Banner (claro)" />
    <img src="https://github.com/15Galan/42_project-readmes/blob/master/banners/cursus/projects/ft_printf-dark.png?raw=true#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
    This is a straightforward project: recode printf().
    <br>
    <a href='https://profile.intra.42.fr/users/ppinedo-' target="_blank">
        <img alt='42 (oscuro)' src='https://img.shields.io/badge/Málaga-black?style=flat&logo=42&logoColor=white'/>
    </a>
</div>

---

# Mandatory part

<table>
  <tr>
    <th>Program name</th>
    <td><em>libftprintf.a</em></td>
  </tr>
  <tr>
    <th>Turn in files</th>
    <td>Makefile, <code>*.h</code>, <code>*/*.h</code>, <code>*.c</code>, <code>*/*.c</code></td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><em>NAME</em>, <em>all</em>, <em>clean</em>, <em>fclean</em>, <em>re</em></td>
  </tr>
  <tr>
	<th>Arguments</th>
	<td><em>stack a</em>: a list of integers</td>
  </tr>
  <tr style>
    <th>External functions</th>
    <td><code>write()</code>, <code>malloc()</code>, <code>free()</code>, <code>va_start</code>, <code>va_arg</code>, <code>va_copy</code>, <code>va_end</code></td>
  </tr>
  <tr>
	<th>Libft authorized</th>
	<td>Yes</td>
  </tr>  
  <tr>
    <th>Description</th>
    <td>Write a library that contains ft_printf(), a function that will mimic the original printf()</td>
  </tr>
</table>

## Observations

You have to recode the `printf()` function from `libc`.

The prototype of ``ft_printf()`` is: <br>
``int ft_printf(const char *, ...);``

## Requirements
- Don’t implement the buffer management of the original ``printf()``.
- Your function has to handle the following conversions: ``cspdiuxX%``
- Your function will be compared against the original ``printf()``.
- You must use the command ``ar`` to create your library.
Using the ``libtool`` command is forbidden.
- Your ``libftprintf.a`` has to be created at the root of your repository

You have to implement the following conversions:
- ``%c`` Prints a single character.
- ``%s`` Prints a string (as defined by the common C convention).
- ``%p`` The void * pointer argument has to be printed in hexadecimal format.
- ``%d`` Prints a decimal (base 10) number.
- ``%i`` Prints an integer in base 10.
- ``%u`` Prints an unsigned decimal (base 10) number.
- ``%x`` Prints a number in hexadecimal (base 16) lowercase format.
- ``%X`` Prints a number in hexadecimal (base 16) uppercase format.
- ``%%`` Prints a percent sign.
