#include "main.h"

/**
 * print_elf_header - prints the ELF header
 * @e_ident: ELF header identifier
 * @e_type: ELF header type
 * @e_machine: ELF header machine
 * @e_version: ELF header version
 * @e_entry: ELF header entry point
 * @e_phoff: ELF header program header offset
 * @e_shoff: ELF header section header offset
 * @e_flags: ELF header flags
 * @e_ehsize: ELF header size
 * @e_phentsize: ELF header program header entry size
 * @e_phnum: ELF header program header entry count
 * @e_shentsize: ELF header section header entry size
 * @e_shnum: ELF header section header entry count
 * @e_shstrndx: ELF header section header string table index
 */

void print_elf_header(unsigned char *e_ident, unsigned char *e_type,
		      unsigned char *e_machine, unsigned char *e_version,
		      unsigned char *e_entry, unsigned char *e_phoff,
		      unsigned char *e_shoff, unsigned char *e_flags,
		      unsigned char *e_ehsize, unsigned char *e_phentsize,
		      unsigned char *e_phnum, unsigned char *e_shentsize,
		      unsigned char *e_shnum, unsigned char *e_shstrndx)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
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
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
	printf
