// FUN_0014a05c @ 0014a05c

void FUN_0014a05c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined4 local_c8;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_b8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_c8 = 1;
  }
  else {
    if ((local_b8 != 0) &&
       (uVar2 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,local_b8),
       (uVar2 & 1) != 0)) {
      FUN_0014a350(local_b0);
    }
    _memset(auStack_110,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar3 = *local_100;
      local_160 = 0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,uVar2);
          }
          local_d0 = *(undefined8 *)(local_108 + local_160 * 8);
          FUN_0014a05c(local_d0,local_b8);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

