// FUN_01792e64 @ 01792e64

void FUN_01792e64(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_328;
  undefined *local_320;
  undefined *local_2c0;
  undefined *local_2b8;
  ulong local_258;
  undefined1 auStack_248 [8];
  long local_240;
  long *local_238;
  undefined8 local_208;
  undefined *local_200;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  ulong local_1b0;
  undefined *local_1a8;
  ulong local_1a0;
  ulong local_198;
  undefined4 local_18c;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_178 [128];
  ulong local_f8;
  ulong local_f0;
  cfstringStruct *local_e8;
  undefined1 auStack_e0 [128];
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_180 = 0;
  _objc_storeStrong(&local_180,param_1);
  uVar1 = local_180;
  FUN_01791da8();
  _objc_retainAutoreleasedReturnValue();
  local_188 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18c = 1;
  }
  else {
    uVar1 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_198 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf__);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_258 = uVar1;
      if (uVar1 == 0) {
        local_258 = local_198;
      }
      _objc_storeStrong(&local_198,local_258);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(&local_1a0,0);
    }
    local_60 = local_188;
    uVar1 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_stringByAppendingString__0269d398,&cf__prefschanged);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_188;
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_stringByAppendingString__0269d398,&cf__settingschanged);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_188;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_stringByAppendingString__0269d398,&cf__preferences_changed);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_188;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_stringByAppendingString__0269d398,&cf__configUpdated);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_188;
    local_40 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_stringByAppendingString__0269d398,&cf__ReloadPrefs);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf____configUpdated);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7
              );
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)();
    _CFNotificationCenterGetDarwinNotifyCenter();
    local_1b0 = uVar1;
    if (uVar1 != 0) {
      _memset(auStack_1f8,0,0x40);
      puVar6 = local_1a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_2b8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_e0,0x10)
      ;
      if (local_2b8 != (undefined *)0x0) {
        lVar8 = *local_1e8;
        local_2c0 = (undefined *)0x0;
        do {
          do {
            if (*local_1e8 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1e8 - lVar8,puVar6);
            }
            local_1b8 = *(undefined8 *)(local_1f0 + (long)local_2c0 * 8);
            _CFNotificationCenterPostNotification(local_1b0,local_1b8,0,0,1);
            local_2c0 = local_2c0 + 1;
          } while (local_2c0 < local_2b8);
          local_2b8 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_e0,
                     0x10);
          local_2c0 = (undefined *)0x0;
        } while (local_2b8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    uVar1 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_stringByAppendingString__0269d398);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_188;
    local_f8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_188,PTR_s_stringByAppendingString__0269d398,&cf_ConfigDidChange);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = &cf_WCPulseConfigDidChange;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_f0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar6;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_248,0,0x40);
    puVar6 = local_200;
    (*(code *)PTR__objc_retain_02578638)();
    local_320 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_178,0x10);
    if (local_320 != (undefined *)0x0) {
      lVar8 = *local_238;
      local_328 = (undefined *)0x0;
      do {
        do {
          if (*local_238 - lVar8 != 0) {
            _objc_enumerationMutation(*local_238 - lVar8,puVar6);
          }
          local_208 = *(undefined8 *)(local_240 + (long)local_328 * 8);
          puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar7);
          local_328 = local_328 + 1;
        } while (local_328 < local_320);
        local_320 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_248,auStack_178,
                   0x10);
        local_328 = (undefined *)0x0;
      } while (local_320 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_200);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_198,0);
    local_18c = 0;
  }
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_180,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

