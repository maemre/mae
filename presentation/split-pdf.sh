#!/bin/zsh

pdftk $1.pdf burst output $2-%d.pdf
