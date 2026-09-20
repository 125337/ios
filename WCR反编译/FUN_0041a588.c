// FUN_0041a588 @ 0041a588

void FUN_0041a588(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long local_358;
  undefined *local_318;
  undefined *local_310;
  long local_2c8;
  undefined *local_288;
  undefined *local_280;
  long local_210;
  long local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  long local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  long local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_138;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_138, (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_count_0269cfe0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = 1;
    local_130 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar2;
    _memset(auStack_198,0,0x40);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_280 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
    if (local_280 != (undefined *)0x0) {
      lVar3 = *local_188;
      local_288 = (undefined *)0x0;
      do {
        do {
          if (*local_188 - lVar3 != 0) {
            _objc_enumerationMutation(*local_188 - lVar3,puVar1);
          }
          lVar4 = *(long *)(local_190 + (long)local_288 * 8);
          local_158 = lVar4;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if (lVar4 == 0) {
            local_148 = 3;
          }
          else {
            lVar4 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_2c8 = lVar4;
            if (lVar4 == 0) {
              local_2c8 = local_1a0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1a8 = local_2c8;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            lVar4 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0);
            if (lVar4 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_1a8);
            }
            _objc_storeStrong(&local_1a8,0);
            local_148 = 0;
          }
          _objc_storeStrong(&local_1a0,0);
          local_288 = local_288 + 1;
        } while (local_288 < local_280);
        local_280 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                   0x10);
        local_288 = (undefined *)0x0;
      } while (local_280 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_1b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = puVar1;
    _memset(auStack_200,0,0x40);
    puVar2 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_310 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,0x10);
    if (local_310 != (undefined *)0x0) {
      lVar3 = *local_1f0;
      local_318 = (undefined *)0x0;
      do {
        do {
          if (*local_1f0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_1f0 - lVar3,puVar2);
          }
          lVar4 = *(long *)(local_1f8 + (long)local_318 * 8);
          local_1c0 = lVar4;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_208 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
          if (lVar4 == 0) {
            local_148 = 5;
          }
          else {
            lVar4 = local_208;
            (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_358 = lVar4;
            if (lVar4 == 0) {
              local_358 = local_208;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_210 = local_358;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            puVar1 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_containsObject__0269cbb8,local_210);
            if (((ulong)puVar1 & 1) == 0) {
              puVar1 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_containsObject__0269cbb8,local_210);
              if (((ulong)puVar1 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_210)
                ;
                (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_addObject__0269d180,local_208)
                ;
                local_148 = 0;
              }
              else {
                local_148 = 5;
              }
            }
            else {
              local_148 = 5;
            }
            _objc_storeStrong(&local_210,0);
          }
          _objc_storeStrong(&local_208,0);
          local_318 = local_318 + 1;
        } while (local_318 < local_310);
        local_310 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                   0x10);
        local_318 = (undefined *)0x0;
      } while (local_310 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_copy_0269d150);
    local_148 = 1;
    local_130 = puVar2;
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

