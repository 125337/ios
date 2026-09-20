// FUN_00ec8494 @ 00ec8494

void FUN_00ec8494(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_268;
  undefined *local_260;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  byte local_149;
  byte *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_1);
  local_140 = 0;
  _objc_storeStrong(&local_140,param_2);
  local_149 = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_158 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar2;
  _memset(auStack_1a8,0,0x40);
  puVar1 = local_138;
  (*(code *)PTR__objc_retain_02578638)();
  local_260 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
  if (local_260 != (undefined *)0x0) {
    lVar3 = *local_198;
    local_268 = (undefined *)0x0;
    do {
      do {
        if (*local_198 - lVar3 != 0) {
          _objc_enumerationMutation(*local_198 - lVar3,puVar1);
        }
        puVar4 = *(undefined **)(local_1a0 + (long)local_268 * 8);
        local_168 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar4;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar2 = local_168;
        (*(code *)PTR__objc_retain_02578638)();
        local_1b8 = puVar2;
        puVar2 = local_168;
        FUN_00eca084(local_168,local_140);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
        if ((puVar2 != (undefined *)0x0) &&
           (puVar2 = local_1c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1c0,PTR_s_isEqualToString__0269ccc8,local_1b0), ((ulong)puVar2 & 1) == 0
           )) {
          puVar2 = local_168;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_mutableCopy_0269d8a0);
          local_1c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_1c0,&cf_id);
          _objc_storeStrong(&local_1b8,local_1c8);
          _objc_storeStrong(&local_1b0,local_1c0);
          local_149 = 1;
          _objc_storeStrong(&local_1c8,0);
        }
        puVar2 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          local_1cc = 3;
        }
        else {
          puVar2 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,local_1b0);
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_1b0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b8,local_1b0);
            local_1cc = 3;
          }
          else {
            local_149 = 1;
            puVar2 = local_1b8;
            FUN_00eca534();
            puVar4 = local_1d8;
            FUN_00eca534();
            if (puVar4 < puVar2) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b8,local_1b0);
            }
            local_1cc = 0;
          }
          _objc_storeStrong(&local_1d8,0);
        }
        _objc_storeStrong(&local_1c0);
        _objc_storeStrong(&local_1b8,0);
        _objc_storeStrong(&local_1b0,0);
        local_268 = local_268 + 1;
      } while (local_268 < local_260);
      local_260 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10)
      ;
      local_268 = (undefined *)0x0;
    } while (local_260 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_138;
  if (local_148 != (byte *)0x0) {
    *local_148 = local_149 & 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if ((local_149 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar1;
    local_1cc = 1;
  }
  else {
    puVar1 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar2;
    _memset(auStack_228,0,0x40);
    puVar1 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_2d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,0x10);
    if (local_2d8 != (undefined *)0x0) {
      lVar3 = *local_218;
      local_2e0 = (undefined *)0x0;
      do {
        do {
          if (*local_218 - lVar3 != 0) {
            _objc_enumerationMutation(*local_218 - lVar3,puVar1);
          }
          puVar2 = local_1e0;
          local_1e8 = *(undefined8 *)(local_220 + (long)local_2e0 * 8);
          puVar4 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_160,PTR_s_objectForKeyedSubscript__0269d098,local_1e8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_2e0 = local_2e0 + 1;
        } while (local_2e0 < local_2d8);
        local_2d8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                   0x10);
        local_2e0 = (undefined *)0x0;
      } while (local_2d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = puVar1;
    local_1cc = 1;
    _objc_storeStrong(&local_1e0,0);
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

