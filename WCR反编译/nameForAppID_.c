// nameForAppID: @ 010d53c8

/* Function Stack Size: 0x18 bytes */

ID WCRefineMomentsTailCatalog::nameForAppID_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_198;
  ulong local_160;
  ulong local_158;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  int local_cc;
  ulong local_c8;
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
  uVar5 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  uVar2 = local_c8;
  if (uVar5 == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _memset(auStack_120,0,0x40);
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allEntries_026ae7b0);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar4 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,IVar3);
          }
          uVar5 = *(ulong *)(local_118 + local_160 * 8);
          local_e0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_128 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar2 & 1) == 0) {
              local_198 = local_d8;
            }
            else {
              local_198 = local_128;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = local_198;
            local_cc = 1;
            _objc_storeStrong(&local_128,0);
            goto LAB_010d56f8;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_cc = 0;
LAB_010d56f8:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_cc == 0) {
      local_b0 = 0;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

