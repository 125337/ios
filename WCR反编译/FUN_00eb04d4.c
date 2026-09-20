// FUN_00eb04d4 @ 00eb04d4

byte FUN_00eb04d4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_158;
  ulong local_150;
  ulong local_120;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  int local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == 0) ||
     (uVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar4 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar1);
          }
          uVar5 = *(undefined8 *)(local_108 + local_158 * 8);
          local_d0 = uVar5;
          _NSSelectorFromString();
          uVar2 = local_b8;
          local_118 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,uVar5);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_118);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            FUN_00eae708();
            _objc_retainAutoreleasedReturnValue();
            local_120 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            uVar2 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
            if ((uVar2 == 0) || (uVar3 = local_120, FUN_00eaf1bc(uVar2), uVar3 == 0)) {
              uVar5 = 0;
              local_c4 = 0;
            }
            else {
              uVar5 = 1;
              local_a9 = 1;
              local_c4 = 1;
            }
            _objc_storeStrong(uVar5,&local_120,0);
            if (local_c4 != 0) goto LAB_00eb0774;
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    local_c4 = 0;
LAB_00eb0774:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c4 == 0) {
      local_a9 = 0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

