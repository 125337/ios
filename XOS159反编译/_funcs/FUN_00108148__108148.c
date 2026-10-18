// FUN_00108148 @0x108148


void FUN_00108148(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_00108264,&DAT_003e8178);

  _MSHookMessageEx(uVar1,"getHeadImageView",FUN_0010835c,&DAT_003e8180);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_001083d0,&DAT_003e8188);

  uVar1 = _objc_getClass("CommonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00108768,&DAT_003e8190);

  uVar1 = _objc_getClass("ImageMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0010afe4,&DAT_003e8198);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_0010b25c,&DAT_003e81a0);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0010b2c8,&DAT_003e81a8);

  return;

}




