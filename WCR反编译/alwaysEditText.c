// alwaysEditText @ 0197132c

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerPreviewViewController::alwaysEditText(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_alwaysEditText) & 1;
}

