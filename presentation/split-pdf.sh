#!/bin/zsh

pdftk $1 burst output $2-%d.pdf
