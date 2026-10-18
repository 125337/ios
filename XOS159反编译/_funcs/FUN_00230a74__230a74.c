// FUN_00230a74 @0x230a74


void FUN_00230a74(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  double dVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  double dVar11;

  undefined1 auVar12 [16];

  

  if (DAT_003eb0c8 == 0 || DAT_003eb0d0 == 0) {

    return;

  }

  FUN_002a6520();

  lVar2 = _objc_retainAutoreleasedReturnValue();

  lVar1 = DAT_003eb0c0;

  if (lVar2 != 0) {

    lVar1 = lVar2;

  }

  _objc_retain(lVar1);

  _objc_release(lVar2);

  if (lVar1 != 0) {

    FUN_002a5680(lVar1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar2 = FUN_002a5fc0();

    _objc_release(uVar3);

    if (lVar2 == 2) {

      FUN_002a64a0();

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(DAT_003eb0d0,auVar12._8_8_,auVar12._0_8_);

      _objc_release(auVar12._0_8_);

      FUN_0029cb60(0x3feb333333333333,DAT_003eb0d0);

      FUN_00293060(0,0x3fe199999999999a,&_OBJC_CLASS___UIColor);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar12._0_8_;

      FUN_002a1460(DAT_003eb0d0,auVar12._8_8_,uVar3);

    }

    else {

      FUN_00293060(0,0x3fee147ae147ae14,&_OBJC_CLASS___UIColor);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1da0(DAT_003eb0d0,auVar12._8_8_,auVar12._0_8_);

      _objc_release(auVar12._0_8_);

      FUN_0029cb60(0x3ff0000000000000,DAT_003eb0d0);

      FUN_00293060(0x3ff0000000000000,0x3fd6666666666666,&_OBJC_CLASS___UIColor);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar12._0_8_;

      FUN_002a1460(DAT_003eb0d0,auVar12._8_8_,uVar3);

    }

    _objc_release(uVar3);

    dVar8 = 0.5;

    FUN_002a1480(0,DAT_003eb0d0);

    FUN_002925a0(lVar1);

    dVar10 = param_4;

    dVar5 = (double)FUN_0029bb60(lVar1);

    FUN_00298ea0(0x4022000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00388428,

                 &_OBJC_CLASS___UIFont);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar12._0_8_;

    FUN_0029e520(DAT_003eb0d0,auVar12._8_8_,uVar3);

    dVar6 = (double)FUN_002a3dc0(0x405e000000000000,0x4038000000000000,DAT_003eb0d0);

    dVar7 = (double)FUN_00298040(uVar3);

    FUN_00293c60(&_OBJC_CLASS___UIDevice);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    lVar2 = FUN_002a5fa0();

    dVar6 = (double)(long)dVar6;

    if (dVar6 <= 36.0) {

      dVar6 = 36.0;

    }

    dVar7 = (double)(long)dVar7;

    if (dVar7 <= 12.0) {

      dVar7 = 12.0;

    }

    _objc_release(uVar4);

    if (param_3 <= param_4) {

      dVar9 = 30.0;

      if (lVar2 != 1) {

        dVar9 = 20.0;

      }

      dVar9 = dVar5 + dVar9;

      if (30.0 < dVar5) {

        dVar9 = dVar5 + -12.0;

      }

      if (51.0 <= dVar5) {

        dVar9 = dVar5 + -8.0;

      }

    }

    else {

      dVar9 = 30.0;

      if (lVar2 != 1) {

        dVar9 = 10.0;

      }

    }

    dVar5 = (dVar8 + ((param_3 - dVar8) - dVar10) * 0.5) - dVar6 * 0.5;

    dVar8 = dVar8 + 4.0;

    dVar11 = ((param_3 - dVar10) - dVar6) + -4.0;

    dVar10 = dVar8;

    if (dVar8 <= dVar5) {

      dVar10 = dVar5;

    }

    if (dVar11 <= dVar10) {

      dVar10 = dVar11;

    }

    if (dVar8 <= dVar11) {

      dVar5 = dVar10;

    }

    FUN_0029e5e0(dVar5,dVar9,dVar6,dVar7,DAT_003eb0c8);

    FUN_002925a0(DAT_003eb0c8);

    FUN_0029e5e0(DAT_003eb0d0);

    _objc_release(uVar3);

  }

  _objc_release(lVar1);

  return;

}




