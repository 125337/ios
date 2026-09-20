// glyphRepairDisplayName @ 019edda4

/* Function Stack Size: 0x10 bytes */

ID WCRefineFontConvertViewController::glyphRepairDisplayName(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  cfstringStruct *local_1c0;
  ulong local_190;
  ulong local_188;
  bool local_131;
  cfstringStruct *local_130;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  long local_d8;
  undefined4 local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_glyphRepairRules_026b1048);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf__gn_;
  }
  else {
    local_d8 = 0;
    _memset(auStack_120,0,0x40);
    IVar2 = local_c8;
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_188 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_188 != 0) {
      lVar3 = *local_110;
      local_190 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,IVar2);
          }
          uVar4 = *(ulong *)(local_118 + local_190 * 8);
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar4;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar4 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          if ((uVar4 != 0) &&
             (uVar4 = local_128,
             (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_hasPrefix__0269d320,&cf__),
             (uVar4 & 1) == 0)) {
            local_d8 = local_d8 + 1;
          }
          _objc_storeStrong(&local_128,0);
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_131 = local_d8 == 0;
    if (local_131) {
      local_1c0 = &cf__gn_;
    }
    else {
      local_1c0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_130 = local_1c0;
    }
    local_131 = !local_131;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_1c0;
    if (local_131) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
  }
  local_cc = 1;
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

