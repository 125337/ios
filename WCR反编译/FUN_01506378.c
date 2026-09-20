// FUN_01506378 @ 01506378

void FUN_01506378(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  ulong local_c8;
  undefined4 local_bc;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_0150d4c8();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = param_1;
  if (param_1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    local_b0 = puVar2;
  }
  else {
    pcVar3 = "groupContainerURLs";
    _sel_registerName("groupContainerURLs");
    (*(code *)PTR__objc_msgSend_02578628)(param_1,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_c8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((param_1 & 1) == 0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_bc = 1;
      local_b0 = puVar2;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar2;
      _memset(auStack_118,0,0x40);
      uVar1 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_158 != 0) {
        lVar4 = *local_108;
        local_160 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar1);
            }
            uVar5 = *(ulong *)(local_110 + local_160 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_d8 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = local_d8,
               (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0), uVar5 != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_d8);
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
      local_bc = 1;
      local_b0 = puVar2;
      _objc_storeStrong(&local_d0,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

