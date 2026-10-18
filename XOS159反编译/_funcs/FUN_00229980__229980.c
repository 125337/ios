// FUN_00229980 @0x229980


void FUN_00229980(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("MMInputMsgReferView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_00229b6c,&DAT_003eafd8);

  uVar1 = _objc_getClass("BaseMessageCellView");

  _MSHookMessageEx(uVar1,"touchesBegan:withEvent:",FUN_00229ba0,&DAT_003eafe0);

  _MSHookMessageEx(uVar1,"touchesMoved:withEvent:",FUN_00229de8,&DAT_003eafe8);

  _MSHookMessageEx(uVar1,"touchesCancelled:withEvent:",FUN_00229f08,&DAT_003eaff0);

  _MSHookMessageEx(uVar1,"touchesEnded:withEvent:",FUN_00229f94,&DAT_003eaff8);

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_0022a0c0,&DAT_003eb000);

  uVar1 = _objc_getClass("VoiceMessageCellView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_0022a104,&DAT_003eb008);

  _MSHookMessageEx(uVar1,"isTouchInView:",FUN_0022a16c,&DAT_003eb010);

  _MSHookMessageEx(uVar1,"touchesBegan:withEvent:",FUN_0022a178,&DAT_003eb018);

  _MSHookMessageEx(uVar1,"touchesMoved:withEvent:",FUN_0022a3bc,&DAT_003eb020);

  _MSHookMessageEx(uVar1,"touchesCancelled:withEvent:",FUN_0022a4ec,&DAT_003eb028);

  _MSHookMessageEx(uVar1,"touchesEnded:withEvent:",FUN_0022a5d8,&DAT_003eb030);

  _MSHookMessageEx(uVar1,"prepareForReuse",FUN_0022a810,&DAT_003eb038);

  return;

}




