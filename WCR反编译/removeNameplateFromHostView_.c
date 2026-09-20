// removeNameplateFromHostView: @ 010df168

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateHelper::removeNameplateFromHostView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_148;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c4;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  if (local_c0 == 0) {
    local_c4 = 1;
  }
  else {
    uVar4 = local_c0;
    _objc_getAssociatedObject(local_c0,DAT_0280e1b8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_d0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeFromSuperview_026ca800);
    }
    _memset(auStack_118,0,0x40);
    uVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_148 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_148 != 0) {
      lVar3 = *local_108;
      local_150 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_110 + local_150 * 8);
          local_d8 = uVar4;
          _objc_getAssociatedObject(uVar4,DAT_0280e1c0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_restoreNicknamePushIfNeeded__026a5e90,local_d8);
          }
          if ((local_d8 != local_d0) &&
             (uVar4 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_tag_026cab98),
             uVar4 == 0x24f6f8)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeFromSuperview_026ca800);
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_setAssociatedObject(local_c0,DAT_0280e1b8);
    _objc_setAssociatedObject(local_c0,DAT_0280e1c8,0,1);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

