// FUN_01bd54d8 @ 01bd54d8

void FUN_01bd54d8(undefined8 param_1)

{
  long *plVar1;
  cfstringStruct *pcVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *local_190;
  long *local_188;
  long local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  undefined *local_f8 [4];
  long *local_d8;
  undefined4 local_cc;
  cfstringStruct *local_c8;
  long *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar1 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(plVar1,param_1);
  FUN_01be3e5c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_getContactsForTagName_;
  local_c0 = plVar1;
  _NSSelectorFromString();
  lVar5 = local_b8;
  local_c8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((lVar5 == 0) ||
     (plVar1 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_respondsToSelector__026ca818,local_c8),
     ((ulong)plVar1 & 1) == 0)) {
    puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_cc = 1;
    local_b0 = puVar4;
  }
  else {
    local_d8 = (long *)0x0;
    plVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,local_c8,local_b8);
    _objc_retainAutoreleasedReturnValue();
    plVar1 = local_d8;
    local_d8 = plVar3;
    (*(code *)PTR__objc_release_02578630)(plVar1);
    plVar1 = local_d8;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(plVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)plVar1 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_cc = 1;
      local_b0 = puVar4;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_f8[0] = puVar4;
      _memset(auStack_140,0,0x40);
      plVar1 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = plVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (plVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      if (local_188 != (long *)0x0) {
        lVar5 = *local_130;
        local_190 = (long *)0x0;
        do {
          do {
            if (*local_130 - lVar5 != 0) {
              _objc_enumerationMutation(*local_130 - lVar5,plVar1);
            }
            lVar6 = *(long *)(local_138 + (long)local_190 * 8);
            local_100 = lVar6;
            FUN_01be3fd8();
            _objc_retainAutoreleasedReturnValue();
            local_148 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
            if (lVar6 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_addObject__0269d180,local_148)
              ;
            }
            _objc_storeStrong(&local_148,0);
            local_190 = (long *)((long)local_190 + 1);
          } while (local_190 < local_188);
          local_188 = plVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (plVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_190 = (long *)0x0;
        } while (local_188 != (long *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(plVar1);
      puVar4 = local_f8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_f8[0],PTR_s_copy_0269d150);
      local_cc = 1;
      local_b0 = puVar4;
      _objc_storeStrong(local_f8,0);
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

