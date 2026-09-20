// FUN_001f20f4 @ 001f20f4

void FUN_001f20f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_198;
  undefined *local_190;
  undefined *local_170;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8 [3];
  undefined *local_c0;
  undefined4 local_b4;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == (undefined *)0x0) {
    local_b4 = 1;
  }
  else {
    puVar1 = local_b0;
    _objc_getAssociatedObject(local_b0,DAT_026dfaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_setClipsToBounds__026ca8c8,(ulong)puVar1 & 0xffffffff);
      _objc_setAssociatedObject(local_b0,DAT_026dfaf8,0,1);
    }
    puVar1 = local_b0;
    _objc_getAssociatedObject(local_b0,DAT_026dfb00);
    _objc_retainAutoreleasedReturnValue();
    local_d8[0] = puVar1;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == puVar2) {
        local_170 = (undefined *)0x0;
      }
      else {
        local_170 = local_d8[0];
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888,local_170);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_setAssociatedObject(local_b0,DAT_026dfb00,0,1);
    }
    _memset(auStack_120,0,0x40);
    puVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != (undefined *)0x0) {
      lVar3 = *local_110;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,puVar1);
          }
          uVar4 = *(ulong *)(local_118 + (long)local_198 * 8);
          local_e0 = uVar4;
          _objc_getAssociatedObject(uVar4,DAT_026dfb08);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_128 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if ((uVar4 & 1) == 0) {
            local_b4 = 3;
          }
          else {
            uVar4 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_boolValue_026ca540);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_setHidden__026ca970,uVar4 & 0xffffffff);
            _objc_setAssociatedObject(local_e0,DAT_026dfb08,0,1);
            local_b4 = 0;
          }
          _objc_storeStrong(&local_128,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(local_d8);
    _objc_storeStrong(&local_c0,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

