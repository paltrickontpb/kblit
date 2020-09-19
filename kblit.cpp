#include <stdio.h>
#include <stdlib.h>

#define LEDTOGGLE "\
#/bin/bash \n\
result=$(xset q | grep \"Scroll Lock: off\")\n\
if [ -z \"$result\" ]; then #scroll must be on \n\
echo \"Keyboard Backlight Off\"\n\
xset -led named \"Scroll Lock\"\n\
else\n\
echo \"Keyboard Backlight On\"\n\
xset led named \"Scroll Lock\"\n\
fi\
"

int main() {
system(LEDTOGGLE);
return 0;
}
