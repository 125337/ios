// FUN_00f53074 @ 00f53074

byte FUN_00f53074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_150;
  ulong local_148;
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
  uVar2 = local_b8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_148 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_148 != 0) {
      lVar4 = *local_100;
      local_150 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar2);
          }
          local_d0 = *(undefined8 *)(local_108 + local_150 * 8);
          uVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsString__0269d0b0,local_d0);
          if ((uVar3 & 1) != 0) {
            local_a9 = 1;
            local_c4 = 1;
            goto LAB_00f53284;
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    local_c4 = 0;
LAB_00f53284:
    (*(code *)PTR__objc_release_02578630)(uVar2);
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

