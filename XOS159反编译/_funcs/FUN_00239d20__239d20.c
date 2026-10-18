// FUN_00239d20 @0x239d20


void FUN_00239d20(void)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  FUN_00239d80();

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(auVar2._0_8_,auVar2._8_8_,&cf_text);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar2._0_8_);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




