// FUN_0088e33c @ 0088e33c

byte FUN_0088e33c(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  byte local_bd;
  undefined4 local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
  }
  else {
    local_bd = 0;
    _memset(auStack_108,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_138 != 0) {
      lVar3 = *local_f8;
      local_140 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_100 + local_140 * 8);
          pcVar2 = "MMUILabel";
          local_c8 = uVar4;
          _objc_getClass();
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar2);
          if (((uVar4 & 1) != 0) &&
             (uVar4 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isHidden_026ca768),
             (uVar4 & 1) == 0)) {
            local_bd = 1;
            local_bc = 2;
            goto LAB_0088e5ac;
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    local_bc = 0;
LAB_0088e5ac:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_a9 = (local_bd ^ 1) & 1;
  }
  local_bc = 1;
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

