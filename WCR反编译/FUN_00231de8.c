// FUN_00231de8 @ 00231de8

void FUN_00231de8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_370;
  undefined *local_328;
  undefined *local_320;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined *local_2a0;
  undefined *local_268;
  long local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  long local_1e0;
  long local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  long local_190;
  byte local_181;
  undefined *local_180;
  undefined *local_178;
  byte local_169;
  undefined *local_168;
  undefined *local_160 [3];
  undefined *local_148;
  undefined4 local_13c;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_13c = 1;
    local_130 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_169 = 0;
    puVar2 = local_138;
    local_148 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_customAvatarContactEnabledIDs_026a09d8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar3 & 1) == 0) {
      local_268 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_268 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_customAvatarContactEnabledIDs_026a09d8);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = local_268;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_160[0] = local_268;
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_181 = 0;
    puVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_2a0 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_2a0 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
      _objc_retainAutoreleasedReturnValue();
      local_181 = 1;
      local_180 = local_2a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = local_2a0;
    if ((local_181 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_180);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_1d0,0,0x40);
    puVar1 = local_160[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_2c8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
    if (local_2c8 != (undefined *)0x0) {
      lVar4 = *local_1c0;
      local_2d0 = (undefined *)0x0;
      do {
        do {
          if (*local_1c0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar4,puVar1);
          }
          lVar5 = *(long *)(local_1c8 + (long)local_2d0 * 8);
          local_190 = lVar5;
          FUN_0022a660();
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_1d8);
          }
          _objc_storeStrong(&local_1d8,0);
          local_2d0 = local_2d0 + 1;
        } while (local_2d0 < local_2c8);
        local_2c8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                   0x10);
        local_2d0 = (undefined *)0x0;
      } while (local_2c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_220,0,0x40);
    puVar1 = local_178;
    (*(code *)PTR__objc_retain_02578638)();
    local_320 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,0x10);
    if (local_320 != (undefined *)0x0) {
      lVar4 = *local_210;
      local_328 = (undefined *)0x0;
      do {
        do {
          if (*local_210 - lVar4 != 0) {
            _objc_enumerationMutation(*local_210 - lVar4,puVar1);
          }
          lVar5 = *(long *)(local_218 + (long)local_328 * 8);
          local_1e0 = lVar5;
          FUN_0022a660();
          _objc_retainAutoreleasedReturnValue();
          local_228 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
          if (lVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_addObject__0269d180,local_228);
          }
          _objc_storeStrong(&local_228,0);
          local_328 = local_328 + 1;
        } while (local_328 < local_320);
        local_320 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,
                   0x10);
        local_328 = (undefined *)0x0;
      } while (local_320 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_370 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_370 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_370;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_13c = 1;
    _objc_storeStrong(&local_178);
    _objc_storeStrong(local_160,0);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

