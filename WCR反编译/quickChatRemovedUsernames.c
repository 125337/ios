// quickChatRemovedUsernames @ 0214eb08

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::quickChatRemovedUsernames(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar1 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    IVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar3 = *local_110;
      local_168 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,IVar1);
          }
          uVar4 = *(ulong *)(local_118 + local_168 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((((uVar4 & 1) != 0) &&
              (uVar4 = local_e0,
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0), uVar4 != 0)) &&
             (puVar2 = local_d8,
             (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_containsObject__0269cbb8,local_e0)
             , ((ulong)puVar2 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_cc = 1;
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

