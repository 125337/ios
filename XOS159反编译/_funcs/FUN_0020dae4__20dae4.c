// FUN_0020dae4 @0x20dae4


void FUN_0020dae4(undefined8 param_1,undefined8 param_2)



{

  bool bVar1;

  long lVar2;

  ulong uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 extraout_x1;

  long lVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  lVar2 = FUN_00297fa0(param_1);

  if ((lVar2 == 0) || (uVar3 = FUN_001ce05c(param_1), (uVar3 & 1) != 0)) {

    lVar2 = 0;

    goto LAB_0020dce8;

  }

  FUN_001cdc90(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_00297fa0();

  if (lVar2 == 0) {

    FUN_001cdf30(param_1);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_0020ddbc(uVar6,param_2);

    lVar2 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    if (DAT_003ea9f0 == 0) {

      FUN_002944c0(&_OBJC_CLASS___NSMutableDictionary);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      lVar2 = DAT_003ea9f0;

      DAT_003ea9f0 = lVar5;

      _objc_release(lVar2);

    }

    FUN_00297da0(uVar4);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf_custom______);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar10._0_8_);

    FUN_00299540(DAT_003ea9f0,extraout_x1,uVar6);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    lVar5 = auVar10._0_8_;

    if (lVar5 == 0) {

      FUN_002965c0(&_OBJC_CLASS___UIImage,auVar10._8_8_,uVar4);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      lVar8 = auVar10._0_8_;

      if (lVar8 == 0) {

LAB_0020dc8c:

        FUN_002992c0(&_OBJC_CLASS___NSNull);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        lVar9 = auVar11._0_8_;

        auVar10._8_8_ = 0;

        auVar10._0_8_ = auVar11._8_8_;

        auVar10 = auVar10 << 0x40;

        bVar1 = true;

      }

      else {

        FUN_00296620(lVar8,auVar10._8_8_,1);

        auVar10 = _objc_retainAutoreleasedReturnValue();

        lVar9 = auVar10._0_8_;

        if (lVar9 == 0) goto LAB_0020dc8c;

        bVar1 = false;

      }

      lVar2 = auVar10._0_8_;

      FUN_002a00a0(DAT_003ea9f0,auVar10._8_8_,lVar9,uVar6);

      if (bVar1) {

        _objc_release(lVar9);

      }

      _objc_release(lVar8);

    }

    else {

      uVar7 = _objc_opt_class();

      uVar3 = _objc_opt_isKindOfClass(lVar5,uVar7);

      lVar2 = lVar5;

      if ((uVar3 & 1) == 0) {

        lVar2 = 0;

      }

      _objc_retain(lVar2);

    }

    _objc_release(lVar5);

  }

  _objc_release(uVar6);

  _objc_release(uVar4);

LAB_0020dce8:

  _objc_release(param_2);

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar2);

  return;

}




