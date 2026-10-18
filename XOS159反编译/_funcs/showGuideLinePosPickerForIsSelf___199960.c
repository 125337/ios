// showGuideLinePosPickerForIsSelf: @0x199960


/* Function Stack Size: 0x14 bytes */



void XZYAvatarAboveBubbleSettingsViewController::showGuideLinePosPickerForIsSelf_

               (ID param_1,SEL param_2,bool param_3)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  long lVar9;

  undefined8 uVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar11;

  long lVar12;

  undefined8 uVar13;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar14 [16];

  undefined1 auVar15 [16];

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

  uVar3 = _objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_aabGuideLinePosSelf;

  if (param_3 == 0) {

    pcVar1 = &cf_aabGuideLinePosOther;

  }

  uVar13 = 4;

  if (param_3 != 0) {

    uVar13 = 5;

  }

  _objc_retain(pcVar1);

  FUN_00299520(uVar3,extraout_x1,pcVar1);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  if (auVar14._0_8_ == 0) {

    lVar9 = 2;

  }

  else {

    lVar4 = FUN_00297480(uVar3,auVar14._8_8_,pcVar1);

    lVar9 = 0;

    if (lVar4 != 0) {

      lVar9 = 2;

    }

  }

  _objc_release(auVar14._0_8_);

  pcVar2 = &cf_be;

  if (param_3 == 0) {

    pcVar2 = &cf__e;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1_00,pcVar2,&cf_____p__WTv__Tagllv4ls__N_,

               0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_118,param_1);

  local_150 = PTR___NSConcreteStackBlock_003886f0;

  local_148 = 0xc2000000;

  local_140 = FUN_00199fe0;

  puStack_138 = &DAT_0038e040;

  _objc_retain(pcVar1);

  local_130 = pcVar1;

  _objc_copyWeak(auStack_128,auStack_118);

  local_120 = uVar13;

  auVar14 = _objc_retainBlock(&local_150);

  uVar6 = auVar14._0_8_;

  uStack_168 = 0;

  local_170 = 0;

  uStack_158 = 0;

  uStack_160 = 0;

  lStack_188 = 0;

  local_190 = 0;

  uStack_178 = 0;

  local_180 = (long *)0x0;

  auVar14 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be998,auVar14._8_8_,&local_190,

                         auStack_110,0x10);

  uVar10 = auVar14._8_8_;

  lVar4 = auVar14._0_8_;

  if (lVar4 != 0) {

    lVar12 = *local_180;

    pcVar2 = &cf_ag;

    if (lVar9 != 0) {

      pcVar2 = &cf__gag;

    }

    do {

      lVar11 = 0;

      do {

        if (*local_180 != lVar12) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003be998);

        }

        lVar7 = FUN_002974a0(*(undefined8 *)(lStack_188 + lVar11 * 8));

        if (lVar7 == lVar9) {

          _objc_retain(pcVar2);

          FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&::cf__);

          pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

          _objc_release(pcVar2);

        }

        else {

          pcVar8 = &cf_ag;

          if (lVar7 != 0) {

            pcVar8 = &cf__gag;

          }

          _objc_retain(pcVar8);

        }

        local_1c0 = PTR___NSConcreteStackBlock_003886f0;

        local_1b8 = 0xc2000000;

        local_1b0 = FUN_0019a17c;

        puStack_1a8 = &DAT_00389140;

        _objc_retain(uVar6);

        local_1a0 = uVar6;

        lStack_198 = lVar7;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,pcVar8,0,&local_1c0);

        auVar14 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar5,auVar14._8_8_,auVar14._0_8_);

        _objc_release(auVar14._0_8_);

        _objc_release(local_1a0);

        _objc_release(pcVar8);

        lVar11 = lVar11 + 1;

      } while (lVar4 != lVar11);

      auVar14 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be998,extraout_x1_03,&local_190,

                             auStack_110,0x10);

      uVar10 = auVar14._8_8_;

      lVar4 = auVar14._0_8_;

    } while (lVar4 != 0);

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar10,&cf_Sm,1,0);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar5,auVar14._8_8_,auVar14._0_8_);

  _objc_release(auVar14._0_8_);

  FUN_0029a0a0(uVar5);

  lVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar10 = extraout_x1_04;

  if (lVar9 != 0) {

    FUN_002a4dc0(param_1);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar14._8_8_,uVar13,5);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar14._0_8_,auVar15._8_8_,auVar15._0_8_);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar15._0_8_);

    _objc_release(auVar14._0_8_);

    lVar9 = lVar4;

    if (lVar4 == 0) {

      FUN_002a6220(param_1);

      lVar9 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar5);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar14._0_8_,auVar14._8_8_,lVar9);

    _objc_release(auVar14._0_8_);

    if (lVar4 == 0) {

      _objc_release(lVar9);

      FUN_002a6220(param_1);

      lVar9 = _objc_retainAutoreleasedReturnValue();

      uVar13 = FUN_002925a0();

    }

    else {

      uVar13 = FUN_002925a0(lVar4);

    }

    FUN_0029a0a0(uVar5);

    uVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar13,in_d1,in_d2,in_d3);

    _objc_release(uVar10);

    if (lVar4 == 0) {

      _objc_release(lVar9);

    }

    _objc_release(lVar4);

    uVar10 = extraout_x1_05;

  }

  FUN_0029a500(param_1,uVar10,uVar5,1,0);

  _objc_release(uVar6);

  _objc_destroyWeak(auStack_128);

  _objc_release(local_130);

  _objc_destroyWeak(auStack_118);

  _objc_release(uVar5);

  _objc_release(pcVar1);

  _objc_release(uVar3);

  if (*(long *)PTR____stack_chk_guard_00388738 != local_90) {

                    /* WARNING: Subroutine does not return */

    ___stack_chk_fail();

  }

  return;

}




