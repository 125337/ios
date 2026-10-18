// showWrapReferDividerStylePickerForCell:variant: @0x3ddf0


/* Function Stack Size: 0x20 bytes */



void _0x2f19de29::showWrapReferDividerStylePickerForCell_variant_

               (ID param_1,SEL param_2,ID param_3,long_long param_4)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  ID IVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  cfstringStruct *pcVar11;

  long lVar12;

  long lVar13;

  double dVar14;

  double in_d1;

  double in_d2;

  double in_d3;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined *local_1f0;

  undefined8 local_1e8;

  code *local_1e0;

  undefined *puStack_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  undefined *local_1c0;

  undefined8 local_1b8;

  code *local_1b0;

  undefined *puStack_1a8;

  undefined8 local_1a0;

  long lStack_198;

  undefined8 local_190;

  long lStack_188;

  long *local_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined8 uStack_160;

  undefined8 uStack_158;

  undefined *local_148;

  undefined8 local_140;

  code *local_138;

  undefined *puStack_130;

  cfstringStruct *local_128;

  ID local_120;

  long_long local_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar15 = FUN_0001ce48(uVar1,param_4);

  lVar8 = auVar15._0_8_;

  if ((long)param_4 < 2) {

    if (param_4 == 0) {

      pcVar11 = &cf_mesMsgMergeWrapReferDividerStyleOtherLight;

      goto LAB_0003dee4;

    }

    if (param_4 == 1) {

      pcVar11 = &cf_mesMsgMergeWrapReferDividerStyleOtherDark;

      goto LAB_0003dee4;

    }

  }

  else {

    if (param_4 == 3) {

      pcVar11 = &cf_mesMsgMergeWrapReferDividerStyleSelfDark;

      goto LAB_0003dee4;

    }

    if (param_4 == 2) {

      pcVar11 = &cf_mesMsgMergeWrapReferDividerStyleSelfLight;

      goto LAB_0003dee4;

    }

  }

  pcVar11 = &cf_mesMsgMergeWrapReferDividerStyleSelfLight;

LAB_0003dee4:

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar15._8_8_,&cf_R_7h_);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar15._8_8_,auVar15._0_8_,&cf_rzN4YPNeR_n_rN4YPR_r

               ,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar15._0_8_);

  local_148 = PTR___NSConcreteStackBlock_003886f0;

  local_140 = 0xc2000000;

  local_138 = FUN_0003e6a0;

  puStack_130 = &DAT_00389700;

  local_128 = pcVar11;

  local_118 = param_4;

  _objc_retain(param_3);

  local_120 = param_3;

  auVar15 = _objc_retainBlock(&local_148);

  uVar3 = auVar15._0_8_;

  uStack_168 = 0;

  local_170 = 0;

  uStack_158 = 0;

  uStack_160 = 0;

  lStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  local_180 = (long *)0x0;

  lVar4 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb40,auVar15._8_8_,&local_190,

                       auStack_110,0x10);

  if (lVar4 != 0) {

    lVar13 = *local_180;

    do {

      lVar12 = 0;

      do {

        if (*local_180 != lVar13) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdb40);

        }

        lVar5 = FUN_002974a0(*(undefined8 *)(lStack_188 + lVar12 * 8));

        if (lVar5 == lVar8) {

          FUN_001941b8(lVar8);

          auVar15 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar15._8_8_,&::cf__);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar15._0_8_);

        }

        else {

          FUN_001941b8(lVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

        }

        local_1c0 = PTR___NSConcreteStackBlock_003886f0;

        local_1b8 = 0xc2000000;

        local_1b0 = FUN_0003e7a8;

        puStack_1a8 = &DAT_00389140;

        _objc_retain(uVar3);

        local_1a0 = uVar3;

        lStack_198 = lVar5;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,uVar6,0,&local_1c0);

        auVar15 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar2,auVar15._8_8_,auVar15._0_8_);

        _objc_release(auVar15._0_8_);

        _objc_release(local_1a0);

        _objc_release(uVar6);

        lVar12 = lVar12 + 1;

      } while (lVar4 != lVar12);

      lVar4 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb40,extraout_x1_00,&local_190,

                           auStack_110,0x10);

    } while (lVar4 != 0);

  }

  FUN_001aaf74();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  lVar4 = 1;

  while( true ) {

    auVar15 = FUN_00293860(uVar6);

    if (auVar15._0_8_ <= lVar4 + -1) break;

    FUN_00299500(uVar6,auVar15._8_8_,lVar4 + -1);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar15._0_8_,auVar15._8_8_,&cf_name);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    lVar13 = auVar16._0_8_;

    if (lVar13 == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar16._8_8_,&cf__IN_);

      lVar12 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar13);

      lVar12 = lVar13;

    }

    _objc_release(lVar13);

    if (lVar4 + 9 == lVar8) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__);

      uVar7 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf__);

      uVar7 = _objc_retainAutoreleasedReturnValue();

    }

    local_1f0 = PTR___NSConcreteStackBlock_003886f0;

    local_1e8 = 0xc2000000;

    local_1e0 = FUN_0003e7b8;

    puStack_1d8 = &DAT_00389140;

    _objc_retain(uVar3);

    local_1d0 = uVar3;

    lStack_1c8 = lVar4 + 9;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,uVar7,0,&local_1f0);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar16._8_8_,auVar16._0_8_);

    _objc_release(auVar16._0_8_);

    _objc_release(local_1d0);

    _objc_release(uVar7);

    _objc_release(lVar12);

    _objc_release(auVar15._0_8_);

    lVar4 = lVar4 + 1;

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar15._8_8_,&cf_Sm,1,0);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  FUN_00295b00(param_1);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 != 0) {

    while( true ) {

      FUN_0029a560(lVar8);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar4 == 0) break;

      FUN_0029a560(lVar8);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar8);

      lVar8 = lVar4;

    }

    FUN_0029a0a0(uVar2);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar7 = extraout_x1_03;

    if (lVar4 != 0) {

      IVar9 = param_3;

      if (param_3 == 0) {

        FUN_002a6220(lVar8);

        IVar9 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_0029a0a0(uVar2);

      auVar15 = _objc_retainAutoreleasedReturnValue();

      uVar10 = auVar15._0_8_;

      FUN_002a1740(uVar10,auVar15._8_8_,IVar9);

      _objc_release(uVar10);

      if (param_3 == 0) {

        _objc_release(IVar9);

        FUN_002a6220(lVar8);

        IVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        FUN_002a6220(lVar8);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar14 = in_d2 * 0.5;

        in_d1 = in_d3 * 0.5;

        in_d2 = 1.0;

        in_d3 = 1.0;

      }

      else {

        dVar14 = (double)FUN_002925a0(param_3);

      }

      FUN_0029a0a0(uVar2);

      uVar7 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1700(dVar14,in_d1,in_d2,in_d3);

      _objc_release(uVar7);

      uVar7 = extraout_x1_04;

      if (param_3 == 0) {

        _objc_release(uVar10);

        _objc_release(IVar9);

        uVar7 = extraout_x1_05;

      }

    }

    FUN_0029a500(lVar8,uVar7,uVar2,1,0);

  }

  _objc_release(lVar8);

  _objc_release(uVar6);

  _objc_release(uVar3);

  _objc_release(local_120);

  _objc_release(local_128);

  _objc_release(uVar2);

  _objc_release(uVar1);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




