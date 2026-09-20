// FUN_0041f71c @ 0041f71c

void FUN_0041f71c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_200;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  cfstringStruct *local_118;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  uint local_e4;
  cfstringStruct *local_e0;
  int local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar2 = local_c0;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_b8;
  local_c8 = pcVar2;
  FUN_0040bb14(local_b8,&cf_messageType);
  local_d8 = (int)pcVar3;
  pcVar2 = local_b8;
  FUN_004055cc(local_b8,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar2;
  if ((local_d8 == 0x31) && (FUN_0040ca7c(0), pcVar2 == (cfstringStruct *)0x39)) {
    pcVar3 = local_c8;
    FUN_0040f778(0);
    pcVar2 = local_c8;
    if (((ulong)pcVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar2;
      local_e4 = 1;
    }
    else {
      pcVar2 = local_b8;
      FUN_004055cc(local_b8,&cf_type57Title);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_b8;
      FUN_004055cc(local_b8,&cf_type57ReferDisplay);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar2;
      FUN_0041f424();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_e4 = 1;
    }
    goto LAB_0041fe48;
  }
  if ((local_d8 == 0x31) && (pcVar2 = local_e0, FUN_0040ca7c(0), pcVar2 == (cfstringStruct *)0x13))
  {
    pcVar3 = local_b8;
    FUN_004055cc(0,local_b8,&cf_appMsgTitle);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    pcVar2 = local_f0;
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar2;
    }
    local_e4 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_f0,0);
    if (local_e4 != 0) goto LAB_0041fe48;
  }
  pcVar2 = local_b8;
  FUN_0040cccc(local_b8,&cf_structuredTexts);
  _objc_retainAutoreleasedReturnValue();
  local_109 = 0;
  local_f8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_200 = &cf___;
  }
  else {
    local_200 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    local_109 = 1;
    local_108 = local_200;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = local_200;
  if ((local_109 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  pcVar2 = local_c8;
  FUN_0040f778();
  uVar4 = (ulong)pcVar2 & 0xffffffff;
  if (((ulong)pcVar2 & 1) == 0) {
LAB_0041fbe8:
    pcVar2 = local_c8;
    FUN_0040f778(uVar4);
    if (((ulong)pcVar2 & 1) != 0) {
      _memset(auStack_158,0,0x40);
      pcVar2 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_248 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10)
      ;
      if (local_248 != (cfstringStruct *)0x0) {
        lVar5 = *local_148;
        local_250 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_148 - lVar5 != 0) {
              _objc_enumerationMutation(*local_148 - lVar5,pcVar2);
            }
            pcVar6 = *(cfstringStruct **)(local_150 + (long)local_250 * 8);
            local_118 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
            pcVar3 = local_118;
            if (pcVar6 != (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = pcVar3;
              local_e4 = 1;
              goto LAB_0041fdbc;
            }
            local_250 = (cfstringStruct *)((long)&local_250->field0_0x0 + 1);
          } while (local_250 < local_248);
          local_248 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_250 = (cfstringStruct *)0x0;
        } while (local_248 != (cfstringStruct *)0x0);
      }
      local_e4 = 0;
LAB_0041fdbc:
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (local_e4 != 0) goto LAB_0041fe08;
    }
    pcVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar2;
    local_e4 = 1;
  }
  else {
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    pcVar2 = local_100;
    uVar4 = 0;
    if (pcVar3 == (cfstringStruct *)0x0) goto LAB_0041fbe8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar2;
    local_e4 = 1;
  }
LAB_0041fe08:
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
LAB_0041fe48:
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

