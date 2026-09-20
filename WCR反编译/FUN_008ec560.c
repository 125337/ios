// FUN_008ec560 @ 008ec560

void FUN_008ec560(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  bool bVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_178;
  ulong local_170;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  undefined8 local_120;
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
    lVar6 = *local_f8;
    local_178 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,uVar3);
        }
        uVar7 = *(undefined8 *)(local_100 + local_178 * 8);
        local_c8 = uVar7;
        _NSSelectorFromString();
        pcVar5 = local_b8;
        local_120 = uVar7;
        FUN_008e6088(local_b8,uVar7);
        _objc_retainAutoreleasedReturnValue();
        local_128 = pcVar5;
        FUN_008ed204();
        _objc_retainAutoreleasedReturnValue();
        local_130 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
        pcVar2 = local_130;
        bVar4 = pcVar5 != (cfstringStruct *)0x0;
        if (bVar4) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar2;
        }
        _objc_storeStrong(bVar4,&local_130);
        _objc_storeStrong(&local_128,0);
        bVar1 = true;
        if (bVar4) goto LAB_008ec814;
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  bVar1 = false;
LAB_008ec814:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar1) {
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

