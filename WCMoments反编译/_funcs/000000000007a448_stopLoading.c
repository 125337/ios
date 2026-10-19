// stopLoading @0x7a448

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::stopLoading(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  _objc_msgSend_setLoadingStatus_(param_1,param_2,0);
  return;
}

