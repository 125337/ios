// textStack @ 01eb1150

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoCell::textStack(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_textStack);
}

