// FUN_01549608 @ 01549608

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01549608(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_278;
  cfstringStruct *local_228;
  cfstringStruct *local_218;
  cfstringStruct *local_210;
  undefined *local_1d8;
  undefined *local_1c8;
  undefined *local_1b8;
  undefined *local_1a8;
  undefined *local_198;
  undefined *local_188;
  undefined *local_178;
  undefined *local_168;
  undefined *local_158;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  undefined *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined4 local_90;
  byte local_89;
  cfstringStruct *local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  local_88 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_88,param_2);
  local_89 = param_3;
  if (local_80 == 0) {
    local_90 = 1;
  }
  else {
    local_210 = local_88;
    local_a1 = 0;
    local_b1 = 0;
    if (local_88 == (cfstringStruct *)0x0) {
      if ((param_3 & 1) == 0) {
        local_218 = &cf__D8E9CD;
        FUN_01551c04(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 1;
        local_b0 = local_218;
      }
      else {
        local_218 = &cf__444B52;
        FUN_01551c04(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        local_a1 = 1;
        local_a0 = local_218;
      }
      local_210 = local_218;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_210;
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    bVar1 = (local_89 & 1) == 0;
    if (bVar1) {
      local_228 = local_98;
      FUN_0158205c(0);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_228;
    }
    else {
      local_c8 = local_98;
      FUN_0157fe2c(DAT_02323cc0,0x3fd3333333333333);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_CGColor_026ca470);
      local_d8 = local_98;
      local_40 = pcVar2;
      FUN_0157fe2c(DAT_02323d80,DAT_02323c70);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_CGColor_026ca470);
      local_e8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_38 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      puVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_CGColor_026ca470);
      local_228 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_228;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_228;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_f8);
      (*(code *)PTR__objc_release_02578630)(local_e8);
      (*(code *)PTR__objc_release_02578630)(local_d8);
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setColors__026ca8d0,local_c0);
    uVar4 = 0x3fe0000000000000;
    uVar5 = 0;
    FUN_015480d8();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,local_80,PTR_s_setStartPoint__026caa70);
    uVar4 = 0x3fe0000000000000;
    uVar5 = 0x3ff0000000000000;
    FUN_015480d8();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,local_80,PTR_s_setEndPoint__026ca940);
    bVar1 = (local_89 & 1) == 0;
    if (bVar1) {
      local_198 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_78 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02332e48,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_70 = local_1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe6666666666666,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_68 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_278 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_60 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = local_278;
    }
    else {
      local_158 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_168 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02324038,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_178 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_50 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_278 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_48 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_188 = local_278;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setLocations__026accb0,local_278);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
      (*(code *)PTR__objc_release_02578630)(local_1c8);
      (*(code *)PTR__objc_release_02578630)(local_1b8);
      (*(code *)PTR__objc_release_02578630)(local_1a8);
      (*(code *)PTR__objc_release_02578630)(local_198);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_188);
      (*(code *)PTR__objc_release_02578630)(local_178);
      (*(code *)PTR__objc_release_02578630)(local_168);
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_card_warm_colors);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_card_warm_locations);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_98,0);
    local_90 = 0;
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

