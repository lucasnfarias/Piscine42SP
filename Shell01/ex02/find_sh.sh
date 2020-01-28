#!/bin/sh

find . -type f -name "*.sh" | sed 's/\(.*\)\///' | cut -d '.' -f 1

#find . -type f -name "*.sh" | rev | cut -d '/' -f 1 | rev | cut -d '.' -f 1 -s
