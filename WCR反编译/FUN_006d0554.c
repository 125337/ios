// FUN_006d0554 @ 006d0554

void FUN_006d0554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *local_508;
  ulong local_488;
  ulong local_480;
  undefined *local_3e0;
  undefined *local_3d8;
  cfstringStruct *local_3b0;
  cfstringStruct *local_3a0;
  cfstringStruct *local_390;
  cfstringStruct *local_380;
  cfstringStruct *local_370;
  cfstringStruct *local_360;
  cfstringStruct *local_350;
  long *local_338;
  undefined *local_2d8;
  long local_2d0;
  long local_2c8;
  undefined *local_2c0;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  long local_278;
  undefined *local_270;
  ulong local_268;
  undefined1 auStack_260 [8];
  long local_258;
  long *local_250;
  undefined8 local_220;
  undefined *local_218;
  long local_210 [3];
  ulong local_1f8;
  long local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
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
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  local_1b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1b8,param_2);
  local_1c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1c0,param_3);
  local_1c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1c8,param_4);
  local_1d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1d0,param_5);
  local_1d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1d8,param_6);
  local_1e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1e0,param_7);
  local_1e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_1e8,param_8);
  local_1f0 = 0;
  _objc_storeStrong(&local_1f0,param_9);
  uVar1 = local_1b0;
  FUN_006d15b8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_1f0;
  local_1f8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_338 = &DAT_0257edb0;
  }
  else {
    local_338 = &local_1f0;
  }
  lVar2 = *local_338;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = &cf__;
  if (local_1b8 == (cfstringStruct *)0x0) {
    local_350 = &cf___;
  }
  else {
    local_350 = local_1b8;
  }
  local_68 = local_350;
  local_a0 = &cf__;
  if (local_1c0 == (cfstringStruct *)0x0) {
    local_360 = &cf___;
  }
  else {
    local_360 = local_1c0;
  }
  local_60 = local_360;
  local_98 = &cf__;
  if (local_1c8 == (cfstringStruct *)0x0) {
    local_370 = &cf___;
  }
  else {
    local_370 = local_1c8;
  }
  local_58 = local_370;
  local_90 = &cf__;
  if (local_1d0 == (cfstringStruct *)0x0) {
    local_380 = &cf___;
  }
  else {
    local_380 = local_1d0;
  }
  local_50 = local_380;
  local_88 = &cf__;
  if (local_1d8 == (cfstringStruct *)0x0) {
    local_390 = &cf___;
  }
  else {
    local_390 = local_1d8;
  }
  local_48 = local_390;
  local_80 = &cf__;
  pcVar3 = local_1e0;
  local_210[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_3a0 = &cf___WCR_EMPTY__;
  }
  else {
    local_3a0 = local_1e0;
  }
  local_40 = local_3a0;
  local_78 = &cf__;
  if (local_1e8 == (cfstringStruct *)0x0) {
    local_3b0 = &cf___;
  }
  else {
    local_3b0 = local_1e8;
  }
  local_38 = local_3b0;
  local_70 = &cf__;
  local_30 = local_210[0];
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_68,&local_a8,8);
  _objc_retainAutoreleasedReturnValue();
  local_218 = puVar4;
  _memset(auStack_260,0,0x40);
  puVar4 = local_218;
  (*(code *)PTR__objc_retain_02578638)();
  local_3d8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,0x10);
  if (local_3d8 != (undefined *)0x0) {
    lVar2 = *local_250;
    local_3e0 = (undefined *)0x0;
    do {
      do {
        if (*local_250 - lVar2 != 0) {
          _objc_enumerationMutation(*local_250 - lVar2,puVar4);
        }
        uVar1 = local_1f8;
        uVar8 = *(undefined8 *)(local_258 + (long)local_3e0 * 8);
        puVar5 = local_218;
        local_220 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_218,PTR_s_objectForKeyedSubscript__0269d098,uVar8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = local_1f8;
        local_1f8 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_3e0 = local_3e0 + 1;
      } while (local_3e0 < local_3d8);
      local_3d8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_260,auStack_128,0x10
                );
      local_3e0 = (undefined *)0x0;
    } while (local_3d8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  uVar6 = local_1f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,&cf___);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_1f8;
  local_1f8 = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar6 = local_1f8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1f8,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf___);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_1f8;
  local_1f8 = uVar6;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_1f8;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
  _objc_retainAutoreleasedReturnValue();
  local_268 = uVar1;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_270 = puVar4;
  _memset(auStack_2b8,0,0x40);
  uVar1 = local_268;
  (*(code *)PTR__objc_retain_02578638)();
  local_480 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10);
  if (local_480 != 0) {
    lVar2 = *local_2a8;
    local_488 = 0;
    do {
      do {
        if (*local_2a8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_2a8 - lVar2,uVar1);
        }
        lVar9 = *(long *)(local_2b0 + local_488 * 8);
        puVar4 = PTR_s_rangeOfString__0269d838;
        local_278 = lVar9;
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_rangeOfString__0269d838,&cf___WCR_EMPTY__)
        ;
        local_2c8 = lVar9;
        local_2c0 = puVar4;
        if (lVar9 == 0x7fffffffffffffff) {
          lVar7 = local_278;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_278,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___WCR_EMPTY__,
                     &cf___);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_2d0 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = local_2d0;
          local_2d0 = lVar7;
          (*(code *)PTR__objc_release_02578630)(lVar9);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          lVar9 = local_2d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_2d0,PTR_s_length_0269cca0);
          if (lVar9 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_addObject__0269d180,local_2d0);
          }
          _objc_storeStrong(&local_2d0,0);
        }
        local_488 = local_488 + 1;
      } while (local_488 < local_480);
      local_480 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,auStack_1a8,0x10)
      ;
      local_488 = 0;
    } while (local_480 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar4 = local_270;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_270,PTR_s_componentsJoinedByString__0269d140,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  local_2d8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
  if (puVar4 == (undefined *)0x0) {
    if (local_1b8 == (cfstringStruct *)0x0) {
      local_508 = &cf___;
    }
    else {
      local_508 = local_1b8;
    }
    _objc_storeStrong(&local_2d8,local_508);
  }
  puVar4 = local_2d8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_2d8);
  _objc_storeStrong(&local_270,0);
  _objc_storeStrong(&local_268,0);
  _objc_storeStrong(&local_218,0);
  _objc_storeStrong(local_210,0);
  _objc_storeStrong(&local_1f8,0);
  _objc_storeStrong(&local_1f0,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1d8,0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

