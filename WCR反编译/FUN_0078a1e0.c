// FUN_0078a1e0 @ 0078a1e0

void FUN_0078a1e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_1b0;
  ulong local_1a8;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8 [3];
  undefined4 local_cc;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  if (local_c0 == 0) {
    local_cc = 1;
  }
  else {
    local_b0 = &DAT_028cca50;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_0257fcf8);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    if ((DAT_028cca48 == 0) ||
       (uVar1 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isKindOfClass__0269cd68,DAT_028cca48),
       uVar3 = local_c0, (uVar1 & 1) == 0)) {
      uVar3 = local_c0;
      if (DAT_028cca48 == 0) {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar1 = local_c0;
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_f0 = uVar1;
          if ((uVar1 != 0) &&
             (uVar3 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsObject__0269cbb8,uVar1),
             (uVar3 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_f0);
          }
          _objc_storeStrong(&local_f0,0);
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_e8[0] = uVar3;
      if ((uVar3 != 0) &&
         (uVar1 = local_c8,
         (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_containsObject__0269cbb8,uVar3),
         (uVar1 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_e8[0]);
      }
      _objc_storeStrong(local_e8,0);
    }
    _memset(auStack_138,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a8 != 0) {
      lVar4 = *local_128;
      local_1b0 = 0;
      do {
        do {
          if (*local_128 - lVar4 != 0) {
            _objc_enumerationMutation(*local_128 - lVar4,uVar3);
          }
          local_f8 = *(undefined8 *)(local_130 + local_1b0 * 8);
          FUN_0078a1e0(local_f8,local_c8);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

