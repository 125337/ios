// showWrapReferAlignmentPickerForCell: @0x3e7c8


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::showWrapReferAlignmentPickerForCell_(ID param_1,SEL param_2,ID param_3)



{

  ulong uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  ulong uVar5;

  long lVar6;

  ID IVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 uVar8;

  long unaff_x25;

  long lVar9;

  double dVar10;

  double in_d1;

  double in_d2;

  double in_d3;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined *local_1b0;

  undefined8 local_1a8;

  code *local_1a0;

  undefined *puStack_198;

  undefined8 local_190;

  ulong uStack_188;

  undefined8 local_180;

  long lStack_178;

  long *local_170;

  undefined8 uStack_168;

  undefined8 local_160;

  undefined8 uStack_158;

  undefined8 uStack_150;

  undefined8 uStack_148;

  undefined *local_138;

  undefined8 local_130;

  code *local_128;

  undefined *puStack_120;

  ID local_118;

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  auVar12 = FUN_00297480(auVar11._0_8_,auVar11._8_8_,&cf_mesMsgMergeWrapReferAlignment);

  uVar1 = 0;

  if (auVar12._0_8_ < 4) {

    uVar1 = auVar12._0_8_;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar12._8_8_,&cf___u_Pe_,

               &cf_S__umo_e__uaSGr_WllQv4ls__Pe_,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  local_138 = PTR___NSConcreteStackBlock_003886f0;

  local_130 = 0xc2000000;

  local_128 = FUN_0003ede4;

  puStack_120 = &DAT_00389730;

  _objc_retain(param_3);

  local_118 = param_3;

  auVar12 = _objc_retainBlock(&local_138);

  uVar3 = auVar12._0_8_;

  uStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  uStack_150 = 0;

  lStack_178 = 0;

  local_180 = 0;

  uStack_168 = 0;

  local_170 = (long *)0x0;

  auVar12 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb58,auVar12._8_8_,&local_180,

                         auStack_110,0x10);

  uVar4 = auVar12._8_8_;

  if (auVar12._0_8_ != 0) {

    lVar9 = *local_170;

    do {

      uVar4 = auVar12._8_8_;

      unaff_x25 = 0;

      do {

        if (*local_170 != lVar9) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdb58);

          uVar4 = extraout_x1;

        }

        uVar8 = *(undefined8 *)(lStack_178 + unaff_x25 * 8);

        FUN_00299540(uVar8,uVar4,&cf_v);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        uVar5 = FUN_002974a0();

        _objc_release(uVar4);

        FUN_00299540(uVar8,extraout_x1_00,&cf_t);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        uVar4 = auVar13._0_8_;

        if (uVar5 == uVar1) {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar13._8_8_,&::cf__);

          uVar8 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          _objc_retain(uVar4);

          uVar8 = uVar4;

        }

        local_1b0 = PTR___NSConcreteStackBlock_003886f0;

        local_1a8 = 0xc2000000;

        local_1a0 = FUN_0003eed8;

        puStack_198 = &DAT_00389140;

        _objc_retain(uVar3);

        local_190 = uVar3;

        uStack_188 = uVar5;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,uVar8,0,&local_1b0);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar2,auVar13._8_8_,auVar13._0_8_);

        _objc_release(auVar13._0_8_);

        _objc_release(local_190);

        _objc_release(uVar8);

        _objc_release(uVar4);

        unaff_x25 = unaff_x25 + 1;

        uVar4 = extraout_x1_02;

      } while (auVar12._0_8_ != unaff_x25);

      auVar12 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb58,extraout_x1_02,&local_180,

                             auStack_110,0x10);

      uVar4 = auVar12._8_8_;

    } while (auVar12._0_8_ != 0);

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar4,&cf_Sm,1,0);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar12._8_8_,auVar12._0_8_);

  _objc_release(auVar12._0_8_);

  FUN_00295b00(param_1);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  if (lVar9 != 0) {

    while( true ) {

      FUN_0029a560(lVar9);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar6 == 0) break;

      FUN_0029a560(lVar9);

      lVar6 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar9);

      lVar9 = lVar6;

    }

    FUN_0029a0a0(uVar2);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar4 = extraout_x1_03;

    if (lVar6 != 0) {

      IVar7 = param_3;

      if (param_3 == 0) {

        FUN_002a6220(lVar9);

        IVar7 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_0029a0a0(uVar2);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1740(auVar12._0_8_,auVar12._8_8_,IVar7);

      _objc_release(auVar12._0_8_);

      if (param_3 == 0) {

        _objc_release(IVar7);

        FUN_002a6220(lVar9);

        unaff_x25 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        FUN_002a6220(lVar9);

        IVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar10 = in_d2 * 0.5;

        in_d1 = in_d3 * 0.5;

        in_d2 = 1.0;

        in_d3 = 1.0;

      }

      else {

        dVar10 = (double)FUN_002925a0(param_3);

      }

      FUN_0029a0a0(uVar2);

      uVar4 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1700(dVar10,in_d1,in_d2,in_d3);

      _objc_release(uVar4);

      uVar4 = extraout_x1_04;

      if (param_3 == 0) {

        _objc_release(IVar7);

        _objc_release(unaff_x25);

        uVar4 = extraout_x1_05;

      }

    }

    FUN_0029a500(lVar9,uVar4,uVar2,1,0);

  }

  _objc_release(lVar9);

  _objc_release(uVar3);

  _objc_release(local_118);

  _objc_release(uVar2);

  _objc_release(auVar11._0_8_);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




