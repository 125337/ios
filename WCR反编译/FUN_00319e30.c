// FUN_00319e30 @ 00319e30

byte FUN_00319e30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_3f8;
  undefined *local_3f0;
  ulong local_380;
  ulong local_378;
  undefined *local_340;
  undefined *local_338;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  undefined8 local_288;
  long local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  long local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  ulong local_1f0;
  undefined *local_1e8;
  ulong local_1e0 [3];
  undefined *local_1c8;
  int local_1bc;
  ulong local_1b8;
  byte local_1a9;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b8 = 0;
  _objc_storeStrong(&local_1b8,param_1);
  if (local_1b8 == 0) {
    local_1a9 = 0;
    local_1bc = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      local_1a9 = 0;
      local_1bc = 1;
    }
    else {
      uVar3 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_1e0[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1e8 = puVar1;
      _memset(auStack_230,0,0x40);
      puVar1 = local_1c8;
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_338 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,0x10)
      ;
      if (local_338 != (undefined *)0x0) {
        lVar4 = *local_220;
        local_340 = (undefined *)0x0;
        do {
          do {
            if (*local_220 - lVar4 != 0) {
              _objc_enumerationMutation(*local_220 - lVar4,puVar1);
            }
            local_1f0 = *(ulong *)(local_228 + (long)local_340 * 8);
            _memset(auStack_278,0,0x40);
            uVar3 = local_1f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1f0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
            _objc_retainAutoreleasedReturnValue();
            local_378 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_378 != 0) {
              lVar5 = *local_268;
              local_380 = 0;
              do {
                do {
                  if (*local_268 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_268 - lVar5,uVar3);
                  }
                  lVar6 = *(long *)(local_270 + local_380 * 8);
                  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                  local_238 = lVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (lVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                  _objc_retainAutoreleasedReturnValue();
                  local_280 = lVar6;
                  (*(code *)PTR__objc_release_02578630)(puVar2);
                  lVar6 = local_280;
                  (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0);
                  if (lVar6 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1e8,PTR_s_addObject__0269d180,local_280);
                  }
                  _objc_storeStrong(&local_280,0);
                  local_380 = local_380 + 1;
                } while (local_380 < local_378);
                local_378 = uVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,
                           auStack_128,0x10);
                local_380 = 0;
              } while (local_378 != 0);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            local_340 = local_340 + 1;
          } while (local_340 < local_338);
          local_338 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_a8,
                     0x10);
          local_340 = (undefined *)0x0;
        } while (local_338 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _memset(auStack_2c8,0,0x40);
      puVar1 = local_1e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_3f0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,0x10
                );
      if (local_3f0 != (undefined *)0x0) {
        lVar4 = *local_2b8;
        local_3f8 = (undefined *)0x0;
        do {
          do {
            if (*local_2b8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_2b8 - lVar4,puVar1);
            }
            local_288 = *(undefined8 *)(local_2c0 + (long)local_3f8 * 8);
            uVar3 = local_1e0[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0[0],PTR_s_isEqualToString__0269ccc8,local_288);
            if ((uVar3 & 1) != 0) {
              local_1a9 = 1;
              local_1bc = 1;
              goto LAB_0031a66c;
            }
            local_3f8 = local_3f8 + 1;
          } while (local_3f8 < local_3f0);
          local_3f0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_1a8,
                     0x10);
          local_3f8 = (undefined *)0x0;
        } while (local_3f0 != (undefined *)0x0);
      }
      local_1bc = 0;
LAB_0031a66c:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (local_1bc == 0) {
        local_1a9 = 0;
        local_1bc = 1;
      }
      _objc_storeStrong(&local_1e8);
      _objc_storeStrong(local_1e0,0);
    }
    _objc_storeStrong(&local_1c8,0);
  }
  _objc_storeStrong(&local_1b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_1a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

