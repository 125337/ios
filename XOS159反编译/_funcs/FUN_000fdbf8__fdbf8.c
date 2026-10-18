// FUN_000fdbf8 @0xfdbf8


void FUN_000fdbf8(void)



{

  undefined8 uVar1;

  undefined2 local_438;

  undefined1 uStack_436;

  undefined1 uStack_435;

  undefined1 uStack_434;

  undefined1 local_433;

  long local_38;

  

  local_38 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("CommonMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000fde48,&DAT_003e7f40);

  local_438 = 0x4076;

  uStack_436 = 0x3a;

  uStack_435 = 0;

  _class_addMethod(uVar1,"xzy_applyModelBoundBubbleAfterLayout",FUN_000fdee0,&local_438);

  uVar1 = _objc_getClass("TextMessageCellView");

  _MSHookMessageEx(uVar1,"layoutContentView",FUN_000fe9a8,&DAT_003e7f48);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000fea40,&DAT_003e7f50);

  uVar1 = _objc_getClass("YYAsyncImageView");

  _MSHookMessageEx(uVar1,"setImage:",FUN_000febf8,&DAT_003e7f58);

  _MSHookMessageEx(uVar1,"setHighlightedImage:",FUN_000fece0,&DAT_003e7f60);

  _MSHookMessageEx(uVar1,"setHighlighted:",FUN_000fedc8,&DAT_003e7f68);

  uVar1 = _objc_getClass("BizAppReaderMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000fee34,&DAT_003e7f70);

  uVar1 = _objc_getClass("WAAppPageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000fefc0,&DAT_003e7f78);

  uVar1 = _objc_getClass("BubbleInfo");

  local_438 = 0x4040;

  uStack_436 = 0x3a;

  uStack_435 = 0x40;

  uStack_434 = 0x3f;

  local_433 = 0;

  _class_addMethod(uVar1,"xzy_customBubbleOrOrig:",FUN_000ff14c,&local_438);

  _MSHookMessageEx(uVar1,"getBubbleImage:",FUN_000ff2e4,&DAT_003e7f80);

  _MSHookMessageEx(uVar1,"getBubbleImage:isDarkMode:",FUN_000ff340,&DAT_003e7f88);

  _MSHookMessageEx(uVar1,"getBubbleImage:isDarkMode:useCache:",FUN_000ff3a0,&DAT_003e7f90);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_38) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




