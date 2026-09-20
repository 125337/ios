// FUN_02034008 @ 02034008

void FUN_02034008(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_330;
  undefined *local_328;
  ulong local_278;
  ulong local_270;
  undefined *local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  undefined *local_178;
  undefined4 local_16c;
  ulong local_168;
  undefined *local_160;
  undefined1 auStack_158 [128];
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  _objc_storeStrong(&local_168,param_1);
  uVar1 = local_168;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_16c = 1;
    local_160 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar2;
    _memset(auStack_1c0,0,0x40);
    uVar1 = local_168;
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10);
    if (local_270 != 0) {
      lVar7 = *local_1b0;
      local_278 = 0;
      do {
        do {
          if (*local_1b0 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1b0 - lVar7,uVar1);
          }
          uVar8 = *(ulong *)(local_1b8 + local_278 * 8);
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_180 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar8 & 1) != 0) {
            uVar8 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_objectForKey__0269e048,&cf_index);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_1c8 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar8 & 1) == 0) {
              local_16c = 3;
            }
            else {
              uVar8 = local_1c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_integerValue_026ca750);
              local_1d0 = uVar8;
              if (((long)uVar8 < 0) || (3 < (long)uVar8)) {
                local_16c = 3;
              }
              else {
                uVar8 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_objectForKey__0269e048,&cf_lightHex);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar8;
                FUN_0219cfcc();
                _objc_retainAutoreleasedReturnValue();
                local_1d8 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar8);
                uVar8 = local_180;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_180,PTR_s_objectForKey__0269e048,&cf_darkHex);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar8;
                FUN_0219cfcc();
                _objc_retainAutoreleasedReturnValue();
                local_1e0 = uVar3;
                (*(code *)PTR__objc_release_02578630)(uVar8);
                uVar8 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
                if ((uVar8 == 0) &&
                   (uVar8 = local_1e0,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0),
                   uVar8 == 0)) {
                  local_16c = 3;
                }
                else {
                  uVar8 = local_1d8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
                  if (uVar8 == 0) {
                    _objc_storeStrong(&local_1d8,local_1e0);
                  }
                  uVar8 = local_1e0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_length_0269cca0);
                  if (uVar8 == 0) {
                    _objc_storeStrong(&local_1e0,local_1d8);
                  }
                  puVar2 = local_178;
                  local_d8 = &cf_index;
                  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                             local_1d0);
                  _objc_retainAutoreleasedReturnValue();
                  local_d0 = &cf_lightHex;
                  local_b8 = local_1d8;
                  local_c8 = &cf_darkHex;
                  local_b0 = local_1e0;
                  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_c0 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                             local_1d0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar2,PTR_s_setObject_forKey__026ca9e8,puVar5);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  local_16c = 0;
                }
                _objc_storeStrong(&local_1e0);
                _objc_storeStrong(&local_1d8,0);
              }
            }
            _objc_storeStrong(&local_1c8,0);
          }
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10
                  );
        local_278 = 0;
      } while (local_270 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar4 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = puVar2;
    _memset(auStack_238,0,0x40);
    puVar2 = local_1e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_328 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_158,0x10);
    if (local_328 != (undefined *)0x0) {
      lVar7 = *local_228;
      local_330 = (undefined *)0x0;
      do {
        do {
          if (*local_228 - lVar7 != 0) {
            _objc_enumerationMutation(*local_228 - lVar7,puVar2);
          }
          local_1f8 = *(undefined8 *)(local_230 + (long)local_330 * 8);
          puVar4 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_objectForKey__0269e048,local_1f8);
          _objc_retainAutoreleasedReturnValue();
          local_240 = puVar4;
          if (puVar4 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addObject__0269d180,puVar4);
          }
          _objc_storeStrong(&local_240,0);
          local_330 = local_330 + 1;
        } while (local_330 < local_328);
        local_328 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_158,
                   0x10);
        local_330 = (undefined *)0x0;
      } while (local_328 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_copy_0269d150);
    local_16c = 1;
    local_160 = puVar2;
    _objc_storeStrong(&local_1f0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(&local_178,0);
  }
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

