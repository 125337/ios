// FUN_0084206c @ 0084206c

void FUN_0084206c(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  byte local_b9;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b9 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  _memset(auStack_108,0,0x40);
  uVar1 = local_b0;
  FUN_008452bc();
  _objc_retainAutoreleasedReturnValue();
  local_138 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar2 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar2 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar2,uVar1);
        }
        uVar3 = *(undefined8 *)(local_100 + local_140 * 8);
        local_c8 = uVar3;
        FUN_0084548c();
        _objc_retainAutoreleasedReturnValue();
        FUN_00815824();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*DAT_028cd330)(local_b0,local_b8,local_b9 & 1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

