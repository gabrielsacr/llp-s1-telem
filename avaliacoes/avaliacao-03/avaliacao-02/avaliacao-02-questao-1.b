
#include <stdio.h>
int main2() {
int i;
for(i = 2; i <= 1000; i++) {
if(i % 2 == 0 && i % 5 == 0) {
printf("%d\n", i);
}
}
return 0;
}

