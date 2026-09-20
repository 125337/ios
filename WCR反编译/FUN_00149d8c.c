// FUN_00149d8c @ 00149d8c

void FUN_00149d8c(double param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_f8 [8];
  long local_f0;
  long *local_e8;
  ulong local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  local_b0 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    _memset(auStack_f8,0,0x40);
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_130 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10);
    if (local_130 != (undefined *)0x0) {
      lVar4 = *local_e8;
      local_138 = (undefined *)0x0;
      do {
        do {
          if (*local_e8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_e8 - lVar4,puVar3);
          }
          uVar5 = *(ulong *)(local_f0 + (long)local_138 * 8);
          local_b8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768);
          if (((uVar5 & 1) == 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_alpha_026ca4d8),
             DAT_02323d38 < param_1)) {
            FUN_0014a05c(local_b8,local_b0);
          }
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_f8,auStack_a8,0x10
                  );
        local_138 = (undefined *)0x0;
      } while (local_130 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

