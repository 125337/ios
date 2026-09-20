// activeModelName @ 015931cc

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoiceCloneHelper::activeModelName(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_180;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  int local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_activeModelId_026b0a60);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &::cf___;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_models_026b0a68);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar3 = *local_108;
      local_148 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,IVar1);
          }
          pcVar4 = *(cfstringStruct **)(local_110 + local_148 * 8);
          local_d8 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            local_180 = pcVar2;
            if (pcVar2 == (cfstringStruct *)0x0) {
              local_180 = &::cf___;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = local_180;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_cc = 1;
            goto LAB_01593484;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_cc = 0;
LAB_01593484:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_cc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &::cf___;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

