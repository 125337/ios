// FUN_000441a8 @0x441a8


void FUN_000441a8(long param_1)



{

  undefined8 uVar1;

  undefined1 auVar2 [16];

  

  FUN_00292400(&_OBJC_CLASS___UIColor);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  FUN_00292fc0(0x3fd999999999999a);

  auVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(*(undefined8 *)(param_1 + 0x20),auVar2._8_8_,auVar2._0_8_);

  _objc_release(auVar2._0_8_);

  _objc_release(uVar1);

  FUN_0029e5e0(0,(*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x38)) + -34.0,

               *(undefined8 *)(param_1 + 0x40),*(double *)(param_1 + 0x38) + 34.0,

               *(undefined8 *)(param_1 + 0x28));

  return;

}




