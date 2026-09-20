// FUN_008ec908 @ 008ec908

void FUN_008ec908(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_188;
  ulong local_180;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  uint local_d8;
  cfstringStruct *local_c8;
  ulong local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar3 = "CMessageWrap";
  _objc_getClass();
  local_c8 = (cfstringStruct *)pcVar3;
  if (((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) || (local_b8 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_d8 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar6 = *local_110;
      local_188 = 0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,uVar1);
          }
          uVar7 = *(undefined8 *)(local_118 + local_188 * 8);
          local_e0 = uVar7;
          _NSSelectorFromString();
          pcVar4 = local_c8;
          local_128 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,uVar7);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar5 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_128,local_b8);
            _objc_retainAutoreleasedReturnValue();
            local_130 = pcVar5;
            FUN_008ed204();
            _objc_retainAutoreleasedReturnValue();
            local_138 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
            pcVar4 = local_138;
            bVar2 = pcVar5 != (cfstringStruct *)0x0;
            if (bVar2) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar4;
            }
            local_d8 = (uint)bVar2;
            _objc_storeStrong(bVar2,&local_138);
            _objc_storeStrong(&local_130,0);
            if (local_d8 != 0) goto LAB_008ecc74;
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    local_d8 = 0;
LAB_008ecc74:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_d8 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_d8 = 1;
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

