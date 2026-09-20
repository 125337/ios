// isPathHidden: @ 01978b38

/* Function Stack Size: 0x18 bytes */

bool WCRFileManagerState::isPathHidden_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint local_17c;
  ulong local_160;
  ulong local_158;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_d8;
  uint local_cc;
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
  uVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByStandardizingPath_026cab38);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar2;
    _memset(auStack_120,0,0x40);
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hiddenPaths_026ba1e8);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar5 = *local_110;
      local_160 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,IVar3);
          }
          uVar6 = *(undefined8 *)(local_118 + local_160 * 8);
          local_e0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByStandardizingPath_026cab38);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_d8;
          local_128 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isEqualToString__0269ccc8,uVar6);
          uVar2 = local_d8;
          local_17c = 1;
          if ((uVar4 & 1) == 0) {
            uVar6 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_stringByAppendingString__0269d398,&cf__);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasPrefix__0269d320);
            local_17c = (uint)uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar6);
          }
          bVar1 = (local_17c & 1) != 0;
          if (bVar1) {
            local_a9 = 1;
          }
          local_cc = (uint)bVar1;
          _objc_storeStrong(&local_128,0);
          if (local_cc != 0) goto LAB_01978e3c;
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    local_cc = 0;
LAB_01978e3c:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (local_cc == 0) {
      local_a9 = 0;
      local_cc = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

