// cacheDataItems:forUsername: @ 010b98b4

/* Function Stack Size: 0x20 bytes */

void WCRefineMomentsMonitor::cacheDataItems_forUsername_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_cc;
  long local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  lVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  uVar2 = local_c0;
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_118,0,0x40);
      uVar2 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_148 != 0) {
        lVar3 = *local_108;
        local_150 = 0;
        do {
          do {
            if (*local_108 - lVar3 != 0) {
              _objc_enumerationMutation(*local_108 - lVar3,uVar2);
            }
            local_d8 = *(undefined8 *)(local_110 + local_150 * 8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_cacheDataItem_forUsername__026a4b68,local_d8,local_c8);
            local_150 = local_150 + 1;
          } while (local_150 < local_148);
          local_148 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_150 = 0;
        } while (local_148 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_cc = 0;
      goto LAB_010b9ad0;
    }
  }
  local_cc = 1;
LAB_010b9ad0:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

