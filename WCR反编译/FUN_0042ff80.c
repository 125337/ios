// FUN_0042ff80 @ 0042ff80

void FUN_0042ff80(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  char *local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    pcVar3 = "CMessageWrap";
    _objc_getClass();
    local_c8 = pcVar3;
    _memset(auStack_110,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_150 != 0) {
      lVar4 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_108 + local_158 * 8);
          local_d0 = uVar5;
          if ((local_c8 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,local_c8),
             (uVar5 & 1) != 0)) {
            FUN_00423800(local_d0);
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

