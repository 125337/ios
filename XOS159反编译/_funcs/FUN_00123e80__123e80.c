// FUN_00123e80 @0x123e80


undefined1  [16] FUN_00123e80(undefined1 param_1 [16],long param_2,long param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined1 auVar4 [16];

  

  uVar3 = param_1._8_8_;

  uVar2 = param_1._0_8_;

  _objc_retain();

  _objc_retain(param_3);

  if ((param_2 != 0) && (param_3 != 0)) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UIView);

    auVar4 = _objc_opt_isKindOfClass(param_2,uVar1);

    if ((auVar4._0_8_ & 1) != 0) {

      FUN_00293720(0,uVar2,0x3ff0000000000000,0x3ff0000000000000,param_2,auVar4._8_8_,param_3);

    }

  }

  _objc_release(param_3);

  _objc_release(param_2);

  auVar4._8_8_ = uVar3;

  auVar4._0_8_ = uVar2;

  return auVar4;

}




