// isRoot @ 019ac438

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerViewController::isRoot(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isRoot) & 1;
}

