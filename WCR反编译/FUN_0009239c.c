// FUN_0009239c @ 0009239c

void FUN_0009239c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  code *local_188;
  code *local_180;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  code *local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  cfstringStruct *local_c8;
  uint local_bc;
  code *local_b8;
  code *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (code *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == (code *)0x0) {
    local_b0 = (code *)0x0;
    local_bc = 1;
  }
  else {
    pcVar1 = &cf_headImageView;
    _NSSelectorFromString();
    pcVar2 = local_b8;
    local_c8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_methodForSelector__0269e1d8,local_c8);
      pcVar3 = local_b8;
      local_e8 = pcVar2;
      local_e0 = pcVar2;
      (*pcVar2)(local_b8,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = pcVar3;
      if (pcVar3 != (code *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar3;
      }
      local_bc = (uint)(pcVar3 != (code *)0x0);
      _objc_storeStrong(&local_f0,0);
      if (local_bc != 0) goto LAB_00092720;
    }
    _memset(auStack_138,0,0x40);
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_180 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != (code *)0x0) {
      lVar5 = *local_128;
      local_188 = (code *)0x0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,pcVar2);
          }
          pcVar6 = *(code **)(local_130 + (long)local_188 * 8);
          puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_f8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
          pcVar3 = local_f8;
          if (((ulong)pcVar6 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar3;
            local_bc = 1;
            goto LAB_000926f0;
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_188 = (code *)0x0;
      } while (local_180 != (code *)0x0);
    }
    local_bc = 0;
LAB_000926f0:
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_bc == 0) {
      local_b0 = (code *)0x0;
      local_bc = 1;
    }
  }
LAB_00092720:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

