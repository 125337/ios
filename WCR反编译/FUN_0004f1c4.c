// FUN_0004f1c4 @ 0004f1c4

void FUN_0004f1c4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong local_178;
  ulong local_170;
  cfstringStruct *local_130;
  cfstringStruct *local_128 [3];
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  uint local_c4;
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
  if (local_b8 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar5 = *local_100;
      local_178 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar2);
          }
          local_d0 = *(undefined8 *)(local_108 + local_178 * 8);
          pcVar4 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,local_d0);
          _objc_retainAutoreleasedReturnValue();
          local_128[0] = pcVar4;
          FUN_0004fa34();
          _objc_retainAutoreleasedReturnValue();
          local_130 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
          pcVar1 = local_130;
          bVar3 = pcVar4 != (cfstringStruct *)0x0;
          if (bVar3) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar1;
          }
          local_c4 = (uint)bVar3;
          _objc_storeStrong(bVar3,&local_130);
          _objc_storeStrong(local_128,0);
          if (local_c4 != 0) goto LAB_0004f4b0;
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_c4 = 0;
LAB_0004f4b0:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_c4 = 1;
    }
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

