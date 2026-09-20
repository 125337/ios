// FUN_01547670 @ 01547670

void FUN_01547670(undefined8 param_1,byte param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_100;
  bool local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined4 local_dc;
  long local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  uVar3 = DAT_02332e40;
  uVar2 = DAT_02323f10;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  local_d8 = param_3;
  local_c9 = param_2;
  if (param_3 == 3) {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_dc = 1;
    local_c0 = puVar4;
  }
  else {
    local_f1 = false;
    bVar1 = false;
    if (local_c8 == (cfstringStruct *)0x0) {
      bVar1 = (param_2 & 1) == 0;
      if (bVar1) {
        local_158 = &cf__F8F3FF;
        FUN_01551c04(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        local_100 = local_158;
      }
      else {
        local_158 = &cf__A9B4C7;
        FUN_01551c04(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_158;
      }
      local_f1 = !bVar1;
      local_150 = local_158;
    }
    else {
      local_150 = local_c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_150;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if (local_f1) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if ((local_c9 & 1) == 0) {
      if (local_d8 == 0) {
        pcVar5 = local_e8;
        FUN_0157fe2c(DAT_02323f18);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
        pcVar7 = local_e8;
        local_88 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02332e20,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
        pcVar8 = local_e8;
        local_80 = pcVar6;
        FUN_0157fe2c(DAT_02323f80,0x3fc0000000000000);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_CGColor_026ca470);
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_78 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_88,3);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      else if (local_d8 == 1) {
        pcVar5 = local_e8;
        FUN_0157fe2c(DAT_02332e38,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
        pcVar7 = local_e8;
        local_a0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02332e30,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
        pcVar8 = local_e8;
        local_98 = pcVar6;
        FUN_0157fe2c(DAT_02332e28,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_CGColor_026ca470);
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_90 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_a0,3);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      else {
        pcVar5 = local_e8;
        FUN_0157fe2c(DAT_02323e88,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
        pcVar7 = local_e8;
        local_b8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323da8,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
        pcVar8 = local_e8;
        local_b0 = pcVar6;
        FUN_0157fe2c(DAT_02323f38,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        pcVar6 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_CGColor_026ca470);
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_a8 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b8,3);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
    }
    else if (local_d8 == 0) {
      pcVar5 = local_e8;
      FUN_0157fe2c(DAT_02323d70,DAT_02332df0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
      pcVar7 = local_e8;
      local_40 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323da0,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
      pcVar8 = local_e8;
      local_38 = pcVar6;
      FUN_0157fe2c(DAT_02323d00,DAT_02332de8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_CGColor_026ca470);
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    else if (local_d8 == 1) {
      pcVar5 = local_e8;
      FUN_0157fe2c(DAT_02332e10,0x3fa3333333333333);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
      pcVar7 = local_e8;
      local_58 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02332e08,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
      pcVar8 = local_e8;
      local_50 = pcVar6;
      FUN_0157fe2c(DAT_02332e00,DAT_02332df8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_CGColor_026ca470);
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_48 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    else {
      pcVar5 = local_e8;
      FUN_0157fe2c(DAT_02332e18,DAT_02323d80);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
      pcVar7 = local_e8;
      local_70 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c90,local_e8,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
      pcVar8 = local_e8;
      local_68 = pcVar6;
      FUN_0157fe2c(DAT_02324258,DAT_02323f00);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar6 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_CGColor_026ca470);
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_60 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    local_dc = 1;
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c0);
  return;
}

