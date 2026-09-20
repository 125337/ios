// FUN_0085959c @ 0085959c

void FUN_0085959c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_270;
  ulong local_268;
  ulong local_208;
  ulong local_200;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined *local_1a0;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  undefined *local_148;
  int local_13c;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  if (local_138 == 0) {
    local_130 = (undefined *)0x0;
    local_13c = 1;
  }
  else {
    _memset(auStack_188,0,0x40);
    uVar1 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_200 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_200 != 0) {
      lVar3 = *local_178;
      local_208 = 0;
      do {
        do {
          if (*local_178 - lVar3 != 0) {
            _objc_enumerationMutation(*local_178 - lVar3,uVar1);
          }
          puVar4 = *(undefined **)(local_180 + local_208 * 8);
          local_148 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_tag_026cab98);
          if (puVar4 != (undefined *)0x24f6dc) {
            puVar5 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_class_0269cd60);
            puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            puVar4 = local_148;
            if (puVar5 == puVar2) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = puVar4;
              local_13c = 1;
              goto LAB_00859828;
            }
          }
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10
                  );
        local_208 = 0;
      } while (local_200 != 0);
    }
    local_13c = 0;
LAB_00859828:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_13c == 0) {
      _memset(auStack_1e0,0,0x40);
      uVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_268 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_268 != 0) {
        lVar3 = *local_1d0;
        local_270 = 0;
        do {
          do {
            if (*local_1d0 - lVar3 != 0) {
              _objc_enumerationMutation(*local_1d0 - lVar3,uVar1);
            }
            puVar5 = *(undefined **)(local_1d8 + local_270 * 8);
            local_1a0 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_tag_026cab98);
            puVar4 = local_1a0;
            if (puVar5 != (undefined *)0x24f6dc) {
              (*(code *)PTR__objc_retain_02578638)();
              local_130 = puVar4;
              local_13c = 1;
              goto LAB_00859a1c;
            }
            local_270 = local_270 + 1;
          } while (local_270 < local_268);
          local_268 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                     0x10);
          local_270 = 0;
        } while (local_268 != 0);
      }
      local_13c = 0;
LAB_00859a1c:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_13c == 0) {
        local_130 = (undefined *)0x0;
        local_13c = 1;
      }
    }
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

