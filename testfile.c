#include <stdio.h>
#include <cpuid.h>
#include <stdint.h>

int
main(int argc, char **argv)
{
 uint32_t eax, ebx, ecx, edx;

 __cpuid(0x0, eax, ebx, ecx, edx);

 printf("CPUID(0x0).EAX=0x%x\n", eax);
 printf("CPUID(0x0).EBX=0x%x\n", ebx);
 printf("CPUID(0x0).ECX=0x%x\n", ecx);
 printf("CPUID(0x0).EDX=0x%x\n", edx);

 return 0;
}
