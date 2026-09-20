// FUN_0067d1c8 @ 0067d1c8

byte FUN_0067d1c8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_158;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  cfstringStruct *local_d8;
  int local_d0;
  long local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  lVar4 = local_b8;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_158 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_158 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_158;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    _memset(auStack_120,0,0x40);
    pcVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_180 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != (cfstringStruct *)0x0) {
      lVar4 = *local_110;
      local_188 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_110 - lVar4 != 0) {
            _objc_enumerationMutation(*local_110 - lVar4,pcVar1);
          }
          uVar5 = *(ulong *)(local_118 + (long)local_188 * 8);
          local_e0 = uVar5;
          FUN_0067d82c();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar3 & 1) != 0) {
            local_a9 = 1;
            local_d0 = 1;
            goto LAB_0067d574;
          }
          local_188 = (cfstringStruct *)((long)&local_188->field0_0x0 + 1);
        } while (local_188 < local_180);
        local_180 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_188 = (cfstringStruct *)0x0;
      } while (local_180 != (cfstringStruct *)0x0);
    }
    local_d0 = 0;
LAB_0067d574:
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (local_d0 == 0) {
      local_a9 = 0;
      local_d0 = 1;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

