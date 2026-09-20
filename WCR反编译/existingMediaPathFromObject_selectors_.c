// existingMediaPathFromObject:selectors: @ 00f3f2f8

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::existingMediaPathFromObject_selectors_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_160;
  ulong local_158;
  ulong local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  uint local_d4;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  if (local_c8 == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar5 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar2);
          }
          uVar6 = *(undefined8 *)(local_118 + local_160 * 8);
          local_e0 = uVar6;
          _NSSelectorFromString();
          uVar3 = local_c8;
          local_128 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,uVar6);
          if ((uVar3 & 1) != 0) {
            uVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_128);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = local_b8;
            local_130 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_isReadableVideoAtPath__026ac1e0,uVar3);
            uVar3 = local_130;
            bVar1 = (IVar4 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar3;
            }
            local_d4 = (uint)bVar1;
            _objc_storeStrong(&local_130,0);
            if (local_d4 != 0) goto LAB_00f3f548;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_d4 = 0;
LAB_00f3f548:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d4 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

