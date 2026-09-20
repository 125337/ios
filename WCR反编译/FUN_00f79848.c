// FUN_00f79848 @ 00f79848

void FUN_00f79848(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_158;
  ulong local_150;
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
  local_150 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar7 = *local_f8;
    local_158 = 0;
    do {
      do {
        if (*local_f8 - lVar7 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar7,uVar3);
        }
        uVar8 = *(undefined8 *)(local_100 + local_158 * 8);
        local_c8 = uVar8;
        _NSSelectorFromString();
        pcVar4 = local_b8;
        local_110 = uVar8;
        FUN_00f7d33c(local_b8,uVar8);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        FUN_00f73814();
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        pcVar5 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
        pcVar4 = local_118;
        if (pcVar5 == (cfstringStruct *)0x0) {
          pcVar5 = local_b8;
          FUN_00f7c19c(0,local_b8,local_c8);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar5;
          FUN_00f73814();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_118;
          local_118 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar5 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
          pcVar4 = local_118;
          if (pcVar5 == (cfstringStruct *)0x0) {
            bVar1 = false;
            uVar8 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar4;
            uVar8 = 1;
            bVar1 = true;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar4;
          uVar8 = 1;
          bVar1 = true;
        }
        _objc_storeStrong(uVar8,&local_118,0);
        bVar2 = true;
        if (bVar1) goto LAB_00f79b04;
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  bVar2 = false;
LAB_00f79b04:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

