// FUN_00145f70 @ 00145f70

byte FUN_00145f70(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  int local_c4;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = param_2;
  if ((local_b8 == 0) || (param_2 < 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_150 != 0) {
      lVar3 = *local_100;
      local_158 = 0;
      do {
        do {
          if (*local_100 - lVar3 != 0) {
            _objc_enumerationMutation(*local_100 - lVar3,uVar1);
          }
          uVar4 = *(ulong *)(local_108 + local_158 * 8);
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_d0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar4 & 1) != 0) {
            local_a9 = 1;
            local_c4 = 1;
            goto LAB_0014622c;
          }
          if ((0 < local_c0) &&
             (uVar4 = local_d0, FUN_00145f70(local_d0,local_c0 + -1), (uVar4 & 1) != 0)) {
            local_a9 = 1;
            local_c4 = 1;
            goto LAB_0014622c;
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
LAB_0014622c:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c4 == 0) {
      local_a9 = 0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

