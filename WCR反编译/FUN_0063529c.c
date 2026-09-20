// FUN_0063529c @ 0063529c

void FUN_0063529c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_168;
  undefined *local_160;
  undefined *local_120;
  undefined *local_118;
  uint local_10c;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_0063a16c();
  if ((param_1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_b0 == (undefined *)0x0) {
      _memset(auStack_108,0,0x40);
      puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_160 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      if (local_160 != (undefined *)0x0) {
        lVar3 = *local_f8;
        local_168 = (undefined *)0x0;
        do {
          do {
            if (*local_f8 - lVar3 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar3,puVar2);
            }
            uVar4 = *(ulong *)(local_100 + (long)local_168 * 8);
            local_c8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKeyWindow_0269cd70);
            if ((uVar4 & 1) != 0) {
              _objc_storeStrong(&local_b0,local_c8);
              local_10c = 2;
              goto LAB_00635598;
            }
            local_168 = local_168 + 1;
          } while (local_168 < local_160);
          local_160 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_168 = (undefined *)0x0;
        } while (local_160 != (undefined *)0x0);
      }
      local_10c = 0;
LAB_00635598:
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (local_b0 == (undefined *)0x0) {
      local_10c = 1;
    }
    else {
      puVar1 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      local_118 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_10c = 1;
      }
      else {
        FUN_00640bc8();
        _objc_retainAutoreleasedReturnValue();
        local_120 = puVar1;
        if (puVar1 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setupWeChatTopBarAvatar_026a6030);
        }
        local_10c = (uint)(puVar1 == (undefined *)0x0);
        _objc_storeStrong(&local_120,0);
      }
      _objc_storeStrong(&local_118,0);
    }
    _objc_storeStrong(&local_b0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

