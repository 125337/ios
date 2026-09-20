// entryTipPresented @ 019acb34

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerViewController::entryTipPresented(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_entryTipPresented) & 1;
}

