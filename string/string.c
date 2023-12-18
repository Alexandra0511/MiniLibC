// SPDX-License-Identifier: BSD-3-Clause

#include <string.h>
#include <internal/essentials.h>

char *strcpy(char *destination, const char *source)
{
	/* TODO: Implement strcpy(). */
	for(int i = 0; i <= strlen(source); i++) {
		destination[i] = source[i];
	}

	return destination;
}

char *strncpy(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncpy(). */
	for (size_t i = 0; i < len; i++) {
		destination[i] = source[i];
	}

	return destination;
}

char *strcat(char *destination, const char *source)
{
	/* TODO: Implement strcat(). */
	char* ptr = destination + strlen(destination);
    while (*source != '\0') {
        *ptr++ = *source++;
    }
 
    *ptr = '\0';

	return destination;
}

char *strncat(char *destination, const char *source, size_t len)
{
	/* TODO: Implement strncat(). */
	char* ptr = destination + strlen(destination);
    while (len) {
        *ptr++ = *source++;
		len--;
    }
 
    *ptr = '\0';

	return destination;
}

int strcmp(const char *str1, const char *str2)
{
	/* TODO: Implement strcmp(). */
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	for(int i = 0; i < MIN(len1, len2); i++) {
		if (str1[i] < str2[i]) {
			return -1;
		}
		if (str1[i] > str2[i]) {
			return 1;
		}
	}
	if (len2 > len1) {
		return -1;
	}
	else if (len1 > len2) {
		return 1;
	}
	return 0;
}

int strncmp(const char *str1, const char *str2, size_t len)
{
	/* TODO: Implement strncmp(). */
	
	for(size_t i = 0; i < len; i++) {
		if (str1[i] < str2[i]) {
			return -1;
		}
		if (str1[i] > str2[i]) {
			return 1;
		}
	}
	return 0;
}

size_t strlen(const char *str)
{
	size_t i = 0;

	for (; *str != '\0'; str++, i++)
		;

	return i;
}

char *strchr(const char *str, int c)
{
	/* TODO: Implement strchr(). */
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == c) {
			return str + i;
		}
	}

	return NULL;
}

char *strrchr(const char *str, int c)
{
	/* TODO: Implement strrchr(). */
	for (int i = strlen(str); i > 0; i--) {
		if (str[i] == c) {
			return str + i;
		}
	} 
	return NULL;
}

char *strstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strstr(). */
	int ok;
	int index;
	for (int i = 0; i < strlen(str1); i++) {
		if(str1[i] == str2[0]) {
			ok = 1;
			index = i;
			for (int j = i; j < strlen(str2) + i; j++){
				if (str1[j]!= str2[j-i]) {
					ok = 0;
					break;
				}
			}
			if(ok == 1) {
				return str1+index;
			}
		}
	}
	return NULL;
}

char *strrstr(const char *haystack, const char *needle)
{
	/* TODO: Implement strrstr(). */
	int ok;
	int index;
	for (int i = strlen(str1) - strlen(str2); i > 0; i--) {
		if(str1[i] == str2[0]) {
			ok = 1;
			index = i;
			for (int j = i; j < strlen(str2) + i; j++){
				if (str1[j]!= str2[j-i]) {
					ok = 0;
					break;
				}
			}
			if(ok == 1) {
				return str1+index;
			}
		}
	}
	return NULL;
}

void *memcpy(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memcpy(). */
	for (size_t i = 0; i < num; i++) {
		*(char *)(destination +i) = *(char *)(source + i);
	}
	return destination;
}

void *memmove(void *destination, const void *source, size_t num)
{
	/* TODO: Implement memmove(). */
	for (size_t i = 0; i < num; i++) {
		*(char *)(destination +i) = *(char *)(source + i);
	}
	return destination;
}

int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	/* TODO: Implement memcmp(). */
	return strncmp((char*) ptr1, (char*) ptr2, num);
	//return -1;
}

void *memset(void *source, int value, size_t num)
{
	/* TODO: Implement memset(). */
	for (size_t i = 0; i < num; i++) {
		*(char *)(source + i) = value;
	}

	return source;
}
