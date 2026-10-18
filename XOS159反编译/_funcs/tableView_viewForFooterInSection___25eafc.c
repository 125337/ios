// tableView:viewForFooterInSection: @0x25eafc


/* Function Stack Size: 0x20 bytes */



ID XZYHomeDockCustomStyleListController::tableView_viewForFooterInSection_

             (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  undefined *puVar1;

  undefined8 uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  ID IVar15;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  cfstringStruct *local_90;

  undefined8 local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  long local_68;

  

  local_68 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_0024d85c();

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lVar3 = FUN_00293860();

  if (lVar3 == 0) {

    local_90 = &cf_fe_IN7h_0pQSN;

  }

  else {

    FUN_00293860(uVar2);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1,&cf__R_);

    local_90 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  _objc_alloc(&_OBJC_CLASS___UIView);

  puVar1 = PTR__CGRectZero_00388bf0;

  uVar4 = FUN_00296b80(*(undefined8 *)PTR__CGRectZero_00388bf0,

                       *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8),

                       *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10),

                       *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x18));

  _objc_alloc(&_OBJC_CLASS___UILabel);

  auVar16 = FUN_00296b80(*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),

                         *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));

  uVar5 = auVar16._0_8_;

  FUN_002a21e0(uVar5,auVar16._8_8_,0);

  FUN_002a1d60(uVar5,extraout_x1_00,local_90);

  FUN_00259960(0x402a000000000000,0);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e520(uVar5,auVar16._8_8_,auVar16._0_8_);

  _objc_release(auVar16._0_8_);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(uVar5,auVar16._8_8_,auVar16._0_8_);

  _objc_release(auVar16._0_8_);

  FUN_0029ffc0(uVar5,extraout_x1_01,0);

  FUN_0029f460(uVar5,extraout_x1_02,0);

  FUN_00291380(uVar4,extraout_x1_03,uVar5);

  FUN_002a54e0(uVar5);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  FUN_002a54e0(uVar4);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4010000000000000,uVar6);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  local_88 = uVar8;

  FUN_00292540(uVar5);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00292540(uVar4);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc020000000000000,uVar9);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  local_80 = uVar11;

  FUN_00297f40(uVar5);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00297f40(uVar4);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0x4034000000000000,uVar12,auVar16._8_8_,auVar16._0_8_);

  uVar13 = _objc_retainAutoreleasedReturnValue();

  local_78 = uVar13;

  FUN_002a5660(uVar5);

  uVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5660(uVar4);

  auVar17 = _objc_retainAutoreleasedReturnValue();

  FUN_00293480(0xc034000000000000,uVar14,auVar17._8_8_,auVar17._0_8_);

  auVar18 = _objc_retainAutoreleasedReturnValue();

  local_70 = auVar18._0_8_;

  FUN_00291e00(&_OBJC_CLASS___NSArray,auVar18._8_8_,&local_88,4);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  FUN_00290f20(&_OBJC_CLASS___NSLayoutConstraint,auVar19._8_8_,auVar19._0_8_);

  _objc_release(auVar19._0_8_);

  _objc_release(auVar18._0_8_);

  _objc_release(auVar17._0_8_);

  _objc_release(uVar14);

  _objc_release(uVar13);

  _objc_release(auVar16._0_8_);

  _objc_release(uVar12);

  _objc_release(uVar11);

  _objc_release(uVar10);

  _objc_release(uVar9);

  _objc_release(uVar8);

  _objc_release(uVar7);

  _objc_release(uVar6);

  _objc_release(uVar5);

  _objc_release(local_90);

  _objc_release(uVar2);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_68) {

    IVar15 = _objc_autoreleaseReturnValue(uVar4);

    return IVar15;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




