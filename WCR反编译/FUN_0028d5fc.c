// FUN_0028d5fc @ 0028d5fc

void FUN_0028d5fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong local_240;
  ulong local_230;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  undefined *local_198;
  ulong local_190;
  undefined4 local_184;
  ulong local_180;
  ulong local_178;
  undefined4 local_16c;
  ulong local_168;
  long local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_e0;
  int local_d4;
  long local_d0;
  ulong local_c8;
  long local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ulong local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_1;
  _objc_storeStrong(&local_c8);
  local_d0 = param_1;
  if (local_c8 == 0) {
    local_d4 = 1;
    goto LAB_0028df24;
  }
  uVar1 = local_c8;
  FUN_0027a1c0(local_c8,&cf_codingFormat);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_h265);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf_h264);
    if ((uVar1 & 1) != 0) goto LAB_0028d70c;
    local_d4 = 1;
  }
  else {
LAB_0028d70c:
    uVar1 = local_c8;
    FUN_0027ac10(local_c8,&cf_width);
    uVar2 = local_c8;
    local_f8 = uVar1;
    FUN_0027ac10(local_c8,&cf_height);
    uVar1 = local_f8;
    local_100 = uVar2;
    FUN_0027b474(local_f8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_108 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_d4 = 1;
    }
    else {
      uVar1 = local_c8;
      FUN_0027ac10(local_c8,&cf_bitRate);
      uVar2 = local_c8;
      local_110 = uVar1;
      FUN_0027ac10(local_c8,&cf_videoBitrate);
      uVar1 = local_c8;
      local_118 = uVar2;
      FUN_0027ac10(local_c8,&cf_durationMs);
      uVar2 = local_c8;
      local_120 = uVar1;
      FUN_0027ac10(local_c8,&cf_fileSize);
      uVar1 = local_c8;
      local_128 = uVar2;
      FUN_0027a1c0(local_c8,&cf_fileFormat);
      _objc_retainAutoreleasedReturnValue();
      if (local_110 == 0) {
        local_200 = local_118;
      }
      else {
        local_200 = local_110;
      }
      local_138 = local_200;
      if (local_120 == 0) {
        local_208 = *(long *)(param_1 + 0x28) * 1000;
      }
      else {
        local_208 = local_120;
      }
      local_140 = local_208;
      local_130 = uVar1;
      if (local_128 < 0x400 || local_128 - 0x400 == 0) {
        FUN_0028dfb8(local_128 - 0x400,local_200,local_208);
        local_210 = local_200;
      }
      else {
        local_210 = local_128;
      }
      local_148 = local_210;
      FUN_0028e088();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_c8;
      local_150 = local_210;
      FUN_0027ac10(local_c8,&cf_levelOrder);
      local_168 = local_f8;
      local_16c = 0;
      if ((long)local_f8 < 0) {
        local_230 = 0;
      }
      else {
        local_230 = local_f8;
      }
      local_178 = local_230;
      local_180 = local_100;
      local_184 = 0;
      if ((long)local_100 < 0) {
        local_240 = 0;
      }
      else {
        local_240 = local_100;
      }
      local_190 = local_240;
      local_160 = local_230 * local_240;
      local_b8 = &cf_quality;
      local_70 = local_108;
      local_b0 = &cf_width;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_f8);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = &cf_height;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_100);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = &cf_score;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_160);
      _objc_retainAutoreleasedReturnValue();
      local_98 = &cf_bitRate;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_58 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_138);
      _objc_retainAutoreleasedReturnValue();
      local_90 = &cf_level;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_50 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_158);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_88 = &cf_h265;
      uVar1 = local_e0;
      local_48 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_numberWithBool__0269ce60,uVar1 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      local_80 = &cf_codingFormat;
      local_38 = local_e0;
      local_78 = &cf_spec;
      local_30 = local_c8;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_b8,9);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_198 = puVar10;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_150 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_150,&cf_size);
      }
      uVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_130,&cf_fileFormat);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_198);
      _objc_storeStrong(&local_198);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_130,0);
      local_d4 = 0;
    }
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_e0,0);
  if (local_d4 == 0) {
    local_d4 = 0;
  }
LAB_0028df24:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

