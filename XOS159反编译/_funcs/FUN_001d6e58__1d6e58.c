// FUN_001d6e58 @0x1d6e58


void FUN_001d6e58(undefined8 param_1,undefined8 param_2)



{

  bool bVar1;

  int iVar2;

  int iVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  iVar2 = FUN_001d52f8(param_2);

  iVar3 = _UIAccessibilityIsReduceTransparencyEnabled();

  bVar1 = iVar2 == 0;

  if (iVar3 == 0) {

    uVar4 = 0x3ff0000000000000;

    if (bVar1) {

      uVar4 = 0x3fe70a3d70a3d70a;

    }

    uVar5 = 0x3fb1d14e3bcd35a8;

    if (bVar1) {

      uVar5 = 0x3fbeb851eb851eb8;

    }

    FUN_00293060(uVar4,uVar5,&_OBJC_CLASS___UIColor);

    auVar6 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    uVar4 = 0x3fb47ae147ae147b;

    if (bVar1) {

      uVar4 = 0x3ff0000000000000;

    }

    FUN_00293060(uVar4,0x3feeb851eb851eb8,&_OBJC_CLASS___UIColor);

    auVar6 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_0029e6c0(param_1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  uVar4 = 0x3feae147ae147ae1;

  if (iVar2 == 0) {

    uVar4 = 0x3ff0000000000000;

  }

  FUN_00293060(0x3ff0000000000000,uVar4,&_OBJC_CLASS___UIColor);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a17a0(param_1,auVar6._8_8_,auVar6._0_8_);

  _objc_release(auVar6._0_8_);

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




