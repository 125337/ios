// applyAppearance @0x1da0a4


/* Function Stack Size: 0x10 bytes */



void XZYCLGHorizontalOrbButton::applyAppearance(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  FUN_002a5680();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_001d52f8();

  _objc_release(uVar2);

  FUN_00292480(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_1);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_001d6e58(uVar2,uVar3);

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_002369b4();

  auVar6 = _objc_retainAutoreleasedReturnValue();

  lVar4 = auVar6._0_8_;

  *(bool *)(param_1 + (long)_usingThemeIcon) = lVar4 != 0;

  if (lVar4 == 0) {

    FUN_002a4bc0(&_OBJC_CLASS___UIImage,auVar6._8_8_,&cf_magnifyingglass);

    lVar4 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002963a0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00296480();

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  _objc_release(uVar2);

  if (lVar4 != lVar5) {

    FUN_002963a0(param_1);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0029ec00(auVar6._0_8_,auVar6._8_8_,lVar4);

    _objc_release(auVar6._0_8_);

  }

  if (iVar1 == 0) {

    FUN_00293060(0x3fb999999999999a,0x3ff0000000000000,&_OBJC_CLASS___UIColor);

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    FUN_002a64a0();

    uVar2 = _objc_retainAutoreleasedReturnValue();

  }

  FUN_002963a0(param_1);

  auVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(auVar6._0_8_,auVar6._8_8_,uVar2);

  _objc_release(auVar6._0_8_);

  _objc_release(uVar2);

  FUN_0029ff40(param_1);

  _objc_release(lVar4);

  return;

}




