// FUN_0094148c @ 0094148c

void FUN_0094148c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint local_19c;
  ulong local_178;
  ulong local_170;
  cfstringStruct *local_118;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  _memset(auStack_108,0,0x40);
  uVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_170 != 0) {
    lVar8 = *local_f8;
    local_178 = 0;
    do {
      do {
        if (*local_f8 - lVar8 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar8,uVar3);
        }
        uVar9 = *(undefined8 *)(local_100 + local_178 * 8);
        local_c8 = uVar9;
        _NSSelectorFromString();
        pcVar4 = local_b8;
        local_110 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,uVar9);
        if (((ulong)pcVar4 & 1) != 0) {
          local_118 = (cfstringStruct *)0x0;
          pcVar5 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_110);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_118;
          local_118 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar5 = local_118;
          FUN_009407ac();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_118;
          local_118 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
          local_19c = 0;
          if (pcVar4 != (cfstringStruct *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_19c = (uint)puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          pcVar4 = local_118;
          bVar1 = (local_19c & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar4;
          }
          _objc_storeStrong(&local_118,0);
          bVar2 = true;
          if (bVar1) goto LAB_00941824;
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  bVar2 = false;
LAB_00941824:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

