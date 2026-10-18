// FUN_0023966c @0x23966c


void FUN_0023966c(undefined1 param_1 [16],double param_2,undefined8 param_3,long param_4,

                 undefined8 param_5)



{

  undefined8 uVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined8 extraout_x1_13;

  undefined8 extraout_x1_14;

  undefined8 extraout_x1_15;

  undefined8 extraout_x1_16;

  undefined8 extraout_x1_17;

  undefined8 extraout_x1_18;

  undefined8 extraout_x1_19;

  undefined8 extraout_x1_20;

  undefined8 extraout_x1_21;

  double dVar7;

  double dVar8;

  undefined1 auVar9 [16];

  

  _objc_retain();

  _objc_retain(param_4);

  if ((DAT_003e7268 & 1) == 0) {

    FUN_002a62a0(param_3,extraout_x1,&DAT_0000239c);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UILabel);

    auVar9 = _objc_opt_isKindOfClass(uVar1,uVar2);

    uVar2 = auVar9._8_8_;

    if ((auVar9._0_8_ & 1) != 0) {

      FUN_0029e8a0(uVar1,uVar2,1);

      FUN_002a1d60(uVar1,extraout_x1_01,0);

      uVar2 = extraout_x1_02;

    }

    FUN_002a62a0(param_3,uVar2,&DAT_0000239d);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

    auVar9 = _objc_opt_isKindOfClass(lVar5,uVar2);

    if ((auVar9._0_8_ & 1) != 0) {

      FUN_0029e8a0(lVar5,auVar9._8_8_,1);

      FUN_0029ec00(lVar5,extraout_x1_03,0);

    }

  }

  else {

    _objc_retain(param_3);

    FUN_002a62a0(param_3,extraout_x1_00,&DAT_0000239c);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UILabel);

    uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);

    if ((uVar3 & 1) == 0) {

      _objc_alloc(&_OBJC_CLASS___UILabel);

      uVar2 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                           *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

      _objc_release(uVar1);

      FUN_002a1c80(uVar2,extraout_x1_04,&DAT_0000239c);

      FUN_002a23c0(uVar2,extraout_x1_05,0);

      FUN_002a1d80(uVar2,extraout_x1_06,1);

      param_2 = *(double *)PTR__UIFontWeightSemibold_00388430;

      FUN_002a4ac0(0x4026000000000000,&_OBJC_CLASS___UIFont);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029e520(uVar2,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      FUN_00297e40(uVar2);

      auVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_0029f960(auVar9._0_8_,auVar9._8_8_,1);

      _objc_release(auVar9._0_8_);

      FUN_00291380(param_3,extraout_x1_07,uVar2);

      uVar1 = uVar2;

    }

    _objc_release(param_3);

    if (param_4 == 0) {

      FUN_0029e8a0(uVar1,extraout_x1_08,1);

      FUN_002a1d60(uVar1,extraout_x1_11,0);

      FUN_002a62a0(param_3,extraout_x1_12,&DAT_0000239d);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      uVar2 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

      auVar9 = _objc_opt_isKindOfClass(lVar5,uVar2);

      if ((auVar9._0_8_ & 1) != 0) {

        FUN_0029e8a0(lVar5,auVar9._8_8_,1);

      }

    }

    else {

      FUN_0029e8a0(uVar1,extraout_x1_08,0);

      FUN_002a1d60(uVar1,extraout_x1_09,param_4);

      FUN_00238d18();

      auVar9 = _objc_retainAutoreleasedReturnValue();

      lVar5 = auVar9._0_8_;

      if (lVar5 == 0) {

        FUN_002a62a0(param_3,auVar9._8_8_,&DAT_0000239d);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

        auVar9 = _objc_opt_isKindOfClass(lVar4,uVar2);

        if ((auVar9._0_8_ & 1) != 0) {

          FUN_0029e8a0(lVar4,auVar9._8_8_,1);

          FUN_0029ec00(lVar4,extraout_x1_13,0);

        }

        FUN_002a4cc0(&_OBJC_CLASS___UIColor);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(uVar1,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        FUN_002394e8(param_4);

        FUN_00297e40(uVar1);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(param_2 * 0.5);

        _objc_release(uVar2);

        FUN_00297e40(uVar1);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        uVar2 = auVar9._0_8_;

        FUN_0029f960(uVar2,auVar9._8_8_,1);

      }

      else {

        _objc_retain(param_3);

        FUN_002a62a0(param_3,extraout_x1_10,&DAT_0000239d);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        uVar2 = _objc_opt_class(&_OBJC_CLASS___UIImageView);

        uVar3 = _objc_opt_isKindOfClass(lVar4,uVar2);

        if ((uVar3 & 1) == 0) {

          _objc_alloc(&_OBJC_CLASS___UIImageView);

          param_2 = *(double *)(PTR__CGRectZero_00388bf0 + 8);

          lVar6 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,param_2,

                               *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                               *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

          _objc_release(lVar4);

          FUN_002a1c80(lVar6,extraout_x1_14,&DAT_0000239d);

          FUN_002a23c0(lVar6,extraout_x1_15,0);

          FUN_0029d6c0(lVar6,extraout_x1_16,0);

          FUN_00291380(param_3,extraout_x1_17,lVar6);

          lVar4 = lVar6;

        }

        _objc_release(param_3);

        FUN_0029e8a0(lVar4,extraout_x1_18,0);

        FUN_002a3d80(lVar5);

        dVar7 = (double)FUN_002a3d80(lVar5);

        dVar8 = param_2 * 0.5 + -0.5;

        if (dVar8 <= 0.0) {

          dVar8 = 0.0;

        }

        dVar7 = dVar7 * 0.5 + -0.5;

        if (dVar7 <= 0.0) {

          dVar7 = 0.0;

        }

        FUN_0029b880(dVar8,dVar7,dVar8,dVar7,lVar5,extraout_x1_19,1);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029ec00(lVar4,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_0029cf60(uVar1,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        FUN_00297e40(uVar1);

        uVar2 = _objc_retainAutoreleasedReturnValue();

        FUN_0029d820(0);

        _objc_release(uVar2);

        FUN_00297e40(uVar1);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        uVar2 = auVar9._0_8_;

        FUN_0029f960(uVar2,auVar9._8_8_,0);

      }

      _objc_release(uVar2);

      lVar6 = FUN_00297fa0(param_4);

      if (lVar6 == 0) {

        FUN_00292dc0(&_OBJC_CLASS___UIColor);

        auVar9 = _objc_retainAutoreleasedReturnValue();

      }

      else {

        FUN_00239254();

        auVar9 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_002a1da0(uVar1,auVar9._8_8_,auVar9._0_8_);

      _objc_release(auVar9._0_8_);

      FUN_002392b4(param_3,param_5);

      uVar2 = extraout_x1_20;

      if (lVar4 != 0) {

        auVar9 = FUN_002978a0(lVar4);

        uVar2 = auVar9._8_8_;

        if ((auVar9._0_8_ & 1) == 0) {

          FUN_00297120(param_3,uVar2,lVar4,uVar1);

          uVar2 = extraout_x1_21;

        }

      }

      FUN_002925e0(param_3,uVar2,uVar1);

      _objc_release(lVar4);

    }

  }

  _objc_release(lVar5);

  _objc_release(uVar1);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




