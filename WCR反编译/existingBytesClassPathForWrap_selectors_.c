// existingBytesClassPathForWrap:selectors: @ 00f417a0

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::existingBytesClassPathForWrap_selectors_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  char *pcVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_168;
  ulong local_160;
  char *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  char *local_e0;
  uint local_d4;
  ulong local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  char *local_b0;
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
    local_b0 = (char *)0x0;
    local_d4 = 1;
  }
  else {
    pcVar3 = "CMessageWrap";
    _objc_getClass();
    local_e0 = pcVar3;
    _memset(auStack_128,0,0x40);
    uVar2 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar5 = *local_118;
      local_168 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar2);
          }
          uVar6 = *(undefined8 *)(local_120 + local_168 * 8);
          local_e8 = uVar6;
          _NSSelectorFromString();
          pcVar3 = local_e0;
          local_130 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar6);
          if (((ulong)pcVar3 & 1) != 0) {
            pcVar3 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_130,local_c8);
            _objc_retainAutoreleasedReturnValue();
            IVar4 = local_b8;
            local_138 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_fileExistsWithBytesAtPath__026ac1d8,pcVar3);
            pcVar3 = local_138;
            bVar1 = (IVar4 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar3;
            }
            local_d4 = (uint)bVar1;
            _objc_storeStrong(&local_138,0);
            if (local_d4 != 0) goto LAB_00f41a04;
          }
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    local_d4 = 0;
LAB_00f41a04:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d4 == 0) {
      local_b0 = (char *)0x0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

