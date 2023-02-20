/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:15:55 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/20 17:07:04 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// intervertit les 2 premiers éléments au sommet de la pile a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
char    swap_a(char *pile_a)
{
    char *tmp;

    *tmp = pile_a[1];
    pile_a[1] = pile_a[0];
    pile_a[0] = *tmp;

    return (*pile_a);
}

// intervertit les 2 premiers éléments au sommet de la pile b.
// Ne fait rien s’il n’y en a qu’un ou aucun
void    swap_b()
{

}

// sa et sb en meme temps
void    swap_s()
{

}

// Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide
void    push_a()
{

}

// Prend le premier élément au sommet de a et le met sur b.
// Ne fait rien si a est vide
void    push_b()
{

}

// Décale d’une position vers le haut tous les élements de la pile a.
// Le premier élément devient le dernier
void    rotate_a()
{

}

// Décale d’une position vers le haut tous les élements de la pile b.
// Le premier élément devient le dernier
void    rotate_b()
{

}

//ra et rb en meme temps
void    rotate_r()
{

}

// Décale d’une position vers le bas tous les élements de
// la pile a. Le dernier élément devient le premier.
void    reverse_rotate_a()
{

}

// Décale d’une position vers le bas tous les élements de
// la pile b. Le dernier élément devient le premier
void    reverse_rotate_b()
{

}

// rra et rrb en meme temps
void    reverse_rotate_r()
{

}