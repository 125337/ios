// itemsInCategory: @ 00f8af70

/* Function Stack Size: 0x18 bytes */

ID WCRefineGradientPalette::itemsInCategory_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = (undefined *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_hQ),
     (uVar1 & 1) != 0)) {
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
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
    puVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != (undefined *)0x0) {
      lVar3 = *local_110;
      local_148 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,puVar2);
          }
          uVar4 = *(ulong *)(local_118 + (long)local_148 * 8);
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_category_026ab3d8);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_148 = (undefined *)0x0;
      } while (local_140 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
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

