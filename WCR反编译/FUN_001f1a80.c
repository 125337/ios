// FUN_001f1a80 @ 001f1a80

void FUN_001f1a80(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_160;
  ulong local_158;
  byte local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined8 local_d0;
  byte local_b5;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    FUN_001f0a84();
    local_120 = 0;
    if ((uVar1 & 1) != 0) {
      uVar3 = local_b0;
      FUN_001f1dd4();
      local_120 = 0;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_b0;
        FUN_001eff1c();
        local_120 = 0;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_b0;
          FUN_001ee184();
          local_120 = (byte)uVar3 ^ 1;
        }
      }
    }
    local_b5 = local_120 & 1;
    FUN_001f1484();
    local_d0 = param_1;
    _memset(auStack_118,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_158 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar5 = *local_108;
      local_160 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_110 + local_160 * 8);
          puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar6 & 1) != 0) {
            FUN_001f0f2c(local_d0,local_d8,local_b5 & 1);
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

