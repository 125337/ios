// FUN_001f3820 @0x1f3820


undefined1  [16] FUN_001f3820(undefined8 param_1)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  double dVar4;

  double dVar5;

  undefined8 uVar6;

  undefined1 auVar7 [16];

  

  _objc_retain();

  auVar7 = FUN_00297fa0(param_1);

  dVar5 = 0.0;

  uVar6 = 0;

  if ((auVar7._0_8_ != 0) && (DAT_003ea948 != 0)) {

    FUN_00299540(DAT_003ea948,auVar7._8_8_,param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

    uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

    if ((uVar3 & 1) != 0) {

      dVar5 = (double)FUN_00294860(uVar1);

      dVar4 = -160.0;

      if (-160.0 <= dVar5) {

        dVar4 = dVar5;

      }

      uVar6 = 0;

      dVar5 = 16.0;

      if (dVar4 <= 16.0) {

        uVar6 = 0;

        dVar5 = dVar4;

      }

    }

    _objc_release(uVar1);

  }

  _objc_release(param_1);

  auVar7._8_8_ = uVar6;

  auVar7._0_8_ = dVar5;

  return auVar7;

}




