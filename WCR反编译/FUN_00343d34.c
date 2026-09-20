// FUN_00343d34 @ 00343d34

void FUN_00343d34(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_170;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  cfstringStruct *local_f0;
  long local_e8;
  undefined *local_d0;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_c0 = param_3;
  local_b8 = param_2;
  if ((local_b0 == (cfstringStruct *)0x0) || (param_3 < param_2)) {
    local_c4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    for (local_e8 = 0; local_e8 < local_b8; local_e8 = local_e8 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_appendString__0269ccb0,&cf_space_s_);
    }
    pcVar2 = local_b0;
    FUN_00344e1c(local_e8 - local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_170 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_170 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_170;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _memset(auStack_138,0,0x40);
    pcVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_198 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_198 != (cfstringStruct *)0x0) {
      lVar3 = *local_128;
      local_1a0 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_128 - lVar3 != 0) {
            _objc_enumerationMutation(*local_128 - lVar3,pcVar2);
          }
          local_f8 = *(undefined8 *)(local_130 + (long)local_1a0 * 8);
          FUN_00343d34(local_f8,local_b8 + 1,local_c0);
          local_1a0 = (cfstringStruct *)((long)&local_1a0->field0_0x0 + 1);
        } while (local_1a0 < local_198);
        local_198 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1a0 = (cfstringStruct *)0x0;
      } while (local_198 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

