// setType: @0x82d78

/* Function Stack Size: 0x18 bytes */

void WCMYBIBCopywriter::setType_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 8) = param_3;
  _objc_msgSend_initCopy(param_1);
  return;
}

