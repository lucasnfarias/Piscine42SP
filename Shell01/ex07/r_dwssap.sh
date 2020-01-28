#!/bin/sh

cat /etc/passwd | sed '/^#/d' | sed '1d; n; d' | cut -d ':' -f 1 | rev | sort -r | awk 'NR >=ENVIRON["FT_LINE1"] && NR <=ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed 's/ $/./' | sed 's/ /, /g'
