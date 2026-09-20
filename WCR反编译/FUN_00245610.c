// FUN_00245610 @ 00245610

void FUN_00245610(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_190;
  undefined *local_188;
  ulong local_158;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  int local_f8;
  byte local_f1;
  ulong local_f0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_f1 = 0;
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_originalMessageWrap_026a0da0);
  if ((uVar1 & 1) == 0) {
    local_158 = 0;
  }
  else {
    local_158 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_originalMessageWrap_026a0da0);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 1;
    local_f0 = local_158;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_158;
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  uVar1 = local_d8;
  if (local_d8 == 0) {
    _memset(auStack_140,0,0x40);
    local_c0 = &cf_originalMessageWrap;
    local_b8 = &cf__originalMessageWrap;
    local_b0 = &cf_m_originalMessageWrap;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != (undefined *)0x0) {
      lVar4 = *local_130;
      local_190 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar4 != 0) {
            _objc_enumerationMutation(*local_130 - lVar4,puVar2);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_190 * 8);
          uVar3 = local_d0;
          FUN_00245dbc(local_d0,local_100);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_d8;
          local_d8 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_d8;
          if (local_d8 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = uVar1;
            local_f8 = 1;
            goto LAB_0024597c;
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_190 = (undefined *)0x0;
      } while (local_188 != (undefined *)0x0);
    }
    local_f8 = 0;
LAB_0024597c:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_f8 == 0) {
      local_c8 = 0;
      local_f8 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = uVar1;
    local_f8 = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

