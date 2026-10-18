// FUN_00188778 @0x188778


void FUN_00188778(void)



{

  int iVar1;

  undefined8 uVar2;

  

  iVar1 = FUN_00188834();

  if (iVar1 != 0) {

    uVar2 = _objc_getClass("MenuButton");

    _MSHookMessageEx(uVar2,"setTargetWidth:",FUN_001888d0,&DAT_003e8d38);

    uVar2 = _objc_getClass("NewMainFrameCell");

    _MSHookMessageEx(uVar2,"onMenuOffsetChange:menuWidth:",FUN_00188920,&DAT_003e8d40);

    _MSHookMessageEx(uVar2,"layoutSubviews",FUN_00188994,&DAT_003e8d48);

    _MSHookMessageEx(uVar2,"updateMoreMenu:",FUN_00188e38,&DAT_003e8d50);

    return;

  }

  return;

}




