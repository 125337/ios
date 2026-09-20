// matchedKeywordsForRule:matchText: @ 010ae848

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageSyncRule::matchedKeywordsForRule_matchText_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_198;
  ulong local_190;
  cfstringStruct *local_160;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e4;
  cfstringStruct *local_e0;
  ID local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_4);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_stringArrayInRule_forKey__026a44e8,local_c8,&cf_includeKeywords);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d0;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_d8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar2 & 1) == 0) {
    local_160 = &::cf___;
  }
  else {
    local_160 = local_d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_160;
  IVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if ((IVar1 == 0) ||
     (pcVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_e4 = 1;
    local_b0 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    _memset(auStack_138,0,0x40);
    IVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar4 = *local_128;
      local_198 = 0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,IVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + local_198 * 8);
          pcVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_rangeOfString_options__0269d118,local_f8,1);
          if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
    local_e4 = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

