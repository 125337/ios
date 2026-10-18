// FUN_001312c4 @0x1312c4


void FUN_001312c4(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("UILabel");

  _MSHookMessageEx(uVar1,"setTextColor:",FUN_00131324,&DAT_003e86a8);

  _MSHookMessageEx(uVar1,"setAttributedText:",FUN_001314a8,&DAT_003e86b0);

  return;

}




