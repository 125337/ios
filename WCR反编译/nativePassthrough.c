// nativePassthrough @ 00359010

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingEntry::nativePassthrough(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

