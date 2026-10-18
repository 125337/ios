// showDateTimeDisplayModePicker @0x19b27c


/* Function Stack Size: 0x10 bytes */



void XZYAvatarAboveBubbleSettingsViewController::showDateTimeDisplayModePicker

               (ID param_1,SEL param_2)



{

  ulong uVar1;

  cfstringStruct *pcVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar9;

  long lVar10;

  undefined8 in_d1;

  undefined8 in_d2;

  undefined8 in_d3;

  undefined1 auVar11 [16];

  undefined1 auVar12 [16];

  undefined1 auVar13 [16];

  undefined *local_1d8;

  undefined8 local_1d0;

  code *local_1c8;

  undefined *puStack_1c0;

  undefined1 auStack_1b8 [8];

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

  undefined *local_140;

  undefined8 local_138;

  code *local_130;

  undefined *puStack_128;

  undefined1 auStack_120 [8];

  undefined1 auStack_118 [8];

  undefined1 auStack_110 [128];

  long local_90;

  

  local_90 = *(long *)PTR____stack_chk_guard_00388738;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar11 = _objc_retainAutoreleasedReturnValue();

  auVar12 = FUN_00297480(auVar11._0_8_,auVar11._8_8_,&cf_aabDateTimeDisplayMode);

  uVar1 = 0;

  if (auVar12._0_8_ < 9) {

    uVar1 = auVar12._0_8_;

  }

  FUN_00291580(&_OBJC_CLASS___UIAlertController,auVar12._8_8_,&cf_>f_y7h_,0,0);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  _objc_initWeak(auStack_118,param_1);

  local_140 = PTR___NSConcreteStackBlock_003886f0;

  local_138 = 0xc2000000;

  local_130 = FUN_0019b8f0;

  puStack_128 = &DAT_0038e130;

  _objc_copyWeak(auStack_120,auStack_118);

  auVar12 = _objc_retainBlock(&local_140);

  uVar4 = auVar12._0_8_;

  uStack_158 = 0;

  local_160 = 0;

  uStack_148 = 0;

  uStack_150 = 0;

  lStack_178 = 0;

  local_180 = 0;

  uStack_168 = 0;

  local_170 = (long *)0x0;

  lVar5 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be9c8,auVar12._8_8_,&local_180,

                       auStack_110,0x10);

  if (lVar5 != 0) {

    lVar10 = *local_170;

    do {

      lVar9 = 0;

      do {

        if (*local_170 != lVar10) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003be9c8);

        }

        uVar6 = FUN_002974a0(*(undefined8 *)(lStack_178 + lVar9 * 8));

        if (uVar6 == uVar1) {

          FUN_001968f4(uVar1);

          auVar12 = _objc_retainAutoreleasedReturnValue();

          FUN_002a4680(&_OBJC_CLASS___NSString,auVar12._8_8_,&::cf__);

          uVar7 = _objc_retainAutoreleasedReturnValue();

          _objc_release(auVar12._0_8_);

        }

        else {

          FUN_001968f4(uVar6);

          uVar7 = _objc_retainAutoreleasedReturnValue();

        }

        local_1b0 = PTR___NSConcreteStackBlock_003886f0;

        local_1a8 = 0xc2000000;

        local_1a0 = FUN_0019ba80;

        puStack_198 = &DAT_00389140;

        _objc_retain(uVar4);

        local_190 = uVar4;

        uStack_188 = uVar6;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1,uVar7,0,&local_1b0);

        auVar12 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar3,auVar12._8_8_,auVar12._0_8_);

        _objc_release(auVar12._0_8_);

        _objc_release(local_190);

        _objc_release(uVar7);

        lVar9 = lVar9 + 1;

      } while (lVar5 != lVar9);

      lVar5 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003be9c8,extraout_x1_00,&local_180,

                           auStack_110,0x10);

    } while (lVar5 != 0);

  }

  pcVar2 = &cf__IN_;

  if (uVar1 != 8) {

    pcVar2 = &cf__IN_;

  }

  _objc_retain(pcVar2);

  local_1d8 = PTR___NSConcreteStackBlock_003886f0;

  local_1d0 = 0xc2000000;

  local_1c8 = FUN_0019ba90;

  puStack_1c0 = &DAT_00389250;

  _objc_copyWeak(auStack_1b8,auStack_118);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_01,pcVar2,0,&local_1d8);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar12._8_8_,auVar12._0_8_);

  _objc_release(auVar12._0_8_);

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,extraout_x1_02,&cf_Sm,1,0);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar3,auVar12._8_8_,auVar12._0_8_);

  _objc_release(auVar12._0_8_);

  FUN_0029a0a0(uVar3);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_release();

  uVar7 = extraout_x1_03;

  if (lVar5 != 0) {

    FUN_002a4dc0(param_1);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_00296780(&_OBJC_CLASS___NSIndexPath,auVar12._8_8_,0,3);

    auVar13 = _objc_retainAutoreleasedReturnValue();

    FUN_00292aa0(auVar12._0_8_,auVar13._8_8_,auVar13._0_8_);

    lVar10 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar13._0_8_);

    _objc_release(auVar12._0_8_);

    lVar5 = lVar10;

    if (lVar10 == 0) {

      FUN_002a6220(param_1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

    }

    FUN_0029a0a0(uVar3);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar12._0_8_,auVar12._8_8_,lVar5);

    _objc_release(auVar12._0_8_);

    if (lVar10 == 0) {

      _objc_release(lVar5);

      FUN_002a6220(param_1);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      uVar7 = FUN_002925a0();

    }

    else {

      uVar7 = FUN_002925a0(lVar10);

    }

    FUN_0029a0a0(uVar3);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(uVar7,in_d1,in_d2,in_d3);

    _objc_release(uVar8);

    if (lVar10 == 0) {

      _objc_release(lVar5);

    }

    _objc_release(lVar10);

    uVar7 = extraout_x1_04;

  }

  FUN_0029a500(param_1,uVar7,uVar3,1,0);

  _objc_destroyWeak(auStack_1b8);

  _objc_release(pcVar2);

  _objc_release(uVar4);

  _objc_destroyWeak(auStack_120);

  _objc_destroyWeak(auStack_118);

  _objc_release(uVar3);

  _objc_release(auVar11._0_8_);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_90) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




