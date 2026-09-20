// resolvedGroupIdentifierFromStoredValue: @ 0177a410

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginHubManager::resolvedGroupIdentifierFromStoredValue_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_398;
  ulong local_390;
  ulong local_340;
  ulong local_338;
  ulong local_2e8;
  ulong local_2e0;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  ulong local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  ulong local_238;
  ulong local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  ID local_1e0;
  int local_1d4;
  ulong local_1d0;
  ulong local_1c8;
  SEL local_1c0;
  ID local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  uVar3 = local_1c8;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_1b0 = 0;
    local_1d4 = 1;
    goto LAB_0177aaa8;
  }
  IVar1 = local_1b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_groupDefinitions_026b4430);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = IVar1;
  _memset(auStack_228,0,0x40);
  IVar1 = local_1e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_2e0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
  if (local_2e0 != 0) {
    lVar2 = *local_218;
    local_2e8 = 0;
    do {
      do {
        if (*local_218 - lVar2 != 0) {
          _objc_enumerationMutation(*local_218 - lVar2,IVar1);
        }
        uVar3 = *(ulong *)(local_220 + local_2e8 * 8);
        local_1e8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_1d0;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_1b0 = uVar3;
          local_1d4 = 1;
          goto LAB_0177a668;
        }
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
      local_2e8 = 0;
    } while (local_2e0 != 0);
  }
  local_1d4 = 0;
LAB_0177a668:
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_1d4 == 0) {
    uVar3 = local_1d0;
    FUN_0177ab00();
    _objc_retainAutoreleasedReturnValue();
    local_230 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
LAB_0177a894:
      _memset(auStack_2c0,0,0x40);
      IVar1 = local_1e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_390 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,0x10)
      ;
      if (local_390 != 0) {
        lVar2 = *local_2b0;
        local_398 = 0;
        do {
          do {
            if (*local_2b0 - lVar2 != 0) {
              _objc_enumerationMutation(*local_2b0 - lVar2,IVar1);
            }
            uVar4 = *(ulong *)(local_2b8 + local_398 * 8);
            local_280 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            if ((uVar3 & 1) != 0) {
              uVar3 = local_280;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_280,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_1d4 = 1;
              local_1b0 = uVar3;
              goto LAB_0177aa58;
            }
            local_398 = local_398 + 1;
          } while (local_398 < local_390);
          local_390 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,
                     0x10);
          local_398 = 0;
        } while (local_390 != 0);
      }
      local_1d4 = 0;
LAB_0177aa58:
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (local_1d4 == 0) {
        local_1b0 = 0;
        local_1d4 = 1;
      }
    }
    else {
      _memset(auStack_278,0,0x40);
      IVar1 = local_1e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_338 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_128,0x10)
      ;
      if (local_338 != 0) {
        lVar2 = *local_268;
        local_340 = 0;
        do {
          do {
            if (*local_268 - lVar2 != 0) {
              _objc_enumerationMutation(*local_268 - lVar2,IVar1);
            }
            uVar3 = *(ulong *)(local_270 + local_340 * 8);
            local_238 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar3);
            uVar3 = local_230;
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_1b0 = uVar3;
              local_1d4 = 1;
              goto LAB_0177a870;
            }
            local_340 = local_340 + 1;
          } while (local_340 < local_338);
          local_338 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_128,
                     0x10);
          local_340 = 0;
        } while (local_338 != 0);
      }
      local_1d4 = 0;
LAB_0177a870:
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (local_1d4 == 0) goto LAB_0177a894;
    }
    _objc_storeStrong(&local_230,0);
  }
  _objc_storeStrong(&local_1e0,0);
LAB_0177aaa8:
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_1b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

