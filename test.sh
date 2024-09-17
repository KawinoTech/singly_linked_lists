#!/bin/bash
cat main.h > file.txt
cat main.c | tail -39 >> file.txt
cat engine.c | tail -96 >> file.txt
cat insert@_nth.c | tail -31 >> file.txt
cat free_list.c | tail -13 >> file.txt
cat list_push.c | tail -15 >> file.txt
cat list_pop.c | tail -25 >> file.txt
cat print_list.c | tail -19 >> file.txt
cat user_inp.c | tail -9 >> file.txt
cat del_begin.c | tail -19 >> file.txt
cat new_list.c | tail -21 >> file.txt
