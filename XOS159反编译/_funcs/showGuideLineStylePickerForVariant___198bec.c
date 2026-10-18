// showGuideLineStylePickerForVariant: @0x198bec


/* Function Stack Size: 0x18 bytes */



void XZYAvatarAboveBubbleSettingsViewController::showGuideLineStylePickerForVariant_

               (ID param_1,SEL param_2,long_long param_3)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  long lVar8;

  undefined8 uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  cfstringStruct *pcVar10;

  long lVar11;

  long lVar12;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar13 [16];

  undefined1 auVar14 [16];

  undefined *local_230;

  undefined8 local_228;

  code *local_220;

  undefined *puStack_218;

  undefined8 local_210;

  long lStack_208;

  undefined *local_200;

  undefined8 local_1f8;

  code *local_1f0;

  undefined *puStack_1e8;

  undefined8 local_1e0;

  long lStack_1d8;

  undefined8 local_1d0;

  long lStack_1c8;

  long *local_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined *local_188;

  undefined8 local_180;

  code *local_178;

  undefined *puStack_170;

  undefined1 auStack_168 [8];

  long_long local_160;

  long_long local_158;

  undefined *local_150;

  undefined8 local_148;

  code *local_140;

  undefined *puStack_138;

  cfstringStruct *local_130;

  undefined1 auStack_128 [8];

  long_long local_120;

  undefined1 auStack_118 [8];

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  uVar1 = _objc_retainAutoreleasedReturnValue();

  auVar13 = FUN_0018eb20(uVar1,param_3);

  lVar8 = auVar13._0_8_;

  if ((long)param_3 < 2) {

    if (param_3 == 0) {

      pcVar10 = &cf_aabGuideLineStyleOtherLight;

      goto LAB_00198cd8;

    }

    if (param_3 == 1) {

      pcVar10 = &cf_aabGuideLineStyleOtherDark;

      goto LAB_00198cd8;

    }

  }

  else {

    if (param_3 == 3) {

      pcVar10 = &cf_aabGuideLineStyleSelfDark;

      goto LAB_00198cd8;

    }

    if (param_3 == 2) {

      pcVar10 = &cf_aabGuideLineStyleSelfLight;

      goto LAB_00198cd8;

    }

  }

  pcVar10 = &cf_aabGuideLineStyleSelfLight;

LAB_00198cd8:

  FUN_002a4680(&_OBJC_CLASS___NSString,auVar13._8_8_,&cf____);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar13._8_8_,auVar13._0_8_,0,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  _objc_release(auVar13._0_8_);

  _objc_initWeak(auStack_118,param_1);

  local_150 = PTR___NSConcreteStackBlock_003886f0;

  local_148 = 0xc2000000;

  local_140 = FUN_00199508;

  puStack_138 = &DAT_0038e040;

  local_130 = pcVar10;

  _objc_copyWeak(auStack_128,auStack_118);

  local_120 = param_3;

  uVar3 = _objc_retainBlock(&local_150);

  local_188 = PTR___NSConcreteStackBlock_003886f0;

  local_180 = 0xc2000000;

  local_178 = FUN_00199698;

  puStack_170 = &DAT_0038e0a0;

  local_160 = param_3;

  _objc_copyWeak(auStack_168,auStack_118);

  local_158 = param_3;

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,&cf__t_IN7h__,0,&local_188);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  uStack_1a8 = 0;

  local_1b0 = 0;

  uStack_198 = 0;

  uStack_1a0 = 0;

  lStack_1c8 = 0;

  local_1d0 = 0;

  uStack_1b8 = 0;

  local_1c0 = (long *)0x0;

  lVar4 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be980,extraout_x1_00,&local_1d0,

                       auStack_110,0x10);

  if (lVar4 != 0) {

    lVar12 = *local_1c0;

    do {

      lVar11 = 0;

      do {

        if (*local_1c0 != lVar12) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003be980);

        }

        lVar5 = FUN_002974a0(*(undefined8 *)(lStack_1c8 + lVar11 * 8));

        if (lVar5 == lVar8) {

          FUN_00190f70(lVar8);

          auVar13 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar13._8_8_,&::cf__);

          uVar6 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar13._0_8_);

        }

        else {

          FUN_00190f70(lVar5);

          uVar6 = _objc_retainAutoreleasedReturnValue();

        }

        local_200 = PTR___NSConcreteStackBlock_003886f0;

        local_1f8 = 0xc2000000;

        local_1f0 = FUN_00199940;

        puStack_1e8 = &DAT_00389140;

        _objc_retain(uVar3);

        local_1e0 = uVar3;

        lStack_1d8 = lVar5;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,uVar6,0,&local_200);

        auVar13 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar2,auVar13._8_8_,auVar13._0_8_);

        _objc_release(auVar13._0_8_);

        _objc_release(local_1e0);

        _objc_release(uVar6);

        lVar11 = lVar11 + 1;

      } while (lVar4 != lVar11);

      lVar4 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be980,extraout_x1_02,&local_1d0,

                           auStack_110,0x10);

    } while (lVar4 != 0);

  }

  FUN_001ab2e8();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  lVar4 = 1;

  while( true ) {

    auVar13 = FUN_00293860(uVar6);

    if (auVar13._0_8_ <= lVar4 + -1) break;

    FUN_00299500(uVar6,auVar13._8_8_,lVar4 + -1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00299540(auVar13._0_8_,auVar13._8_8_,&cf_name);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    lVar12 = auVar14._0_8_;

    if (lVar12 == 0) {

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&cf__IN_);

      lVar11 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      _objc_retain(lVar12);

      lVar11 = lVar12;

    }

    _objc_release(lVar12);

    if (lVar4 + 9 == lVar8) {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf__);

      uVar7 = _objc_retainAutoreleasedReturnValue();

    }

    else {

      FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_03,&cf__);

      uVar7 = _objc_retainAutoreleasedReturnValue();

    }

    local_230 = PTR___NSConcreteStackBlock_003886f0;

    local_228 = 0xc2000000;

    local_220 = FUN_00199950;

    puStack_218 = &DAT_00389140;

    _objc_retain(uVar3);

    local_210 = uVar3;

    lStack_208 = lVar4 + 9;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_04,uVar7,0,&local_230);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    _objc_release(local_210);

    _objc_release(uVar7);

    _objc_release(lVar11);

    _objc_release(auVar13._0_8_);

    lVar4 = lVar4 + 1;

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,auVar13._8_8_,&cf_Sm,1,0);

  auVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar13._8_8_,auVar13._0_8_);

  _objc_release(auVar13._0_8_);

  FUN_0029a0a0(uVar2);

  lVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar7 = extraout_x1_05;

  if (lVar8 != 0) {

    FUN_002a4dc0(param_1);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar13._8_8_,param_3,5);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar13._0_8_,auVar14._8_8_,auVar14._0_8_);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar14._0_8_);

    _objc_release(auVar13._0_8_);

    lVar8 = lVar4;

    if (lVar4 == 0) {

      FUN_002a6220(param_1);

      lVar8 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar2);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar13._0_8_,auVar13._8_8_,lVar8);

    _objc_release(auVar13._0_8_);

    if (lVar4 == 0) {

      _objc_release(lVar8);

      FUN_002a6220(param_1);

      lVar8 = _objc_retainAutoreleasedReturnValue();

      uVar7 = FUN_002925a0();

    }

    else {

      uVar7 = FUN_002925a0(lVar4);

    }

    FUN_0029a0a0(uVar2);

    uVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar7,in_d1,in_d2,in_d3);

    _objc_release(uVar9);

    if (lVar4 == 0) {

      _objc_release(lVar8);

    }

    _objc_release(lVar4);

    uVar7 = extraout_x1_06;

  }

  FUN_0029a500(param_1,uVar7,uVar2,1,0);

  _objc_release(uVar6);

  _objc_destroyWeak(auStack_168);

  _objc_release(uVar3);

  _objc_destroyWeak(auStack_128);

  _objc_release(local_130);

  _objc_destroyWeak(auStack_118);

  _objc_release(uVar2);

  _objc_release(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




