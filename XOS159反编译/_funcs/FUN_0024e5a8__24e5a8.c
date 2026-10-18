// FUN_0024e5a8 @0x24e5a8


undefined1  [16] FUN_0024e5a8(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  double dVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  uVar1 = _objc_opt_class(&_OBJC_CLASS___NSDictionary);

  auVar6 = _objc_opt_isKindOfClass(param_1,uVar1);

  uVar1 = 0;

  uVar5 = 0;

  if ((auVar6._0_8_ & 1) != 0) {

    FUN_00299540(param_1,auVar6._8_8_,&cf_lift);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    auVar6 = _objc_opt_respondsToSelector(uVar2,"doubleValue");

    if ((auVar6._0_8_ & 1) == 0) {

      FUN_00299540(param_1,auVar6._8_8_,&cf_code);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      auVar6 = FUN_0024e370();

      uVar5 = auVar6._8_8_;

      uVar1 = auVar6._0_8_;

      _objc_release(uVar3);

    }

    else {

      dVar4 = (double)FUN_00294860(uVar2);

      uVar1 = NEON_fminnm(dVar4,0x4044000000000000);

      if (dVar4 <= 0.0) {

        uVar1 = 0;

      }

      uVar5 = 0;

    }

    _objc_release(uVar2);

  }

  _objc_release(param_1);

  auVar6._8_8_ = uVar5;

  auVar6._0_8_ = uVar1;

  return auVar6;

}




