// allSessionUserNames @ 00168280

/* Function Stack Size: 0x10 bytes */

ID WCRefineClearSessionHook::allSessionUserNames(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined4 local_cc;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMNewSessionMgr";
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_getClass("MMNewSessionMgr");
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_serviceOfClass__0269f7e0,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_GetUserNamesOnSessionList_0269f7e8
                ), (param_1 & 1) == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    IVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_GetUserNamesOnSessionList_0269f7e8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d8 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((IVar3 & 1) == 0) {
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
      local_e0 = puVar2;
      _memset(auStack_128,0,0x40);
      IVar3 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_168 != 0) {
        lVar4 = *local_118;
        local_170 = 0;
        do {
          do {
            if (*local_118 - lVar4 != 0) {
              _objc_enumerationMutation(*local_118 - lVar4,IVar3);
            }
            uVar5 = *(ulong *)(local_120 + local_170 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_e8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = local_e8,
               (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0), uVar5 != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar2 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_cc = 1;
      _objc_storeStrong(&local_e0,0);
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

