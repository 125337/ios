// FUN_008563f0 @ 008563f0

void FUN_008563f0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == 0) {
    local_b4 = 1;
  }
  else {
    _memset(auStack_100,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_138 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
    if (local_138 != 0) {
      lVar3 = *local_f0;
      local_140 = 0;
      do {
        do {
          if (*local_f0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar3,uVar2);
          }
          lVar4 = *(long *)(local_f8 + local_140 * 8);
          local_c0 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_tag_026cab98);
          if (lVar4 == 0x24f6dc) {
            FUN_008566dc(0,local_c0);
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperview_026ca800);
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

