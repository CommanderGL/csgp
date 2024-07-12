#!/bin/env zsh

python3 -m http.server -d doxygen_output/html > /dev/null 2>&1 &
ls *.h *md | entr -c doxygen Doxyfile
