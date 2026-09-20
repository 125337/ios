// isCancelled @ 0197b63c

/* Function Stack Size: 0x10 bytes */

bool WCRFileDirSizeCancelToken::isCancelled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

