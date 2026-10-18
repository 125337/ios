// showImageSelectionAlert: @0xf0f38


/* Function Stack Size: 0x18 bytes */



void BannerNotifyBeautifyViewController::showImageSelectionAlert_(ID param_1,SEL param_2,ID param_3)



{

  undefined *puVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  long lVar6;

  long lVar7;

  double in_d2;

  double in_d3;

  undefined1 auVar8 [16];

  undefined1 auVar9 [16];

  undefined1 auVar10 [16];

  undefined *local_198;

  undefined8 local_190;

  code *local_188;

  undefined *puStack_180;

  ID local_178;

  undefined *local_170;

  undefined8 local_168;

  code *local_160;

  undefined *puStack_158;

  ID local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  long lStack_138;

  long *local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 uStack_110;

  undefined8 uStack_108;

  undefined1 auStack_100 [128];

  long local_80;

  

  local_80 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  FUN_00291580(&_OBJC_CLASS___UIAlertController,extraout_x1,&cf_bVGrof,&cf_b,0);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  lStack_138 = 0;

  local_140 = 0;

  uStack_128 = 0;

  local_130 = (long *)0x0;

  uStack_118 = 0;

  local_120 = 0;

  uStack_108 = 0;

  uStack_110 = 0;

  _objc_retain(param_3);

  auVar8 = FUN_00293880(param_3,extraout_x1_00,&local_140,auStack_100,0x10);

  puVar1 = PTR___NSConcreteStackBlock_003886f0;

  if (auVar8._0_8_ != 0) {

    lVar7 = *local_130;

    do {

      uVar3 = auVar8._8_8_;

      lVar6 = 0;

      do {

        if (*local_130 != lVar7) {

          _objc_enumerationMutation(param_3);

          uVar3 = extraout_x1_01;

        }

        uStack_148 = *(undefined8 *)(lStack_138 + lVar6 * 8);

        local_170 = puVar1;

        local_168 = 0xc2000000;

        local_160 = FUN_000f12d4;

        puStack_158 = &DAT_0038c1b0;

        local_150 = param_1;

        FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar3,uStack_148,0,&local_170);

        auVar9 = _objc_retainAutoreleasedReturnValue();

        FUN_00290fe0(uVar2,auVar9._8_8_,auVar9._0_8_);

        _objc_release(auVar9._0_8_);

        lVar6 = lVar6 + 1;

        uVar3 = extraout_x1_02;

      } while (auVar8._0_8_ != lVar6);

      auVar8 = FUN_00293880(param_3,extraout_x1_02,&local_140,auStack_100,0x10);

    } while (auVar8._0_8_ != 0);

  }

  _objc_release(param_3);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar8 = _objc_retainAutoreleasedReturnValue();

  FUN_002a45e0(auVar8._0_8_,auVar8._8_8_,&cf_SHTM_SELECTED_IMAGE_NAME);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  uVar3 = auVar9._8_8_;

  lVar7 = auVar9._0_8_;

  if ((lVar7 != 0) && (auVar9 = FUN_00297fa0(lVar7), uVar3 = auVar9._8_8_, auVar9._0_8_ != 0)) {

    local_198 = puVar1;

    local_190 = 0xc2000000;

    local_188 = FUN_000f1330;

    puStack_180 = &DAT_0038c120;

    local_178 = param_1;

    FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar3,&cf_ndVGrof,2,&local_198);

    auVar9 = _objc_retainAutoreleasedReturnValue();

    FUN_00290fe0(uVar2,auVar9._8_8_,auVar9._0_8_);

    _objc_release(auVar9._0_8_);

    uVar3 = extraout_x1_03;

  }

  FUN_00290ee0(&_OBJC_CLASS___UIAlertAction,uVar3,&cf_Sm,1,0);

  auVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_00290fe0(uVar2,auVar9._8_8_,auVar9._0_8_);

  FUN_00293c60(&_OBJC_CLASS___UIDevice);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_002a5fa0();

  _objc_release(uVar3);

  uVar3 = extraout_x1_04;

  if (lVar6 == 1) {

    FUN_002a6220(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_0029a0a0(uVar2);

    auVar10 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1740(auVar10._0_8_,auVar10._8_8_,uVar3);

    _objc_release(auVar10._0_8_);

    _objc_release(uVar3);

    FUN_002a6220(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_002a6220(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002925a0();

    FUN_0029a0a0(uVar2);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1700(in_d2 * 0.5,in_d3 * 0.5,0x3ff0000000000000,0x3ff0000000000000);

    _objc_release(uVar5);

    _objc_release(uVar4);

    _objc_release(uVar3);

    uVar3 = extraout_x1_05;

  }

  FUN_0029a500(param_1,uVar3,uVar2,1,0);

  _objc_release(auVar9._0_8_);

  _objc_release(lVar7);

  _objc_release(auVar8._0_8_);

  _objc_release(uVar2);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_80) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




