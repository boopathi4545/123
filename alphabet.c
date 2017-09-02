#include<stdtio.h>
void main()
{
char c;
printf("%c enter the character");
scanf("%c",&c);
if(c>='a'&&c<='z')//(c>'A'&&c<='Z')
printf("%c the character is alphabet");
else
printf("%c the character is not alphabet");
}
