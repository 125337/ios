// FUN_00120964 @0x120964


void FUN_00120964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar3 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  _objc_retain(param_3);

  _objc_retain(param_4);

  auVar3 = _objc_alloc_init(&objc::class_t::XZYHomeNPPickerVC);

  uVar1 = auVar3._0_8_;

  FUN_002a1d20(uVar1,auVar3._8_8_,param_2);

  FUN_002a1d00(uVar1,extraout_x1,param_3);

  FUN_0029f900(uVar1,extraout_x1_00,param_4);

  auVar3 = _objc_alloc(&_OBJC_CLASS___UINavigationController);

  auVar3 = FUN_00296dc0(auVar3._0_8_,auVar3._8_8_,uVar1);

  uVar2 = auVar3._0_8_;

  FUN_0029fda0(uVar2,auVar3._8_8_,1);

  FUN_0029a500(param_1,extraout_x1_01,uVar2,1,0);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_4);

  _objc_release(param_3);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




