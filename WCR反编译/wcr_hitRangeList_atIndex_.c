// wcr_hitRangeList:atIndex: @ 01f486dc

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

bool WCRefineUpdateLogView::wcr_hitRangeList_atIndex_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined *local_e8;
  undefined *local_e0;
  ulong local_d8;
  SEL local_d0;
  ID local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  local_e0 = (undefined *)param_4;
  _memset(auStack_128,0,0x40);
  uVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_170 != 0) {
    lVar4 = *local_118;
    local_178 = 0;
    do {
      do {
        if (*local_118 - lVar4 != 0) {
          _objc_enumerationMutation(*local_118 - lVar4,uVar2);
        }
        puVar5 = *(undefined **)(local_120 + local_178 * 8);
        puVar3 = PTR_s_rangeValue_026ba098;
        local_e8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        if ((puVar5 <= local_e0) &&
           (local_b8 = puVar5, local_b0 = puVar3, local_e0 < puVar5 + (long)puVar3)) {
          local_b9 = 1;
          bVar1 = true;
          goto LAB_01f488cc;
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  bVar1 = false;
LAB_01f488cc:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_b9 = 0;
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

