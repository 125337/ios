// FUN_00075588 @0x75588


void FUN_00075588(long param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined1 auVar3 [16];

  

  FUN_002a18a0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar3 = _objc_retainAutoreleasedReturnValue();

  uVar1 = auVar3._0_8_;

  FUN_0029e500((float)*(double *)(param_1 + 0x28),uVar1,auVar3._8_8_,&cf_ttsSpeechRate);

  FUN_002a4a40(uVar1);

  FUN_002a4dc0(*(undefined8 *)(param_1 + 0x20));

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029b140();

  _objc_release(uVar2);

  _objc_release(uVar1);

  return;

}




