// showPositionModePickerForIsSelf: @0x19a9a4


/* Function Stack Size: 0x14 bytes */



void XZYAvatarAboveBubbleSettingsViewController::showPositionModePickerForIsSelf_

               (ID param_1,SEL param_2,bool param_3)



{

  cfstringStruct *pcVar1;

  ulong uVar2;

  cfstringStruct *pcVar3;

  cfstringStruct *pcVar4;

  bool bVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  ulong uVar9;

  cfstringStruct *pcVar10;

  long lVar11;

  undefined8 uVar12;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar13;

  long lVar14;

  undefined8 uVar15;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar16 [16];

  undefined1 auVar17 [16];

  undefined *local_1c0;

  undefined8 local_1b8;

  code *local_1b0;

  undefined *puStack_1a8;

  undefined8 local_1a0;

  ulong uStack_198;

  undefined8 local_190;

  long lStack_188;

  long *local_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined8 uStack_160;

  undefined8 uStack_158;

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  cfstringStruct *local_130;

  undefined1 auStack_128 [8];

  undefined8 local_120;

  undefined1 auStack_118 [8];

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_aabPositionModeSelf;

  if (param_3 == 0) {

    pcVar1 = &cf_aabPositionModeOther;

  }

  _objc_retain(pcVar1);

  auVar16 = FUN_00297480(uVar6,extraout_x1,pcVar1);

  uVar2 = 0;

  if (auVar16._0_8_ < 3) {

    uVar2 = auVar16._0_8_;

  }

  bVar5 = param_3 != 0;

  uVar15 = 1;

  if (bVar5) {

    uVar15 = 2;

  }

  pcVar4 = &cf_beMOn_;

  if (!bVar5) {

    pcVar4 = &cf__eMOn_;

  }

  pcVar3 = &cf_b_mo_v4YP05fy0Lrv_llvMOn_0;

  if (!bVar5) {

    pcVar3 = &cf_b_emo_v4YP05fy0Lrv_llvMOn_0;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar16._8_8_,pcVar4,pcVar3,0);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_118,param_1);

  local_150 = PTR___NSConcreteStackBlock_003886f0;

  local_148 = 0xc2000000;

  local_140 = FUN_0019b010;

  puStack_138 = &DAT_0038e040;

  _objc_retain(pcVar1);

  local_130 = pcVar1;

  _objc_copyWeak(auStack_128,auStack_118);

  local_120 = uVar15;

  auVar16 = _objc_retainBlock(&local_150);

  uVar8 = auVar16._0_8_;

  uStack_168 = 0;

  local_170 = 0;

  uStack_158 = 0;

  uStack_160 = 0;

  lStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  local_180 = (long *)0x0;

  auVar16 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be9b0,auVar16._8_8_,&local_190,

                         auStack_110,0x10);

  uVar12 = auVar16._8_8_;

  lVar11 = auVar16._0_8_;

  if (lVar11 != 0) {

    lVar14 = *local_180;

    pcVar4 = &cf_Ne;

    if (uVar2 != 1) {

      pcVar4 = &cf_Ne;

    }

    pcVar3 = &cf_N_T_u;

    if (uVar2 != 2) {

      pcVar3 = pcVar4;

    }

    do {

      lVar13 = 0;

      do {

        if (*local_180 != lVar14) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003be9b0);

        }

        uVar9 = FUN_002974a0(*(undefined8 *)(lStack_188 + lVar13 * 8));

        if (uVar9 == uVar2) {

          _objc_retain(pcVar3);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_00,&::cf__);

          pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(pcVar3);

        }

        else {

          pcVar4 = &cf_Ne;

          if (uVar9 != 1) {

            pcVar4 = &cf_Ne;

          }

          pcVar10 = &cf_N_T_u;

          if (uVar9 != 2) {

            pcVar10 = pcVar4;

          }

          _objc_retain(pcVar10);

        }

        local_1c0 = PTR___NSConcreteStackBlock_003886f0;

        local_1b8 = 0xc2000000;

        local_1b0 = FUN_0019b1b0;

        puStack_1a8 = &DAT_00389140;

        _objc_retain(uVar8);

        local_1a0 = uVar8;

        uStack_198 = uVar9;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,pcVar10,0,&local_1c0);

        auVar16 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar7,auVar16._8_8_,auVar16._0_8_);

        _objc_release(auVar16._0_8_);

        _objc_release(local_1a0);

        _objc_release(pcVar10);

        lVar13 = lVar13 + 1;

      } while (lVar11 != lVar13);

      auVar16 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be9b0,extraout_x1_02,&local_190,

                             auStack_110,0x10);

      uVar12 = auVar16._8_8_;

      lVar11 = auVar16._0_8_;

    } while (lVar11 != 0);

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar12,&cf_Sm,1,0);

  auVar16 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar7,auVar16._8_8_,auVar16._0_8_);

  _objc_release(auVar16._0_8_);

  FUN_0029a0a0(uVar7);

  lVar11 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar12 = extraout_x1_03;

  if (lVar11 != 0) {

    FUN_002a4dc0(param_1);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar16._8_8_,uVar15,0);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar16._0_8_,auVar17._8_8_,auVar17._0_8_);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar17._0_8_);

    _objc_release(auVar16._0_8_);

    lVar11 = lVar14;

    if (lVar14 == 0) {

      FUN_002a6220(param_1);

      lVar11 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar7);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar16._0_8_,auVar16._8_8_,lVar11);

    _objc_release(auVar16._0_8_);

    if (lVar14 == 0) {

      _objc_release(lVar11);

      FUN_002a6220(param_1);

      lVar11 = _objc_retainAutoreleasedReturnValue();

      uVar15 = FUN_002925a0();

    }

    else {

      uVar15 = FUN_002925a0(lVar14);

    }

    FUN_0029a0a0(uVar7);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar15,in_d1,in_d2,in_d3);

    _objc_release(uVar12);

    if (lVar14 == 0) {

      _objc_release(lVar11);

    }

    _objc_release(lVar14);

    uVar12 = extraout_x1_04;

  }

  FUN_0029a500(param_1,uVar12,uVar7,1,0);

  _objc_release(uVar8);

  _objc_destroyWeak(auStack_128);

  _objc_release(local_130);

  _objc_destroyWeak(auStack_118);

  _objc_release(uVar7);

  _objc_release(pcVar1);

  _objc_release(uVar6);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_90) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




