// FUN_001bc74c @0x1bc74c


void FUN_001bc74c(void)



{

  undefined8 uVar1;

  

  uVar1 = _objc_getClass("UIImageView");

  _MSHookMessageEx(uVar1,"setImage:",FUN_001bc840,&DAT_003e9728);

  _MSHookMessageEx(uVar1,"didMoveToWindow",FUN_001bc8c4,&DAT_003e9730);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_001bc920,&DAT_003e9738);

  uVar1 = _objc_getClass("MainFrameItemView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_001bc94c,&DAT_003e9740);

  uVar1 = _objc_getClass("UIViewController");

  _MSHookMessageEx(uVar1,"viewDidAppear:",FUN_001bc968,&DAT_003e9748);

  _MSHookMessageEx(uVar1,"traitCollectionDidChange:",FUN_001bc984,&DAT_003e9750);

  return;

}




