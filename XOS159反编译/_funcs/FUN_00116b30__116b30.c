// FUN_00116b30 @0x116b30


void FUN_00116b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar2 = FUN_002979c0(param_3);

  FUN_0029d080(uVar1,auVar2._8_8_,auVar2._0_8_,&cf_xzyBubblePetStartFromFront);

  FUN_002a4a40(uVar1);

  DAT_003e82aa = 0;

  _objc_release(uVar1);

  _objc_release(param_3);

  return;

}




