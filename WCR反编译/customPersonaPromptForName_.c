// customPersonaPromptForName: @ 009af6c0

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::customPersonaPromptForName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar3 = local_c8;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_customPersonas_026aac48);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar3 = *local_110;
      local_148 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,IVar1);
          }
          uVar4 = *(ulong *)(local_118 + local_148 * 8);
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_prompt);
            _objc_retainAutoreleasedReturnValue();
            local_d4 = 1;
            local_b0 = uVar2;
            goto LAB_009af910;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_d4 = 0;
LAB_009af910:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_d4 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

