#!/bin/bash

valgrind --leak-check=yes --track-origins=yes --tool=memcheck --read-var-info=yes $1
