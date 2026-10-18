// FUN_0012df1c @0x12df1c


void FUN_0012df1c(void)



{

  undefined8 uVar1;

  long lVar2;

  

  FUN_0012da64();

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e164,&DAT_003e8568);

  uVar1 = _objc_getClass("CommonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e200,&DAT_003e8570);

  uVar1 = _objc_getClass("ImageMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e29c,&DAT_003e8578);

  uVar1 = _objc_getClass("EmoticonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e2f0,&DAT_003e8580);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e344,&DAT_003e8588);

  uVar1 = _objc_getClass("BizAppReaderMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e398,&DAT_003e8590);

  uVar1 = _objc_getClass("WAAppPageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e3ec,&DAT_003e8598);

  uVar1 = _objc_getClass("AppFileMessageCellViewV2");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012e440,&DAT_003e85a0);

  uVar1 = _objc_getClass("RichTextView");

  _MSHookMessageEx(uVar1,"newAsyncDisplayTask",FUN_0012e47c,&DAT_003e85a8);

  uVar1 = _objc_getClass("WCPayTransferMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012eab0,&DAT_003e85b0);

  uVar1 = _objc_getClass("WCPayBaseMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012eb04,&DAT_003e85b8);

  uVar1 = _objc_getClass("WCPayC2CMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012eb58,&DAT_003e85c0);

  lVar2 = _objc_getClass("AppFileMessageCellView");

  if (lVar2 != 0) {

    uVar1 = _objc_getClass("AppFileMessageCellView");

    _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012ebac,&DAT_003e85c8);

  }

  lVar2 = _objc_getClass("FileMessageCellView");

  if (lVar2 != 0) {

    uVar1 = _objc_getClass("FileMessageCellView");

    _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012ebe8,&DAT_003e85d0);

    return;

  }

  return;

}




