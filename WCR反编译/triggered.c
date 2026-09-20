// triggered @ 0081059c

/* Function Stack Size: 0x10 bytes */

bool WCRefineProfileBgHTMLEdgePress::triggered(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

