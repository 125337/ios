// setDataCacheCountLimit: @0x8c274

/* Function Stack Size: 0x18 bytes */

void WCMYBIBDataMediator::setDataCacheCountLimit_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  _objc_msgSend_setCountLimit_(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return;
}

