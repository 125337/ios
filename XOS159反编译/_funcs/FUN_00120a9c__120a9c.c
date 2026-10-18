// FUN_00120a9c @0x120a9c


void FUN_00120a9c(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("CommonMessageViewModel");

  _MSHookMessageEx(uVar1,"rowHeight",FUN_00120c4c,&DAT_003e8378);

  uVar1 = _objc_getClass("TextMessageViewModel");

  _MSHookMessageEx(uVar1,"rowHeight",FUN_00120cbc,&DAT_003e8380);

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_00120d34,&DAT_003e8388);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_001211f8,&DAT_003e8390);

  uVar1 = _objc_getClass("CommonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00121290,&DAT_003e8398);

  uVar1 = _objc_getClass("ImageMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_001212d4,&DAT_003e83a0);

  uVar1 = _objc_getClass("EmoticonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00121318,&DAT_003e83a8);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0012135c,&DAT_003e83b0);

  uVar1 = _objc_getClass("BizAppReaderMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_001213a0,&DAT_003e83b8);

  uVar1 = _objc_getClass("WAAppPageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_001213e4,&DAT_003e83c0);

  uVar1 = _objc_getClass("AppUrlMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00121428,&DAT_003e83c8);

  return;

}




