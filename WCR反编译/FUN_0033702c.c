// FUN_0033702c @ 0033702c

void FUN_0033702c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_4f0;
  undefined *local_4e8;
  undefined *local_4c0;
  ulong local_470;
  ulong local_468;
  ulong local_3d8;
  ulong local_3d0;
  undefined *local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  undefined8 local_2d8;
  byte local_2c9;
  undefined *local_2c8;
  undefined *local_2c0;
  ulong local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  ulong local_270;
  undefined *local_268;
  ulong local_260;
  undefined1 auStack_258 [8];
  long local_250;
  long *local_248;
  ulong local_218;
  ulong local_208;
  undefined *local_200;
  undefined *local_1f8 [2];
  ulong local_1e8 [3];
  undefined4 local_1cc;
  long local_1c8;
  long local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_2);
  local_1c0 = 0;
  _objc_storeStrong(&local_1c0,param_3);
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_4);
  if ((local_1c0 == 0) || (local_1c8 == 0)) {
    local_1cc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_removeAllObjects_0269d508);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_removeAllObjects_0269d508);
    local_1e8[0] = 0;
    uVar5 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_valueForKey__0269d128,&cf_m_nsOwner);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_1e8[0];
    local_1e8[0] = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_1e8[0];
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      _objc_storeStrong(local_1e8,&cf___);
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1f8[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_208 = 0;
    uVar5 = local_1b8;
    local_200 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_valueForKey__0269d128,&cf_m_nsChatRoomAdminList);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_208;
    local_208 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_208;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = local_208, (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_length_0269cca0),
       uVar2 != 0)) {
      _memset(auStack_258,0,0x40);
      uVar2 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_208,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_3d0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_3d0 != 0) {
        lVar4 = *local_248;
        local_3d8 = 0;
        do {
          do {
            if (*local_248 - lVar4 != 0) {
              _objc_enumerationMutation(*local_248 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_250 + local_3d8 * 8);
            puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
            local_218 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                       PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
            _objc_retainAutoreleasedReturnValue();
            local_260 = uVar5;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            uVar5 = local_260;
            (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_length_0269cca0);
            if (((uVar5 == 0) ||
                (uVar5 = local_260,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_260,PTR_s_isEqualToString__0269ccc8,local_1e8[0]), (uVar5 & 1) != 0
                )) || (puVar1 = local_200,
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_200,PTR_s_containsObject__0269cbb8,local_260),
                      ((ulong)puVar1 & 1) != 0)) {
              local_1cc = 5;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_addObject__0269d180,local_260);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1f8[0],PTR_s_addObject__0269d180,local_260);
              local_1cc = 0;
            }
            _objc_storeStrong(&local_260,0);
            local_3d8 = local_3d8 + 1;
          } while (local_3d8 < local_3d0);
          local_3d0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_258,auStack_a8,
                     0x10);
          local_3d8 = 0;
        } while (local_3d0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar1;
    _memset(auStack_2b0,0,0x40);
    uVar2 = local_1b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_468 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,0x10);
    if (local_468 != 0) {
      lVar4 = *local_2a0;
      local_470 = 0;
      do {
        do {
          if (*local_2a0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_2a0 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_2a8 + local_470 * 8);
          local_270 = uVar5;
          FUN_00337ffc();
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
          if ((uVar5 == 0) || (uVar5 = local_270, FUN_00338210(), (uVar5 & 1) != 0)) {
            local_1cc = 7;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_268,PTR_s_setObject_forKeyedSubscript__0269d248,local_270,local_2b8);
            local_1cc = 0;
          }
          _objc_storeStrong(&local_2b8,0);
          local_470 = local_470 + 1;
        } while (local_470 < local_468);
        local_468 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,
                   0x10);
        local_470 = 0;
      } while (local_468 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_2c9 = 0;
    uVar2 = local_1e8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8[0],PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_4c0 = (undefined *)0x0;
    }
    else {
      local_4c0 = local_268;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_268,PTR_s_objectForKeyedSubscript__0269d098,local_1e8[0]);
      _objc_retainAutoreleasedReturnValue();
      local_2c9 = 1;
      local_2c8 = local_4c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_2c0 = local_4c0;
    if ((local_2c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_2c8);
    }
    if (local_2c0 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_2c0);
    }
    _memset(auStack_318,0,0x40);
    puVar1 = local_1f8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_4e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_1a8,0x10);
    if (local_4e8 != (undefined *)0x0) {
      lVar4 = *local_308;
      local_4f0 = (undefined *)0x0;
      do {
        do {
          if (*local_308 - lVar4 != 0) {
            _objc_enumerationMutation(*local_308 - lVar4,puVar1);
          }
          local_2d8 = *(undefined8 *)(local_310 + (long)local_4f0 * 8);
          puVar3 = local_268;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_268,PTR_s_objectForKeyedSubscript__0269d098,local_2d8);
          _objc_retainAutoreleasedReturnValue();
          local_320 = puVar3;
          if (puVar3 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,puVar3);
          }
          _objc_storeStrong(&local_320,0);
          local_4f0 = local_4f0 + 1;
        } while (local_4f0 < local_4e8);
        local_4e8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,auStack_1a8,
                   0x10);
        local_4f0 = (undefined *)0x0;
      } while (local_4e8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_2c0);
    _objc_storeStrong(&local_268,0);
    _objc_storeStrong(&local_208,0);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(local_1f8,0);
    _objc_storeStrong(local_1e8,0);
    local_1cc = 0;
  }
  _objc_storeStrong(&local_1c8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

