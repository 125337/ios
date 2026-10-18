// FUN_000e8a28 @0xe8a28


void FUN_000e8a28(double param_1,undefined8 param_2,undefined8 param_3)



{

  bool bVar1;

  bool bVar2;

  byte bVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  float fVar6;

  undefined1 auVar7 [16];

  

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = auVar7._0_8_;

  bVar3 = FUN_002924c0(uVar4,auVar7._8_8_,&cf_SHTM_BANNER_WIDTH_ENABLED);

  if ((DAT_003e7d99 & bVar3 & 1) != 0) {

    fVar6 = (float)FUN_00295460(uVar4,extraout_x1,&cf_SHTM_BANNER_WIDTH);

    bVar1 = false;

    bVar2 = true;

    if (0.0 < fVar6) {

      bVar1 = false;

      bVar2 = true;

      if (!NAN(fVar6)) {

        bVar1 = fVar6 == 1.0;

        bVar2 = 1.0 <= fVar6;

      }

    }

    if ((!bVar2 || bVar1) && (param_1 = param_1 * (1.0 - (double)fVar6), param_1 < 100.0)) {

      param_1 = 100.0;

    }

  }

  (*DAT_003e7e10)(param_1,param_2,param_3);

  bVar3 = FUN_002924c0(uVar4,extraout_x1_00,&cf_SHTM_BANNER_HEIGHT_ENABLED);

  if ((DAT_003e7d99 & bVar3 & 1) != 0) {

    fVar6 = (float)FUN_00295460(uVar4,extraout_x1_01,&cf_SHTM_BANNER_HEIGHT);

    bVar1 = false;

    bVar2 = true;

    if (0.0 < fVar6) {

      bVar1 = false;

      bVar2 = true;

      if (!NAN(fVar6)) {

        bVar1 = fVar6 == 1.0;

        bVar2 = 1.0 <= fVar6;

      }

    }

    if (!bVar2 || bVar1) {

      FUN_00295600(param_2);

      FUN_00295600(param_2);

      FUN_0029e5e0(param_2);

      FUN_0029d4a0(param_2,extraout_x1_02,0);

      FUN_00297e40(param_2);

      auVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_0029f960(auVar7._0_8_,auVar7._8_8_,0);

      _objc_release(auVar7._0_8_);

      FUN_002a6080(param_2,extraout_x1_03,&cf__maskContainerView);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      if (lVar5 != 0) {

        FUN_00295600(lVar5);

        FUN_0029e5e0(lVar5);

        FUN_0029d4a0(lVar5,extraout_x1_04,0);

        FUN_00297e40(lVar5);

        auVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_0029f960(auVar7._0_8_,auVar7._8_8_,0);

        _objc_release(auVar7._0_8_);

      }

      _objc_release(lVar5);

    }

  }

  _objc_release(uVar4);

  return;

}




