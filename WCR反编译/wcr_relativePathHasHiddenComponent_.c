// wcr_relativePathHasHiddenComponent: @ 015b6a14

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoicePackStore::wcr_relativePathHasHiddenComponent_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_pathComponents_026ae478);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_138 != 0) {
      lVar2 = *local_108;
      local_140 = 0;
      do {
        do {
          if (*local_108 - lVar2 != 0) {
            _objc_enumerationMutation(*local_108 - lVar2,uVar1);
          }
          uVar3 = *(ulong *)(local_110 + local_140 * 8);
          local_d8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,&::cf__);
          if ((uVar3 & 1) != 0) {
            local_a9 = 1;
            local_cc = 1;
            goto LAB_015b6bfc;
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    local_cc = 0;
LAB_015b6bfc:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_cc == 0) {
      local_a9 = 0;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

