// allContactTagNames @ 014b9ac4

/* Function Stack Size: 0x10 bytes */

ID WCRefineScheduledTask::allContactTagNames(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char *local_170;
  char *local_168;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  undefined *local_e0;
  char *local_d8;
  undefined4 local_cc;
  char *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "ContactTagMgr";
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_getClass();
  FUN_014b9e80();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getAllLabelName_026af4b0),
     ((ulong)pcVar1 & 1) == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    pcVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_getAllLabelName_026af4b0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
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
      pcVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      if (local_168 != (char *)0x0) {
        lVar3 = *local_118;
        local_170 = (char *)0x0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,pcVar1);
            }
            lVar4 = *(long *)(local_120 + (long)local_170 * 8);
            local_e8 = lVar4;
            FUN_014b5580();
            _objc_retainAutoreleasedReturnValue();
            local_130 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
            if ((lVar4 != 0) &&
               (puVar2 = local_e0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_e0,PTR_s_containsObject__0269cbb8,local_130),
               ((ulong)puVar2 & 1) == 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_130);
            }
            _objc_storeStrong(&local_130,0);
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_170 = (char *)0x0;
        } while (local_168 != (char *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
      local_cc = 1;
      local_b0 = puVar2;
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

