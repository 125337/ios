// FUN_000e799c @ 000e799c

void FUN_000e799c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_c8;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar3 = local_b0;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_gestureRecognizers_026ca650);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _memset(auStack_110,0,0x40);
    uVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar4 = *local_100;
      local_178 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_108 + local_178 * 8);
          puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          local_d0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          bVar1 = false;
          if ((uVar5 & 1) != 0) {
            uVar5 = local_d0;
            _objc_getAssociatedObject(local_d0,&DAT_028c839e);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = uVar5 != 0;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_removeGestureRecognizer__026ca808,local_d0);
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _objc_storeStrong(&local_c8,0);
    local_c0 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

