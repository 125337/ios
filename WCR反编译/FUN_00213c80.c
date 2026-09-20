// FUN_00213c80 @ 00213c80

void FUN_00213c80(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_178;
  ulong local_170;
  long local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar3 = *local_f8;
      local_178 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,uVar2);
          }
          lVar4 = *(long *)(local_100 + local_178 * 8);
          local_c8 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_120[0] = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar4,PTR_s_rangeOfString__0269d838,&cf_VisualEffectSubview);
          bVar1 = true;
          if (lVar4 == 0x7fffffffffffffff) {
            lVar4 = local_120[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120[0],PTR_s_rangeOfString__0269d838,&cf_VisualEffectContentView);
            bVar1 = lVar4 != 0x7fffffffffffffff;
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_setBackgroundColor__026ca888,local_b8);
          }
          _objc_storeStrong(local_120,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

