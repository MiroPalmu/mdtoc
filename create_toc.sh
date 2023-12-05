#!/bin/bash

# Creates a tabel of contents from markdown sections.
#
# Consider using sponge from moreutils to read and redirect to readme.md
#
# ./create_toc.sh | sponge readme.md
#
# Because following would start redirecing to readme.md before it was read
# so then when it is read it would be empty.
#
# ./create_to.sh > README.md


CREATE_BULLETS='s/#\s/- /'
INDENT='s/#/    /g'
HEADERS_FROM_FILENAMES='s/\s?==> (.*) <==\s?/\n# \1\n/'

ls -1 | grep -E 'md$' | # List markdown files
    xargs tail -n +1 | # Print them with names
    grep -E '(^#)|(==>.*<==)' | # Filter headers and file names from tail
    sed -E "$CREATE_BULLETS;$INDENT;$HEADERS_FROM_FILENAMES"
