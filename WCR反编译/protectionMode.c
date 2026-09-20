// protectionMode @ 019aca7c

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerViewController::protectionMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_protectionMode) & 1;
}

