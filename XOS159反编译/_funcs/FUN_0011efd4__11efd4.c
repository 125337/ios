// FUN_0011efd4 @0x11efd4


void FUN_0011efd4(void)



{

  undefined1 uVar1;

  int iVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 uVar4;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  float fVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  undefined1 auVar9 [16];

  

  if ((DAT_003e8338 & 1) == 0) {

    DAT_003e8338 = 1;

    FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    DAT_003e8470 = FUN_00297480(auVar9._0_8_,auVar9._8_8_,&cf_xzyHomeNameplateMethod);

    _objc_release(auVar9._0_8_);

  }

  if ((DAT_003e8339 & 1) != 0) {

    return;

  }

  DAT_003e8339 = 1;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar9._0_8_;

  iVar2 = FUN_002924c0(uVar3,auVar9._8_8_,&cf_coversEnabled);

  uVar4 = extraout_x1;

  uVar1 = 0;

  if (iVar2 != 0) {

    uVar1 = FUN_002924c0(uVar3,extraout_x1,&cf_xzyHomeNameplateEnabled);

    uVar4 = extraout_x1_00;

  }

  DAT_003e83d0 = uVar1;

  auVar9 = FUN_00297480(uVar3,uVar4,&cf_xzyHomeNameplatePosition);

  DAT_003e8358 = auVar9._0_8_;

  fVar5 = (float)FUN_00295460(uVar3,auVar9._8_8_,&cf_xzyHomeNameplateHeight);

  DAT_003e8360 = (double)fVar5;

  fVar5 = (float)FUN_00295460(uVar3,extraout_x1_01,&cf_xzyHomeNameplateOffsetX);

  DAT_003e8368 = (double)fVar5;

  fVar5 = (float)FUN_00295460(uVar3,extraout_x1_02,&cf_xzyHomeNameplateOffsetY);

  DAT_003e8370 = (double)fVar5;

  iVar2 = FUN_002924c0(uVar3,extraout_x1_03,&cf_AmpLifyEnabled);

  dVar7 = 0.0;

  if ((iVar2 != 0) && (iVar2 = FUN_002924c0(uVar3,extraout_x1_04,&cf_CornerBeautify), iVar2 != 0)) {

    FUN_00299520(uVar3,extraout_x1_05,&cf_CornerHorizontalInset);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    dVar8 = 0.0;

    if (auVar9._0_8_ != 0) {

      fVar5 = (float)FUN_00295460(uVar3,auVar9._8_8_,&cf_CornerHorizontalInset);

      dVar8 = (double)fVar5;

    }

    _objc_release(auVar9._0_8_);

    dVar6 = 80.0;

    if (dVar8 <= 80.0) {

      dVar6 = dVar8;

    }

    dVar7 = 0.0;

    if (0.0 <= dVar8) {

      dVar7 = dVar6;

    }

  }

  DAT_003e8450 = dVar7;

  _objc_release(uVar3);

  return;

}




