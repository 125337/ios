// showWrapReferDividerLengthPickerForCell: @0x3eee8


/* Function Stack Size: 0x18 bytes */



void _0x2f19de29::showWrapReferDividerLengthPickerForCell_(ID param_1,SEL param_2,ID param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  ID IVar5;

  undefined8 uVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 uVar7;

  long lVar8;

  long lVar9;

  double dVar10;

  double in_d1;

  double in_d2;

  double in_d3;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined *local_1b0;

  undefined8 local_1a8;

  code *local_1a0;

  undefined *puStack_198;

  undefined8 local_190;

  long lStack_188;

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

  auVar12 = FUN_00297480(auVar11._0_8_,auVar11._8_8_,&cf_mesMsgMergeWrapReferDividerLength);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar12._8_8_,&cf_R___,&cf__4Pll_Nzw__umo_aSGr__,0);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  local_138 = PTR___NSConcreteStackBlock_003886f0;

  local_130 = 0xc2000000;

  local_128 = FUN_0003f50c;

  puStack_120 = &DAT_00389730;

  _objc_retain(param_3);

  local_118 = param_3;

  auVar13 = _objc_retainBlock(&local_138);

  uVar2 = auVar13._0_8_;

  uStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  uStack_150 = 0;

  lStack_178 = 0;

  local_180 = 0;

  uStack_168 = 0;

  local_170 = (long *)0x0;

  auVar13 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb70,auVar13._8_8_,&local_180,

                         auStack_110,0x10);

  uVar3 = auVar13._8_8_;

  if (auVar13._0_8_ != 0) {

    lVar8 = *local_170;

    do {

      uVar3 = auVar13._8_8_;

      lVar9 = 0;

      do {

        if (*local_170 != lVar8) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bdb70);

          uVar3 = extraout_x1;

        }

        uVar7 = *(undefined8 *)(lStack_178 + lVar9 * 8);

        FUN_00299540(uVar7,uVar3,&cf_v);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        lVar4 = FUN_002974a0();

        _objc_release(uVar3);

        FUN_00299540(uVar7,extraout_x1_00,&cf_t);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        uVar3 = auVar14._0_8_;

        if (lVar4 == auVar12._0_8_) {

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&::cf__);

          uVar7 = _objc_retainAutoreleasedReturnValue();

        }

        else {

          _objc_retain(uVar3);

          uVar7 = uVar3;

        }

        local_1b0 = PTR___NSConcreteStackBlock_003886f0;

        local_1a8 = 0xc2000000;

        local_1a0 = FUN_0003f5e4;

        puStack_198 = &DAT_00389140;

        _objc_retain(uVar2);

        local_190 = uVar2;

        lStack_188 = lVar4;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,uVar7,0,&local_1b0);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar1,auVar14._8_8_,auVar14._0_8_);

        _objc_release(auVar14._0_8_);

        _objc_release(local_190);

        _objc_release(uVar7);

        _objc_release(uVar3);

        lVar9 = lVar9 + 1;

        uVar3 = extraout_x1_02;

      } while (auVar13._0_8_ != lVar9);

      auVar13 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bdb70,extraout_x1_02,&local_180,

                             auStack_110,0x10);

      uVar3 = auVar13._8_8_;

    } while (auVar13._0_8_ != 0);

  }

  uVar7 = 0;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar3,&cf_Sm,1,0);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar1,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  FUN_00295b00(param_1);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  if (lVar8 != 0) {

    while( true ) {

      FUN_0029a560(lVar8);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      if (lVar9 == 0) break;

      FUN_0029a560(lVar8);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      _objc_release(lVar8);

      lVar8 = lVar9;

    }

    FUN_0029a0a0(uVar1);

    lVar9 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    uVar3 = extraout_x1_03;

    if (lVar9 != 0) {

      IVar5 = param_3;

      if (param_3 == 0) {

        FUN_002a6220(lVar8);

        IVar5 = _objc_retainAutoreleasedReturnValue();

      }

      FUN_0029a0a0(uVar1);

      auVar13 = _objc_retainAutoreleasedReturnValue();

      uVar6 = auVar13._0_8_;

      FUN_002a1740(uVar6,auVar13._8_8_,IVar5);

      _objc_release(uVar6);

      if (param_3 == 0) {

        _objc_release(IVar5);

        FUN_002a6220(lVar8);

        uVar6 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        FUN_002a6220(lVar8);

        uVar7 = _objc_retainAutoreleasedReturnValue();

        FUN_002925a0();

        dVar10 = in_d2 * 0.5;

        in_d1 = in_d3 * 0.5;

        in_d2 = 1.0;

        in_d3 = 1.0;

      }

      else {

        dVar10 = (double)FUN_002925a0(param_3);

      }

      FUN_0029a0a0(uVar1);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1700(dVar10,in_d1,in_d2,in_d3);

      _objc_release(uVar3);

      uVar3 = extraout_x1_04;

      if (param_3 == 0) {

        _objc_release(uVar7);

        _objc_release(uVar6);

        uVar3 = extraout_x1_05;

      }

    }

    FUN_0029a500(lVar8,uVar3,uVar1,1,0);

  }

  _objc_release(lVar8);

  _objc_release(uVar2);

  _objc_release(local_118);

  _objc_release(uVar1);

  _objc_release(auVar11._0_8_);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




