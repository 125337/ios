// wcm_yb_containerSize @0x70740

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBImageCell::wcm_yb_containerSize(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_wcm_yb_containerSize);
}

