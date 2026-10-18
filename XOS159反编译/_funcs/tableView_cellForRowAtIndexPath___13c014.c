// tableView:cellForRowAtIndexPath: @0x13c014


/* Function Stack Size: 0x20 bytes */



ID CadisContactPickerViewController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  long lVar4;

  undefined8 uVar5;

  cfstringStruct *pcVar6;

  cfstringStruct *pcVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  ID IVar10;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  long lVar11;

  undefined8 uVar12;

  long lVar13;

  undefined1 auVar14 [16];

  cfstringStruct *local_140;

  undefined8 local_130;

  long lStack_128;

  long *local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 uStack_100;

  undefined8 uStack_f8;

  undefined1 auStack_f0 [128];

  long local_70;

  

  local_70 = *(long *)PTR____stack_chk_guard_00388738;

  _objc_retain(param_3);

  _objc_retain(param_4);

  lVar2 = FUN_0029c020(param_4);

  if (lVar2 == 0) {

    lVar2 = FUN_0029bae0(param_4);

    FUN_0029c2e0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_00293860();

    _objc_release(uVar3);

    if (lVar4 <= lVar2) goto LAB_0013c184;

    FUN_0029c2e0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar14 = FUN_0029bae0(param_4);

    FUN_00299500(uVar3,auVar14._8_8_,auVar14._0_8_);

    uVar5 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    lVar2 = FUN_0029bae0(param_4);

    FUN_002952c0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    lVar4 = FUN_00293860();

    _objc_release(uVar3);

    if (lVar4 <= lVar2) {

LAB_0013c184:

      lVar2 = _objc_alloc_init(&_OBJC_CLASS___UITableViewCell);

      goto LAB_0013c818;

    }

    FUN_002952c0(param_1);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    auVar14 = FUN_0029bae0(param_4);

    FUN_00299500(uVar3,auVar14._8_8_,auVar14._0_8_);

    uVar5 = _objc_retainAutoreleasedReturnValue();

  }

  _objc_release(uVar3);

  FUN_00299540(uVar5,extraout_x1,&cf_displayName);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  pcVar6 = auVar14._0_8_;

  if (pcVar6 == (cfstringStruct *)0x0) {

    FUN_00299540(uVar5,auVar14._8_8_,&cf_name);

    pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    local_140 = &::cf___;

    if (pcVar7 != (cfstringStruct *)0x0) {

      local_140 = pcVar7;

    }

    _objc_retain();

    _objc_release(pcVar7);

  }

  else {

    _objc_retain(pcVar6);

    local_140 = pcVar6;

  }

  _objc_release(pcVar6);

  FUN_00299540(uVar5,extraout_x1_00,&cf_remark);

  pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar6 = &::cf___;

  if (pcVar7 != (cfstringStruct *)0x0) {

    pcVar6 = pcVar7;

  }

  _objc_retain();

  _objc_release(pcVar7);

  FUN_00299540(uVar5,extraout_x1_01,&cf_isGroup);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924e0();

  _objc_release(uVar3);

  lVar2 = FUN_0029c020(param_4);

  pcVar7 = &cf_CadisSelected;

  if (lVar2 != 0) {

    pcVar7 = &cf_CadisPicker;

  }

  _objc_retain(pcVar7);

  FUN_002943e0(param_3,extraout_x1_02,pcVar7);

  lVar2 = _objc_retainAutoreleasedReturnValue();

  if (lVar2 == 0) {

    auVar14 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

    lVar2 = FUN_00296ec0(auVar14._0_8_,auVar14._8_8_,3,pcVar7);

    FUN_002a4ac0(0x4030000000000000,*(undefined8 *)PTR__UIFontWeightMedium_00388420,

                 &_OBJC_CLASS___UIFont);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002a50e0(lVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(auVar14._0_8_,auVar14._8_8_,uVar3);

    _objc_release(auVar14._0_8_);

    _objc_release(uVar3);

    FUN_002a4aa0(0x4028000000000000,&_OBJC_CLASS___UIFont);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(auVar14._0_8_,auVar14._8_8_,uVar3);

    _objc_release(auVar14._0_8_);

    _objc_release(uVar3);

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(auVar14._0_8_,auVar14._8_8_,uVar3);

    _objc_release(auVar14._0_8_);

    _objc_release(uVar3);

  }

  uStack_108 = 0;

  local_110 = 0;

  uStack_f8 = 0;

  uStack_100 = 0;

  lStack_128 = 0;

  local_130 = 0;

  uStack_118 = 0;

  local_120 = (long *)0x0;

  FUN_00293640(lVar2);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  FUN_002a4840();

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar3);

  lVar4 = FUN_00293880(uVar8,extraout_x1_03,&local_130,auStack_f0,0x10);

  if (lVar4 != 0) {

    lVar13 = *local_120;

    do {

      lVar11 = 0;

      do {

        if (*local_120 != lVar13) {

          _objc_enumerationMutation(uVar8);

        }

        uVar12 = *(undefined8 *)(lStack_128 + lVar11 * 8);

        auVar14 = FUN_002a4e60(uVar12);

        uVar3 = auVar14._8_8_;

        if (auVar14._0_8_ == &DAT_00002260) {

          FUN_0029b340(uVar12);

          uVar3 = extraout_x1_04;

        }

        lVar11 = lVar11 + 1;

      } while (lVar4 != lVar11);

      lVar4 = FUN_00293880(uVar8,uVar3,&local_130,auStack_f0,0x10);

    } while (lVar4 != 0);

  }

  _objc_release(uVar8);

  FUN_002a50e0(lVar2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,local_140);

  _objc_release(auVar14._0_8_);

  lVar4 = FUN_0029c020(param_4);

  if (lVar4 == 0) {

    FUN_0029bae0(param_4);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_05,&cf___ld);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_002944a0(lVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar14._0_8_;

    FUN_002a1d60(uVar8,auVar14._8_8_,uVar3);

LAB_0013c578:

    _objc_release(uVar8);

  }

  else if (iVar1 == 0) {

    auVar14 = FUN_00297fa0(pcVar6);

    if (auVar14._0_8_ != 0) {

      FUN_00299540(uVar5,auVar14._8_8_,&cf_name);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      uVar3 = auVar14._0_8_;

      FUN_002a4680(&_OBJC_CLASS___NSString,auVar14._8_8_,&cf_5fy_);

      uVar8 = _objc_retainAutoreleasedReturnValue();

      FUN_002944a0(lVar2);

      auVar14 = _objc_retainAutoreleasedReturnValue();

      FUN_002a1d60(auVar14._0_8_,auVar14._8_8_,uVar8);

      _objc_release(auVar14._0_8_);

      goto LAB_0013c578;

    }

    FUN_002944a0(lVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar14._0_8_;

    FUN_002a1d60(uVar3,auVar14._8_8_,0);

  }

  else {

    FUN_002944a0(lVar2);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    uVar3 = auVar14._0_8_;

    FUN_002a1d60(uVar3,auVar14._8_8_,&cf__J);

  }

  _objc_release(uVar3);

  if (DAT_003e88f8 == 0) {

    _UIGraphicsBeginImageContextWithOptions(0x4046000000000000,0x4046000000000000,0,0);

    _UIGraphicsGetImageFromCurrentImageContext();

    lVar13 = _objc_retainAutoreleasedReturnValue();

    lVar4 = DAT_003e88f8;

    DAT_003e88f8 = lVar13;

    _objc_release(lVar4);

    _UIGraphicsEndImageContext();

  }

  lVar4 = DAT_003e88f8;

  FUN_00296540(lVar2);

  auVar14 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec00(auVar14._0_8_,auVar14._8_8_,lVar4);

  _objc_release(auVar14._0_8_);

  auVar14 = FUN_0029c020(param_4);

  if (auVar14._0_8_ == 0) {

    FUN_0029c820(lVar2,auVar14._8_8_,0);

    FUN_0029c800(lVar2,extraout_x1_09,0);

  }

  else {

    _objc_alloc(&_OBJC_CLASS___UIView);

    uVar3 = FUN_00296b80(0,0,0x403a000000000000,0x403a000000000000);

    FUN_00297e40();

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d820(0x402a000000000000);

    _objc_release(uVar8);

    FUN_00297e40(uVar3);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0e0(0x3ff8000000000000);

    _objc_release(uVar8);

    FUN_002a6220(param_1);

    uVar8 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5320();

    uVar12 = _objc_retainAutoreleasedReturnValue();

    _objc_retainAutorelease();

    uVar9 = FUN_00290a20(uVar12);

    FUN_00297e40(uVar3);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_0029d0a0(auVar14._0_8_,auVar14._8_8_,uVar9);

    _objc_release(auVar14._0_8_);

    _objc_release(uVar12);

    _objc_release(uVar8);

    FUN_00292dc0(&_OBJC_CLASS___UIColor);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_0029cf60(uVar3,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    uVar8 = _objc_alloc(&_OBJC_CLASS___UILabel);

    FUN_002925a0(uVar3);

    auVar14 = FUN_00296b80(uVar8);

    uVar8 = auVar14._0_8_;

    FUN_002a1d60(uVar8,auVar14._8_8_,&cf__);

    FUN_002a4ac0(0x4032000000000000,*(undefined8 *)PTR__UIFontWeightMedium_00388420,

                 &_OBJC_CLASS___UIFont);

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_0029e520(uVar8,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    FUN_002a6220(param_1);

    uVar12 = _objc_retainAutoreleasedReturnValue();

    FUN_002a5320();

    auVar14 = _objc_retainAutoreleasedReturnValue();

    FUN_002a1da0(uVar8,auVar14._8_8_,auVar14._0_8_);

    _objc_release(auVar14._0_8_);

    _objc_release(uVar12);

    FUN_002a1d80(uVar8,extraout_x1_06,1);

    FUN_00291380(uVar3,extraout_x1_07,uVar8);

    FUN_0029c820(lVar2,extraout_x1_08,uVar3);

    _objc_release(uVar8);

    _objc_release(uVar3);

  }

  _objc_release(pcVar7);

  _objc_release(pcVar6);

  _objc_release(local_140);

  _objc_release(uVar5);

LAB_0013c818:

  _objc_release(param_4);

  _objc_release(param_3);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_70) {

    IVar10 = _objc_autoreleaseReturnValue(lVar2);

    return IVar10;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




