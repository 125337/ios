// FUN_0001af08 @ 0001af08

void FUN_0001af08(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong local_188;
  ulong local_180;
  cfstringStruct *local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined4 local_d8;
  cfstringStruct *local_c8;
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
    local_140 = &cf___;
  }
  else {
    local_140 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if ((local_140 == (cfstringStruct *)0x0) ||
     (uVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    pcVar4 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar4;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar5 = *local_110;
      local_188 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar2);
          }
          pcVar4 = local_c8;
          local_e0 = *(undefined8 *)(local_118 + local_188 * 8);
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,puVar3,&cf__);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_c8;
          local_c8 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    pcVar4 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar4;
  }
  local_d8 = 1;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

