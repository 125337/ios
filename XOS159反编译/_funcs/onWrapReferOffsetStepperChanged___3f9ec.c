// onWrapReferOffsetStepperChanged: @0x3f9ec


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::onWrapReferOffsetStepperChanged_(ID param_1,SEL param_2,ID param_3)



{

  double *pdVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  undefined8 uVar5;

  ID IVar6;

  ID IVar7;

  double dVar8;

  double dVar9;

  undefined1 auVar10 [16];

  undefined1 auVar11 [16];

  undefined8 uVar4;

  

  _objc_retain(param_3);

  dVar8 = (double)FUN_002a6060(param_3);

  dVar9 = -10.0;

  if (-10.0 <= (double)(long)dVar8) {

    dVar9 = (double)(long)dVar8;

  }

  dVar8 = 10.0;

  if (dVar9 <= 10.0) {

    dVar8 = dVar9;

  }

  lVar3 = FUN_002a4e60(param_3);

  pdVar1 = (double *)&DAT_003e74c0;

  if (lVar3 != 10) {

    pdVar1 = (double *)&DAT_003e74c8;

  }

  *pdVar1 = dVar8;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar10 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar10._0_8_;

  pcVar2 = &cf_mesMsgMergeWrapReferOffsetOtherX;

  if (lVar3 != 10) {

    pcVar2 = &cf_mesMsgMergeWrapReferOffsetSelfX;

  }

  FUN_0029de20(dVar8,uVar4,auVar10._8_8_,pcVar2);

  FUN_002a4a40(uVar4);

  DAT_003e74e0 = DAT_003e74e0 + 1;

  FUN_0003dcfc();

  _objc_retain(param_3);

  IVar7 = param_3;

  do {

    if (IVar7 == 0) {

      IVar7 = 0;

LAB_0003fba4:

      _objc_release(IVar7);

      _objc_release(uVar4);

      _objc_release(param_3);

      return;

    }

    uVar5 = _objc_opt_class(&_OBJC_CLASS___UITableViewCell);

    auVar10 = _objc_opt_isKindOfClass(IVar7,uVar5);

    if ((auVar10._0_8_ & 1) != 0) {

      if (dVar8 == 0.0) {

        auVar10._8_8_ = auVar10._8_8_;

        auVar10._0_8_ = &cf_0;

      }

      else {

        FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf____0f);

        auVar10 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar10._8_8_,&cf___pt);

      uVar5 = _objc_retainAutoreleasedReturnValue();

      FUN_002944a0(IVar7);

      auVar11 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar11._0_8_,auVar11._8_8_,uVar5);

      _objc_release(auVar11._0_8_);

      _objc_release(uVar5);

      if (dVar8 != 0.0) {

        _objc_release(auVar10._0_8_);

      }

      goto LAB_0003fba4;

    }

    FUN_002a4880(IVar7);

    IVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release(IVar7);

    IVar7 = IVar6;

  } while( true );

}




