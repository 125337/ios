// availableGroupAnalysisNameFrom: @ 009b1e18

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::availableGroupAnalysisNameFrom_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_190;
  ulong local_160;
  ulong local_158;
  undefined *local_138;
  ulong local_130;
  uint local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (undefined *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar2 = local_c8;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    _objc_storeStrong(&local_d0,&cf_bv___);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allGroupAnalysisPersonas_026aac78);
  _objc_retainAutoreleasedReturnValue();
  local_158 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_158 != 0) {
    lVar5 = *local_110;
    local_160 = 0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,IVar3);
        }
        puVar2 = local_d8;
        pcVar6 = *(cfstringStruct **)(local_118 + local_160 * 8);
        local_e0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
        _objc_retainAutoreleasedReturnValue();
        local_190 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_190 = &::cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180,local_190);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_d0);
  puVar2 = local_d0;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_124 = 1;
  }
  else {
    for (local_130 = 2; puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8, local_130 < 100;
        local_130 = local_130 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____lu);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_d8;
      local_138 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,puVar2);
      puVar2 = local_138;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar2;
      }
      local_124 = (uint)bVar1;
      _objc_storeStrong(&local_138,0);
      if (local_124 != 0) goto LAB_009b221c;
    }
    _arc4random_uniform(9999);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf____u);
    _objc_retainAutoreleasedReturnValue();
    local_124 = 1;
    local_b0 = puVar2;
  }
LAB_009b221c:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

