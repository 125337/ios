// setupTableView @0xf8c4


/* Function Stack Size: 0x10 bytes */



void _0x2f19de29::setupTableView(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar8;

  double *pdVar9;

  undefined8 uVar10;

  undefined8 in_d1;

  double in_d2;

  double in_d3;

  double dVar11;

  double dVar12;

  double dVar13;

  double dVar14;

  undefined1 auVar15 [16];

  double local_110 [7];

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  undefined8 local_c0;

  undefined8 local_b8;

  long local_b0;

  

  local_b0 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a6220();

  uVar1 = _objc_retainAutoreleasedReturnValue();

  uVar10 = FUN_002925a0();

  _objc_release(uVar1);

  _objc_alloc(&_OBJC_CLASS___UIView);

  auVar15 = FUN_00296b80(uVar10,in_d1,in_d2,in_d3);

  uVar1 = auVar15._0_8_;

  FUN_0029ce00(uVar1,auVar15._8_8_,0x12);

  FUN_002a4ba0(&_OBJC_CLASS___UIColor);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(uVar1,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  FUN_0029d4a0(uVar1,extraout_x1,1);

  FUN_002a6220(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(auVar15._0_8_,auVar15._8_8_,uVar1);

  _objc_release(auVar15._0_8_);

  FUN_00293040(0x3fd999999999999a,0x3fe3333333333333,0x3ff0000000000000,0x3fdccccccccccccd,

               &_OBJC_CLASS___UIColor);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_110[6] = (double)uVar2;

  FUN_00293040(0x3fe4cccccccccccd,0x3fdccccccccccccd,0x3ff0000000000000,0x3fd999999999999a,

               &_OBJC_CLASS___UIColor);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  local_d8 = uVar3;

  FUN_00293040(0x3fd3333333333333,0x3fe999999999999a,0x3fe6666666666666,0x3fd6666666666666,

               &_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  local_d0 = uVar4;

  FUN_00293040(0x3feccccccccccccd,0x3fe0000000000000,0x3fe6666666666666,0x3fd6666666666666,

               &_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_c8 = uVar5;

  FUN_00293040(0x3fe0000000000000,0x3fe6666666666666,0x3ff0000000000000,0x3fd999999999999a,

               &_OBJC_CLASS___UIColor);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  local_c0 = uVar6;

  FUN_00293040(0x3fe999999999999a,0x3fe3333333333333,0x3feccccccccccccd,0x3fd6666666666666,

               &_OBJC_CLASS___UIColor);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  local_b8 = auVar15._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar15._8_8_,local_110 + 6,6);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar15._0_8_);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  lVar8 = 0;

  local_110[1] = 300.0;

  local_110[0] = 360.0;

  local_110[3] = 330.0;

  local_110[2] = 270.0;

  local_110[5] = 285.0;

  local_110[4] = 240.0;

  pdVar9 = (double *)&DAT_00308058;

  do {

    dVar13 = local_110[lVar8];

    dVar14 = pdVar9[-1];

    dVar11 = *pdVar9;

    _objc_alloc(&_OBJC_CLASS___UIView);

    dVar12 = dVar13 * 0.5;

    auVar15 = FUN_00296b80(in_d2 * dVar14 - dVar12,in_d3 * dVar11 - dVar12,dVar13,dVar13);

    uVar2 = auVar15._0_8_;

    FUN_00299500(uVar7,auVar15._8_8_,lVar8);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar2,auVar15._8_8_,auVar15._0_8_);

    _objc_release(auVar15._0_8_);

    FUN_00297e40(uVar2);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(dVar12);

    _objc_release(uVar3);

    FUN_0029cb60(0x3ff0000000000000,uVar2);

    FUN_00291380(uVar1,extraout_x1_00,uVar2);

    FUN_00291720(uVar10,in_d1,in_d2,in_d3,param_1,extraout_x1_01,uVar2);

    _objc_release(uVar2);

    pdVar9 = pdVar9 + 2;

    lVar8 = lVar8 + 1;

  } while (lVar8 != 6);

  FUN_00294b00(&_OBJC_CLASS___UIBlurEffect,extraout_x1_02,7);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  auVar15 = _objc_alloc(&_OBJC_CLASS___UIVisualEffectView);

  uVar3 = FUN_00296b00(auVar15._0_8_,auVar15._8_8_,uVar2);

  FUN_0029e5e0(uVar10,in_d1,in_d2,in_d3);

  FUN_0029ce00(uVar3,extraout_x1_03,0x12);

  FUN_00291380(uVar1,extraout_x1_04,uVar3);

  auVar15 = _objc_alloc(&_OBJC_CLASS___UITableView);

  auVar15 = FUN_00296be0(uVar10,in_d1,in_d2,in_d3,auVar15._0_8_,auVar15._8_8_,2);

  FUN_002a1c40(param_1,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  FUN_002a4dc0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029dca0(auVar15._0_8_,auVar15._8_8_,param_1);

  _objc_release(auVar15._0_8_);

  FUN_002a4dc0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029db40(auVar15._0_8_,auVar15._8_8_,param_1);

  _objc_release(auVar15._0_8_);

  FUN_002a4dc0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ce00(auVar15._0_8_,auVar15._8_8_,0x12);

  _objc_release(auVar15._0_8_);

  FUN_00296020(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1c20(auVar15._0_8_,auVar15._8_8_,uVar4);

  _objc_release(auVar15._0_8_);

  _objc_release(uVar4);

  FUN_00292dc0(&_OBJC_CLASS___UIColor);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029cf60(auVar15._0_8_,auVar15._8_8_,uVar4);

  _objc_release(auVar15._0_8_);

  _objc_release(uVar4);

  FUN_002a4dc0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a24a0(auVar15._0_8_,auVar15._8_8_,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf830,

               &cf__sectionCornerRadius);

  _objc_release(auVar15._0_8_);

  FUN_002a4dc0(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_0029f380(0,0x403c000000000000,0,0x403c000000000000);

  _objc_release(uVar4);

  FUN_002a6220(param_1);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4dc0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00291380(uVar4,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  _objc_release(uVar4);

  _objc_release(uVar3);

  _objc_release(uVar2);

  _objc_release(uVar7);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_b0) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




