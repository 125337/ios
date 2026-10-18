// FUN_000c641c @0xc641c


void FUN_000c641c(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("WCPayBaseMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000c6480,&DAT_003e7c58);

  uVar1 = _objc_getClass("WCPayTransferMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000c671c,&DAT_003e7c60);

  return;

}




