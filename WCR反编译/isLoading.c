// isLoading @ 01fcaabc

/* Function Stack Size: 0x10 bytes */

bool WebViewController::isLoading(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isLoading) & 1;
}

