// applyPress:animated: @0x26f6ac


/* Function Stack Size: 0x18 bytes */



void XZYDockLiquidButton::applyPress_animated_(ID param_1,SEL param_2,bool param_3,bool param_4)



{

  uint uVar1;

  int iVar2;

  ulong uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 in_d1;

  undefined1 auVar11 [16];

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined1 auStack_80 [8];

  undefined1 auStack_78 [8];

  

  FUN_002a25c0();

  uVar3 = FUN_002a6000(param_1);

  if ((uVar3 & 1) == 0) {

    if (param_3 != 0) {

      auVar11 = FUN_002946c0(param_1);

      if ((auVar11._0_8_ & 1) == 0) {

        auVar11 = FUN_00292b60(param_1);

      }

      else {

        auVar11._8_8_ = auVar11._8_8_;

        auVar11._0_8_ = 1;

      }

      FUN_0029dda0(param_1,auVar11._8_8_,auVar11._0_8_);

    }

    FUN_002950c0(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar4 == 0) {

      FUN_00298340(param_1);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar4 == 0) {

        auVar11 = _objc_alloc_init(&objc::class_t::XZYDockLumiGlassPress);

        FUN_0029f5e0(param_1,auVar11._8_8_,auVar11._0_8_);

        _objc_release(auVar11._0_8_);

        _objc_initWeak(auStack_78,param_1);

        local_a0 = PTR___NSConcreteStackBlock_003886f0;

        local_98 = 0xc2000000;

        local_90 = FUN_0026fb78;

        puStack_88 = &DAT_003905a8;

        _objc_copyWeak(auStack_80,auStack_78);

        FUN_00298340(param_1);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a03a0(auVar11._0_8_,auVar11._8_8_,&local_a0);

        _objc_release(auVar11._0_8_);

        _objc_destroyWeak(auStack_80);

        _objc_destroyWeak(auStack_78);

      }

      FUN_00298340(param_1);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      uVar5 = FUN_002a5540(param_1);

      if ((param_4 & 1) == 0) {

        FUN_002a0940(uVar5,in_d1,uVar9,extraout_x1,param_3,0);

      }

      else {

        FUN_002a6520(param_1);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a0940(uVar5,in_d1,uVar9,auVar11._8_8_,param_3,auVar11._0_8_ != 0);

        _objc_release(auVar11._0_8_);

      }

    }

    else {

      if (param_3 != 0) {

        uVar3 = FUN_002946c0(param_1);

        if ((uVar3 & 1) == 0) {

          uVar9 = FUN_00292b60(param_1);

        }

        else {

          uVar9 = 1;

        }

        FUN_002950c0(param_1);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        FUN_002a0860(auVar11._0_8_,auVar11._8_8_,uVar9);

        _objc_release(auVar11._0_8_);

      }

      FUN_002950c0(param_1);

      uVar9 = _objc_retainAutoreleasedReturnValue();

      FUN_002a5540(param_1);

      FUN_002a0960(uVar9,extraout_x1_00,param_3,param_4);

    }

    _objc_release(uVar9);

  }

  if (param_4 == 0) {

    uVar1 = 0;

  }

  else {

    FUN_002a6520(param_1);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    if (lVar4 == 0) {

      uVar1 = 0;

    }

    else {

      uVar1 = _UIAccessibilityIsReduceMotionEnabled();

      uVar1 = uVar1 ^ 1;

    }

    _objc_release(lVar4);

  }

  FUN_00292180(&_OBJC_CLASS___CATransaction);

  FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_01,1);

  FUN_0029a600(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029a540();

  lVar4 = _objc_retainAutoreleasedReturnValue();

  if (lVar4 == 0) {

    FUN_0029a600(param_1);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_00297e40();

    uVar6 = _objc_retainAutoreleasedReturnValue();

    uVar10 = FUN_00299860();

    _objc_release(uVar6);

    _objc_release(uVar7);

  }

  else {

    uVar10 = FUN_00299860(lVar4);

  }

  _objc_release(lVar4);

  _objc_release(uVar5);

  _objc_release(uVar9);

  uVar9 = 0;

  if ((param_3 != 0) &&

     ((uVar3 = FUN_002a40c0(param_1), (uVar3 & 1) != 0 ||

      (iVar2 = FUN_00298be0(param_1), iVar2 != 0)))) {

    iVar2 = FUN_002a48c0(param_1);

    uVar9 = 0;

    if (iVar2 == 0) {

      uVar9 = 0x3ff0000000000000;

    }

  }

  FUN_0029a600(param_1);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cb60(uVar9);

  _objc_release(uVar5);

  FUN_0029a600(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  auVar11 = _objc_retainAutoreleasedReturnValue();

  uVar5 = auVar11._0_8_;

  if (uVar1 == 0) {

    FUN_002a44a0(&cf_xzy_liquid_motion_,auVar11._8_8_,&cf_opacity);

    auVar11 = _objc_retainAutoreleasedReturnValue();

    uVar7 = auVar11._0_8_;

    FUN_0029b260(uVar5,auVar11._8_8_,uVar7);

  }

  else {

    FUN_002993c0(uVar10,&_OBJC_CLASS___NSNumber);

    uVar7 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a600(param_1);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002916a0();

    FUN_002993a0(&_OBJC_CLASS___NSNumber);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    uVar6 = 0x3fb47ae147ae147b;

    if (param_3 == 0) {

      uVar6 = 0x3fceb851eb851eb8;

    }

    FUN_0026fc38(uVar6,0,uVar5,uVar7,uVar8);

    _objc_release(uVar8);

    _objc_release(uVar10);

  }

  _objc_release(uVar7);

  _objc_release(uVar5);

  _objc_release(uVar9);

  FUN_002930a0(&_OBJC_CLASS___CATransaction);

  return;

}




