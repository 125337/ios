// FUN_00189a84 @0x189a84


void FUN_00189a84(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("CommonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189be8,&DAT_003e8dc8);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c14,&DAT_003e8dd0);

  uVar1 = _objc_getClass("BizAppReaderMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c40,&DAT_003e8dd8);

  uVar1 = _objc_getClass("WAAppPageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c6c,&DAT_003e8de0);

  uVar1 = _objc_getClass("AppFileMessageCellViewV2");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189c98,&DAT_003e8de8);

  uVar1 = _objc_getClass("AppNodeCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189cc4,&DAT_003e8df0);

  uVar1 = _objc_getClass("AppUrlMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189cf0,&DAT_003e8df8);

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_00189d1c,&DAT_003e8e00);

  uVar1 = _objc_getClass("YYAsyncImageView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00189e28,&DAT_003e8e08);

  return;

}




