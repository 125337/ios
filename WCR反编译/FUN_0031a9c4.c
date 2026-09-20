// FUN_0031a9c4 @ 0031a9c4

byte FUN_0031a9c4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint local_1dc;
  ulong local_160;
  ulong local_158;
  ulong local_130;
  ulong local_128;
  ulong local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
    goto LAB_0031af78;
  }
  _memset(auStack_108,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_158 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_158 != 0) {
    lVar6 = *local_f8;
    local_160 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,uVar2);
        }
        local_c8 = *(ulong *)(local_100 + local_160 * 8);
        uVar3 = local_b8;
        FUN_00318874(local_b8,local_c8);
        uVar5 = local_c8;
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isMemberOfClass__026a2030,puVar4);
          if ((uVar5 & 1) != 0) {
            local_a9 = 1;
            local_bc = 1;
            goto LAB_0031ac38;
          }
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  local_bc = 0;
LAB_0031ac38:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_bc != 0) goto LAB_0031af78;
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_backgroundView_026a0320);
  _objc_retainAutoreleasedReturnValue();
  local_120[0] = uVar2;
  if (uVar2 == 0) {
LAB_0031ad18:
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_128 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_128;
    bVar1 = false;
    local_1dc = 0;
    if (local_128 != 0) {
      local_130 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_128;
      bVar1 = true;
      local_1dc = 0;
      if (uVar2 != local_130) {
        puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isMemberOfClass__026a2030,puVar4);
        local_1dc = (uint)uVar5;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_130);
    }
    local_a9 = (local_1dc & 1) != 0;
    local_bc = 1;
    _objc_storeStrong(&local_128,0);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isMemberOfClass__026a2030,puVar4);
    if ((uVar2 & 1) == 0) goto LAB_0031ad18;
    local_a9 = 1;
    local_bc = 1;
  }
  _objc_storeStrong(local_120,0);
LAB_0031af78:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

