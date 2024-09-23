#! /bin/sh
output='/home/meredith/Pictures/screenshots/%Y-%m-%d-%T-screenshot.png'

case "$1" in
	"select") scrot "$output" --select --line mode=edge -e 'xclip -selection clipboard -t image/png -i $f' || exit ;;
	"window") scrot "$output" --focused --border || exit ;;
	*) scrot "$output" || exit ;;
esac

notify-send "Screenshot saved."
