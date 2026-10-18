// FUN_001e62d4 @0x1e62d4


void FUN_001e62d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  undefined8 uVar1;

  undefined8 extraout_x1;

  undefined1 auVar2 [16];

  

  _objc_retain(param_2);

  auVar2 = _objc_alloc_init(&_OBJC_CLASS___UISwitch);

  uVar1 = auVar2._0_8_;

  FUN_002a0120(uVar1,auVar2._8_8_,param_1);

  FUN_002913c0(uVar1,extraout_x1,param_2,param_3,0x1000);

  _objc_release(param_2);

  _objc_autoreleaseReturnValue(uVar1);

  return;

}




