// normalizedAction: @ 00fe87d4

/* Function Stack Size: 0x18 bytes */

ID WCRefineInputBoxGestureSupport::normalizedAction_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  ulong local_d8;
  int local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar4 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     uVar3 = local_c8, uVar4 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_none;
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf_none;
      local_cc = 1;
    }
    else {
      _memset(auStack_120,0,0x40);
      IVar5 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_actionIds_026ad508);
      _objc_retainAutoreleasedReturnValue();
      local_168 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_168 != 0) {
        lVar6 = *local_110;
        local_170 = 0;
        do {
          do {
            if (*local_110 - lVar6 != 0) {
              _objc_enumerationMutation(*local_110 - lVar6,IVar5);
            }
            pcVar7 = *(cfstringStruct **)(local_118 + local_170 * 8);
            local_e0 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isEqualToString__0269ccc8,local_d8);
            pcVar1 = local_e0;
            if (((ulong)pcVar7 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar1;
              local_cc = 1;
              goto LAB_00fe8ad8;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = IVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_cc = 0;
LAB_00fe8ad8:
      (*(code *)PTR__objc_release_02578630)(IVar5);
      if (local_cc == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = &cf_none;
        local_cc = 1;
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

