// FUN_003d7f2c @ 003d7f2c

void FUN_003d7f2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar3 = local_c0;
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_section_0269e988);
  FUN_003d7db8(uVar3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
  puVar2 = local_b8;
  if (uVar3 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_row_0269e210);
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    uVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_168 != 0) {
      lVar5 = *local_110;
      local_170 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar3);
          }
          lVar6 = *(long *)(local_118 + local_170 * 8);
          local_e0 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_integerValue_026ca750);
          if (-1 < lVar6) {
            if ((long)local_d8 < lVar6) {
              local_cc = 2;
              goto LAB_003d8194;
            }
            local_d8 = local_d8 + 1;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    local_cc = 0;
LAB_003d8194:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar1 = local_d8;
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    puVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_section_0269e988);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_indexPathForRow_inSection__0269e9a0,puVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar2;
  }
  local_cc = 1;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

