// FUN_008466f0 @ 008466f0

void FUN_008466f0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_148;
  ulong local_140;
  ulong local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ulong local_c0;
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
    local_c0 = 0;
    _memset(auStack_108,0,0x40);
    uVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar4 = *local_f8;
      local_148 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_100 + local_148 * 8);
          local_c8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_tag_026cab98);
          uVar3 = local_c8;
          if (uVar5 == 0x24f6e7) {
            puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar3 & 1) != 0) {
              _objc_storeStrong(&local_c0,local_c8);
              local_b4 = 2;
              goto LAB_0084696c;
            }
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_b4 = 0;
LAB_0084696c:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c0 == 0) {
      local_b4 = 1;
    }
    else {
      uVar1 = local_b0;
      FUN_0082fb1c();
      _objc_retainAutoreleasedReturnValue();
      local_120[0] = uVar1;
      if (((uVar1 != 0) && (FUN_00823390(), (uVar1 & 1) != 0)) &&
         (uVar1 = local_c0, FUN_00814d40(), (uVar1 & 1) != 0)) {
        FUN_00828294(local_120[0],local_b0,local_c0);
      }
      uVar3 = local_b0;
      uVar1 = local_c0;
      uVar5 = local_c0;
      _objc_getAssociatedObject(local_c0,&DAT_028cd1d4);
      _objc_retainAutoreleasedReturnValue();
      FUN_008288fc(uVar3,uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      _objc_storeStrong(local_120,0);
      local_b4 = 0;
    }
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

