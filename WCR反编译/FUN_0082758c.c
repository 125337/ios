// FUN_0082758c @ 0082758c

void FUN_0082758c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong local_138;
  ulong local_130;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined *local_c0;
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
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_130 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_130 != 0) {
      lVar5 = *local_f0;
      local_138 = 0;
      do {
        do {
          if (*local_f0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar5,uVar2);
          }
          puVar6 = *(undefined **)(local_f8 + local_138 * 8);
          uVar3 = local_b0;
          local_c0 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_backgroundView_026a0320);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          lVar1 = (long)puVar6 - uVar3;
          if (lVar1 != 0) {
            puVar6 = local_c0;
            _object_getClass(lVar1);
            puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            if (puVar6 == puVar4) {
              puVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar6);
              if (puVar4 == (undefined *)0x0) {
                FUN_0082a0bc(local_c0);
              }
            }
          }
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_138 = 0;
      } while (local_130 != 0);
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

