// FUN_001d18f0 @0x1d18f0


undefined1  [16] FUN_001d18f0(undefined8 param_1)



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

  if (auVar7._0_8_ == 0) {

    uVar1 = 0;

  }

  else {

    FUN_00299540(DAT_003ea9e0,auVar7._8_8_,param_1);

    uVar1 = _objc_retainAutoreleasedReturnValue();

  }

  uVar2 = _objc_opt_class(&_OBJC_CLASS___NSNumber);

  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

  uVar2 = 0x4036000000000000;

  uVar6 = 0;

  if ((uVar3 & 1) != 0) {

    dVar4 = (double)FUN_00294860(uVar1);

    dVar5 = 14.0;

    if (14.0 <= dVar4) {

      dVar5 = dVar4;

    }

    uVar2 = NEON_fminnm(dVar5,0x4041000000000000);

  }

  _objc_release(uVar1);

  _objc_release(param_1);

  auVar7._8_8_ = uVar6;

  auVar7._0_8_ = uVar2;

  return auVar7;

}




