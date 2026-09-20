// enableBeautifyOnSelect @ 019e0a58

/* Function Stack Size: 0x10 bytes */

bool WCRefineFontBeautifyViewController::enableBeautifyOnSelect(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_enableBeautifyOnSelect) & 1;
}

