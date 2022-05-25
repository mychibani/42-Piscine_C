cat /etc/passwd | grep -v ^\# | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | awk -v s="$FT_LINE1" -v e="$FT_LINE2" 'NR>=s&&NR<=e' | sed 's/$/,/g' | tr '\n' ' ' | sed 's/, $/./g' | tr -d '\n'
