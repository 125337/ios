// FUN_01553708 @ 01553708

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01553708(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  undefined *local_470;
  cfstringStruct *local_420;
  cfstringStruct *local_418;
  cfstringStruct *local_398;
  cfstringStruct *local_358;
  cfstringStruct *local_350;
  cfstringStruct *local_338;
  cfstringStruct *local_330;
  undefined *local_2e0;
  undefined *local_2d0;
  undefined *local_2c0;
  undefined *local_2b0;
  undefined *local_2a0;
  undefined *local_290;
  undefined *local_280;
  undefined *local_270;
  undefined *local_260;
  cfstringStruct *local_250;
  undefined *local_240;
  undefined *local_230;
  undefined *local_220;
  undefined *local_210;
  bool local_201;
  cfstringStruct *local_200;
  bool local_1f1;
  undefined *local_1f0;
  bool local_1e1;
  undefined *local_1e0;
  bool local_1d1;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  byte local_1b1;
  cfstringStruct *local_1b0;
  byte local_1a1;
  cfstringStruct *local_1a0;
  byte local_191;
  undefined *local_190;
  byte local_181;
  cfstringStruct *local_180;
  byte local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  byte local_159;
  cfstringStruct *local_158;
  byte local_149;
  cfstringStruct *local_148;
  byte local_139;
  undefined *local_138;
  byte local_129;
  cfstringStruct *local_128;
  byte local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_101;
  cfstringStruct *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined4 local_e0;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  uVar4 = DAT_02332e48;
  uVar3 = DAT_02323c90;
  uVar2 = DAT_02323c70;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_2);
  local_d9 = param_3;
  if (local_d0 == (cfstringStruct *)0x0) {
    local_e0 = 1;
  }
  else {
    local_330 = local_d8;
    local_f1 = 0;
    local_101 = 0;
    if (local_d8 == (cfstringStruct *)0x0) {
      if ((param_3 & 1) == 0) {
        local_338 = &cf__D8E9CD;
        FUN_01551c04(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        local_101 = 1;
        local_100 = local_338;
      }
      else {
        local_338 = &cf__444B52;
        FUN_01551c04(0x3ff0000000000000);
        _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        local_f0 = local_338;
      }
      local_330 = local_338;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_330;
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    pcVar5 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_colors_026b09b0);
    _objc_retainAutoreleasedReturnValue();
    local_119 = 0;
    local_129 = 0;
    local_139 = 0;
    local_149 = 0;
    local_159 = 0;
    local_350 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      if ((local_d9 & 1) == 0) {
        local_358 = local_e8;
        FUN_0158205c(0);
        _objc_retainAutoreleasedReturnValue();
        local_159 = 1;
        local_158 = local_358;
      }
      else {
        pcVar6 = local_e8;
        FUN_0157fe2c(DAT_02323cc0,0x3fd3333333333333);
        _objc_retainAutoreleasedReturnValue();
        local_119 = 1;
        local_118 = pcVar6;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_CGColor_026ca470);
        pcVar7 = local_e8;
        local_40 = pcVar6;
        FUN_0157fe2c(DAT_02323d80,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 1;
        local_128 = pcVar7;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_CGColor_026ca470);
        puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_38 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithWhite_alpha__0269cf30);
        _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        local_138 = puVar8;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGColor_026ca470);
        local_358 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,3);
        _objc_retainAutoreleasedReturnValue();
        local_149 = 1;
        local_148 = local_358;
      }
      local_350 = local_358;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = local_350;
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    if ((local_129 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    local_171 = 0;
    local_181 = 0;
    local_191 = 0;
    local_1a1 = 0;
    local_1b1 = 0;
    if ((local_d9 & 1) == 0) {
      local_398 = local_e8;
      FUN_0158205c(uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_1b1 = 1;
      local_1b0 = local_398;
    }
    else {
      pcVar5 = local_e8;
      FUN_0157fe2c(uVar2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_171 = 1;
      local_170 = pcVar5;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_CGColor_026ca470);
      pcVar6 = local_e8;
      local_58 = pcVar5;
      FUN_0157fe2c(uVar3,DAT_02323da8);
      _objc_retainAutoreleasedReturnValue();
      local_181 = 1;
      local_180 = pcVar6;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_CGColor_026ca470);
      puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_50 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,0,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_191 = 1;
      local_190 = puVar8;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_CGColor_026ca470);
      local_398 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_48 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_1a1 = 1;
      local_1a0 = local_398;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = local_398;
    if ((local_1b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1b0);
    }
    if ((local_1a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1a0);
    }
    if ((local_191 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_190);
    }
    if ((local_181 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_180);
    }
    if ((local_171 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_170);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeAnimationForKey__026ca7f0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_card_warm_locations);
    puVar8 = PTR__OBJC_CLASS___CABasicAnimation_026ce1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CABasicAnimation_026ce1e0,PTR_s_animationWithKeyPath__026ca510,
               &cf_colors);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_setFromValue__026ca968,local_110);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setToValue__026caac8,local_168);
    FUN_01588270(0x4017333333333333,0x401e666666666666);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setDuration__026ca920);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setAutoreverses__026ca880,1);
    (*(code *)PTR__objc_msgSend_02578628)(0x7f800000,local_1c0,PTR_s_setRepeatCount__026caa18);
    puVar8 = PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CAMediaTimingFunction_026ce1e8,PTR_s_functionWithName__026ca648,
               *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_02578428);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setTimingFunction__026caaa0);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_addAnimation_forKey__026ca498,local_1c0,&cf_wcr_card_warm_colors);
    puVar8 = PTR__OBJC_CLASS___CABasicAnimation_026ce1e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CABasicAnimation_026ce1e0,PTR_s_animationWithKeyPath__026ca510,
               &cf_locations);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_d0;
    local_1c8 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_locations_026b09b8);
    _objc_retainAutoreleasedReturnValue();
    local_1d1 = false;
    local_1e1 = false;
    local_1f1 = false;
    local_201 = false;
    bVar1 = false;
    local_418 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      bVar1 = (local_d9 & 1) == 0;
      if (bVar1) {
        local_210 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_220 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_90 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_230 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_88 = local_220;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe6666666666666,PTR__OBJC_CLASS___NSNumber_026ce038,
                   PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_240 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_80 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                   PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_420 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_78 = local_240;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_90,4);
        _objc_retainAutoreleasedReturnValue();
        local_250 = local_420;
      }
      else {
        local_1d0 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_70 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324038,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0
                  );
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_68 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                   PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_420 = (cfstringStruct *)PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_60 = local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_70,3);
        _objc_retainAutoreleasedReturnValue();
        local_200 = local_420;
      }
      local_1d1 = !bVar1;
      local_1e1 = !bVar1;
      local_1f1 = !bVar1;
      local_201 = !bVar1;
      local_418 = local_420;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setFromValue__026ca968,local_418);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_250);
      (*(code *)PTR__objc_release_02578630)(local_240);
      (*(code *)PTR__objc_release_02578630)(local_230);
      (*(code *)PTR__objc_release_02578630)(local_220);
      (*(code *)PTR__objc_release_02578630)(local_210);
    }
    if (local_201) {
      (*(code *)PTR__objc_release_02578630)(local_200);
    }
    if (local_1f1) {
      (*(code *)PTR__objc_release_02578630)(local_1f0);
    }
    if (local_1e1) {
      (*(code *)PTR__objc_release_02578630)(local_1e0);
    }
    if (local_1d1) {
      (*(code *)PTR__objc_release_02578630)(local_1d0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    bVar1 = (local_d9 & 1) == 0;
    if (bVar1) {
      local_2a0 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_2b0 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_c8 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02332e58,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_2c0 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_c0 = local_2b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323f28,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_2d0 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_b8 = local_2c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_470 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = local_2d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_2e0 = local_470;
    }
    else {
      local_260 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_270 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_a8 = local_260;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_0232c670,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_280 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_a0 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_470 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_98 = local_280;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a8
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_290 = local_470;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setToValue__026caac8,local_470);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_2e0);
      (*(code *)PTR__objc_release_02578630)(local_2d0);
      (*(code *)PTR__objc_release_02578630)(local_2c0);
      (*(code *)PTR__objc_release_02578630)(local_2b0);
      (*(code *)PTR__objc_release_02578630)(local_2a0);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_290);
      (*(code *)PTR__objc_release_02578630)(local_280);
      (*(code *)PTR__objc_release_02578630)(local_270);
      (*(code *)PTR__objc_release_02578630)(local_260);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_duration_0269dd70);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setDuration__026ca920);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setAutoreverses__026ca880,1);
    (*(code *)PTR__objc_msgSend_02578628)(0x7f800000,local_1c8,PTR_s_setRepeatCount__026caa18);
    puVar8 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_timingFunction_026b09c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_setTimingFunction__026caaa0);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_addAnimation_forKey__026ca498,local_1c8,&cf_wcr_card_warm_locations);
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_e8,0);
    local_e0 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

