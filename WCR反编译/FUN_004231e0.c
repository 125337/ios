// FUN_004231e0 @ 004231e0

void FUN_004231e0(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  ulong local_160;
  ulong local_158;
  int local_124;
  cfstringStruct *local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  cfstringStruct *local_c8;
  byte local_b9;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_b9 = param_2;
  _memset(auStack_108,0,0x40);
  uVar1 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar2 = *local_f8;
    local_160 = 0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
        }
        pcVar3 = *(cfstringStruct **)(local_100 + local_160 * 8);
        local_c8 = pcVar3;
        FUN_0040494c();
        _objc_retainAutoreleasedReturnValue();
        local_120[0] = pcVar3;
        FUN_00422fbc();
        if (((ulong)pcVar3 & 1) == 0) {
          local_124 = 3;
        }
        else if (((local_b9 & 1) == 0) &&
                (pcVar3 = local_120[0], FUN_00423504(), ((ulong)pcVar3 & 1) != 0)) {
          local_124 = 3;
        }
        else {
          pcVar3 = local_120[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar3;
          local_124 = 1;
        }
        _objc_storeStrong(local_120,0);
        if (local_124 != 3) goto LAB_00423448;
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  local_124 = 0;
LAB_00423448:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_124 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

