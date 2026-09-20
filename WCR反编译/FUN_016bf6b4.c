// FUN_016bf6b4 @ 016bf6b4

byte FUN_016bf6b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_d0;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  uVar2 = local_b8;
  if (lVar6 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_118,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_168 != 0) {
        lVar6 = *local_108;
        local_170 = 0;
        do {
          do {
            if (*local_108 - lVar6 != 0) {
              _objc_enumerationMutation(*local_108 - lVar6,uVar2);
            }
            uVar7 = *(ulong *)(local_110 + local_170 * 8);
            local_d8 = uVar7;
            FUN_016bf4a8();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
            (*(code *)PTR__objc_release_02578630)(lVar4);
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if ((uVar5 & 1) != 0) {
              local_a9 = 1;
              local_d0 = 1;
              goto LAB_016bfa60;
            }
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_d0 = 0;
LAB_016bfa60:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_d0 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
      goto LAB_016bfab0;
    }
  }
  local_a9 = 0;
  local_d0 = 1;
LAB_016bfab0:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

