#!/bin/zsh

pdftk $1.pdf burst output $1-%d.pdf
