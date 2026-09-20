// FUN_001f2cbc @ 001f2cbc

void FUN_001f2cbc(undefined8 param_1,byte param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined4 local_c4;
  long local_c0;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar2 = local_b0;
  local_c0 = param_3;
  local_b1 = param_2;
  if ((local_b0 == 0) || (8 < param_3)) {
    local_c4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      FUN_001f2fb0(local_b0,local_b1 & 1);
    }
    _memset(auStack_120,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar3 = *local_110;
      local_178 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,uVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + local_178 * 8);
          FUN_001f2cbc(local_e0,local_b1 & 1,local_c0 + 1);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

