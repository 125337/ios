// updateCoverSpin @0x27bec8


/* Function Stack Size: 0x10 bytes */



void XZYHomeDockLiquidContainer::updateCoverSpin(ID param_1,SEL param_2)



{

  int iVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined1 auVar6 [16];

  

  iVar1 = FUN_0027c064();

  if (iVar1 == 0) {

    iVar1 = 0;

  }

  else {

    FUN_002a2e40(&objc::class_t::XZYDockPlayerEngine);

    uVar2 = _objc_retainAutoreleasedReturnValue();

    iVar1 = FUN_00299f80();

    _objc_release(uVar2);

  }

  FUN_00299ee0(param_1);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_00291e40();

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_00297e40();

  uVar4 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  _objc_release(uVar2);

  FUN_00291880(uVar4,extraout_x1,&cf_xzy_dock_coverSpin);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  if (iVar1 == 0) {

    if (lVar5 != 0) {

      FUN_0029b260(uVar4,extraout_x1_00,&cf_xzy_dock_coverSpin);

    }

  }

  else if (lVar5 == 0) {

    FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1_00,&cf_transform_rotation_z);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    uVar2 = auVar6._0_8_;

    FUN_0029e600(uVar2,auVar6._8_8_,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf790);

    FUN_002a20a0(uVar2,extraout_x1_01,&PTR__OBJC_CLASS___NSConstantDoubleNumber_003bf800);

    FUN_0029de80(0x4020000000000000,uVar2);

    FUN_00295680(&_OBJC_CLASS___CAMediaTimingFunction,extraout_x1_02,

                 *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_00388658);

    auVar6 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1f00(uVar2,auVar6._8_8_,auVar6._0_8_);

    _objc_release(auVar6._0_8_);

    FUN_002a0cc0(0x7f800000,uVar2);

    FUN_002a0ca0(uVar2,extraout_x1_03,0);

    FUN_00291020(uVar4,extraout_x1_04,uVar2,&cf_xzy_dock_coverSpin);

    _objc_release(uVar2);

  }

  _objc_release(uVar4);

  return;

}




