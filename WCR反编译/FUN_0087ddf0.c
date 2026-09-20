// FUN_0087ddf0 @ 0087ddf0

void FUN_0087ddf0(undefined8 param_1)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_160;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8 [3];
  char *local_c0;
  undefined4 local_b4;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  if (local_b0 == (cfstringStruct *)0x0) {
    local_b4 = 1;
  }
  else {
    pcVar1 = "MMCPLabel";
    _objc_getClass();
    local_c0 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       (pcVar2 = local_b0,
       (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isKindOfClass__0269cd68,pcVar1),
       pcVar3 = local_b0, ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d8[0] = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_tag_026cab98);
      if (pcVar3 == (cfstringStruct *)0x16070) {
        pcVar3 = local_d8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_160 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_160 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = local_160;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_setText__026caa88,local_e0);
        }
        _objc_storeStrong(&local_e0,0);
      }
      _objc_storeStrong(local_d8,0);
    }
    _memset(auStack_128,0,0x40);
    pcVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_190 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != (cfstringStruct *)0x0) {
      lVar4 = *local_118;
      local_198 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,pcVar3);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_198 * 8);
          FUN_0087ddf0(local_e8);
          local_198 = (cfstringStruct *)((long)&local_198->field0_0x0 + 1);
        } while (local_198 < local_190);
        local_190 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_198 = (cfstringStruct *)0x0;
      } while (local_190 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

