// FUN_0028a188 @ 0028a188

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0028a188(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  cfstringStruct *local_340;
  ulong local_2c0;
  ulong local_2b8;
  cfstringStruct *local_248;
  bool local_1d9;
  cfstringStruct *local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  long local_158;
  ulong local_148;
  uint local_140;
  bool local_139;
  cfstringStruct *local_138;
  long local_130;
  long local_128;
  double local_118;
  undefined8 local_108 [2];
  undefined8 local_f8 [2];
  undefined8 local_e8 [4];
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,&cf_dataItem);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_c8;
  local_c8 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_e8[0] = 0;
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,&cf_media);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_e8[0];
  local_e8[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_f8[0] = 0;
  uVar1 = local_e8[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8[0],PTR_s_valueForKey__0269d128,&cf_finderObjectBGMInfo);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_f8[0];
  local_f8[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_108[0] = 0;
  uVar1 = local_f8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_valueForKey__0269d128,&cf_musicInfo);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_108[0];
  local_108[0] = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  dVar9 = 0.0;
  local_118 = 0.0;
  uVar2 = local_108[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_108[0],PTR_s_valueForKey__0269d128,&cf_duration);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_118 = dVar9;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (0.0 < local_118) {
    lVar7 = (long)((local_118 * 128000.0) / 8.0);
    local_128 = lVar7;
    FUN_0028e088();
    _objc_retainAutoreleasedReturnValue();
    local_139 = false;
    local_130 = lVar7;
    if (lVar7 == 0) {
      local_248 = (cfstringStruct *)0x0;
    }
    else {
      local_248 = &cf__;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,lVar7);
      _objc_retainAutoreleasedReturnValue();
      local_138 = local_248;
    }
    local_139 = lVar7 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_248;
    if ((local_139 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    local_140 = 1;
    _objc_storeStrong(&local_130,0);
    goto LAB_0028ad70;
  }
  local_148 = 0;
  uVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_valueForKey__0269d128,&cf_audioSpec);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_148;
  local_148 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  uVar5 = local_148;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar5 & 1) == 0) {
LAB_0028abd4:
    uVar5 = local_c0;
    FUN_0027ac10(local_c0,&cf_videoPlayDuration);
    local_1c0 = uVar5 * 1000;
    if (local_1c0 == 0) {
      local_b0 = (cfstringStruct *)0x0;
      local_140 = 1;
    }
    else {
      lVar7 = 0x1f400;
      FUN_00292f78(local_1c0,0x1f400,local_1c0);
      local_1c8 = lVar7;
      FUN_0028e088();
      _objc_retainAutoreleasedReturnValue();
      local_1d0 = lVar7;
      if (lVar7 == 0) {
        local_340 = (cfstringStruct *)0x0;
      }
      else {
        local_340 = &cf__;
        (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,lVar7);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = local_340;
      }
      local_1d9 = lVar7 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_340;
      if (local_1d9) {
        (*(code *)PTR__objc_release_02578630)(local_1d8);
      }
      local_140 = 1;
      _objc_storeStrong(&local_1d0,0);
    }
  }
  else {
    _memset(auStack_198,0,0x40);
    uVar5 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_2b8 != 0) {
      lVar7 = *local_188;
      local_2c0 = 0;
      do {
        do {
          if (*local_188 - lVar7 != 0) {
            _objc_enumerationMutation(*local_188 - lVar7,uVar5);
          }
          lVar8 = *(long *)(local_190 + local_2c0 * 8);
          local_158 = lVar8;
          FUN_0027ac10(lVar8,&cf_audioBitrate);
          local_1a0 = lVar8;
          if (lVar8 == 0) {
            lVar8 = local_158;
            FUN_0027ac10(local_158,&cf_bitRate);
            local_1a0 = lVar8;
          }
          lVar8 = local_158;
          FUN_0027ac10(local_158,&cf_durationMs);
          local_1a8 = lVar8;
          if (lVar8 == 0) {
            uVar3 = local_c0;
            FUN_0027ac10(local_c0,&cf_videoPlayDuration);
            local_1a8 = uVar3 * 1000;
          }
          lVar8 = local_1a0;
          FUN_00292f78(local_1a0,local_1a8);
          local_1b0 = lVar8;
          FUN_0028e088();
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          if (lVar8 != 0) {
            pcVar6 = &cf__;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf__,PTR_s_stringByAppendingString__0269d398,local_1b8);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = pcVar6;
          }
          local_140 = (uint)(lVar8 != 0);
          _objc_storeStrong(&local_1b8,0);
          if (local_140 != 0) goto LAB_0028ab98;
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_2c0 = 0;
      } while (local_2b8 != 0);
    }
    local_140 = 0;
LAB_0028ab98:
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if (local_140 == 0) goto LAB_0028abd4;
  }
  _objc_storeStrong(&local_148,0);
LAB_0028ad70:
  _objc_storeStrong(local_108);
  _objc_storeStrong(local_f8,0);
  _objc_storeStrong(local_e8,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

