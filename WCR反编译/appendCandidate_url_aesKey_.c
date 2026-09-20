// appendCandidate:url:aesKey: @ 00f35b30

/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::appendCandidate_url_aesKey_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_160;
  ulong local_158;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  lVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((lVar4 == 0) || (local_c0 == 0)) {
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar4 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_118 + local_160 * 8);
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar2 & 1) != 0) {
            local_d4 = 1;
            goto LAB_00f35d64;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_d4 = 0;
LAB_00f35d64:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,&cf_url);
      lVar4 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      if (lVar4 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_aesKey);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_128);
      _objc_storeStrong(&local_128,0);
      local_d4 = 0;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

