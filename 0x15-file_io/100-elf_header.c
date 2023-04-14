#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *magic);
void print_magic(unsigned char *magic);
void print_class(unsigned char *magic);
void print_data(unsigned char *magic);
void print_version(unsigned char *magic);
void print_abi(unsigned char *magic);
void print_osabi(unsigned char *magic);
void print_type(unsigned int type, unsigned char *magic);
void print_entry(unsigned long int entry, unsigned char *magic);
void close_elf(int elf_fd);

/**
* check_elf - Checks if a file is an ELF file.
* @magic: A pointer to an array containing the ELF magic numbers.
*
* Description: If the file is not an ELF file - exit code 98.
*/
void check_elf(unsigned char *magic)
{
int i;

for (i = 0; i < 4; i++)
{
if (magic[i] != 127 && magic[i] != 'E' && magic[i] != 'L' && magic[i] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
* print_magic - Prints the magic numbers of an ELF header.
* @magic: A pointer to an array containing the ELF magic numbers.
*
* Description: Magic numbers are separated by spaces.
*/
void print_magic(unsigned char *magic)
{
int i;

printf("  Magic:   ");

for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x", magic[i]);

if (i == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
* print_class - Prints the class of an ELF header.
* @magic: A pointer to an array containing the ELF class.
*/
void print_class(unsigned char *magic)
{
printf("  Class:                             ");

switch (magic[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", magic[EI_CLASS]);
break;
}
}

/**
* print_data - Prints the data of an ELF header.
* @magic: A pointer to an array containing the ELF class.
*/
void print_data(unsigned char *magic)
{
printf("  Data:                              ");

switch (magic[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", magic[EI_CLASS]);
break;
}
}

/**
* print_version - Prints the version of an ELF header.
* @magic: A pointer to an array containing the ELF version.
*/
void print_version(unsigned char *magic)
{
printf("  Version:                           %d", magic[EI_VERSION]);

switch (magic[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
