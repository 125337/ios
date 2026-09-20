// FUN_00fb7464 @ 00fb7464

void FUN_00fb7464(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_188;
  undefined *local_180;
  ulong local_148;
  ulong local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  uint local_dc;
  ulong local_d8;
  ulong local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  if (local_d8 == 0) {
    local_d0 = 0;
    local_dc = 1;
  }
  else {
    local_48 = &cf_wcrefine_getMessageWrap;
    local_40 = &cf_getMessageWrap;
    local_38 = &cf_messageWrap;
    local_30 = &cf_msgWrap;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar1;
    _memset(auStack_130,0,0x40);
    puVar1 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c8,0x10);
    if (local_180 != (undefined *)0x0) {
      lVar4 = *local_120;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,puVar1);
          }
          uVar5 = *(undefined8 *)(local_128 + (long)local_188 * 8);
          local_f0 = uVar5;
          _NSSelectorFromString();
          uVar2 = local_d8;
          local_138 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_respondsToSelector__026ca818,uVar5);
          if ((uVar2 & 1) != 0) {
            uVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_138);
            _objc_retainAutoreleasedReturnValue();
            local_140 = uVar2;
            if (uVar2 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_d0 = uVar2;
            }
            local_dc = (uint)(uVar2 != 0);
            _objc_storeStrong(&local_140,0);
            if (local_dc != 0) goto LAB_00fb76dc;
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    local_dc = 0;
LAB_00fb76dc:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_dc == 0) {
      local_148 = 0;
      uVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_valueForKey__0269d128,&cf_viewModel);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_148;
      local_148 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_148 == 0) ||
         (uVar2 = local_148,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_148,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
         (uVar2 & 1) == 0)) {
        local_d0 = 0;
      }
      else {
        uVar2 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_messageWrap_0269d070);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = uVar2;
      }
      local_dc = 1;
      _objc_storeStrong(&local_148,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

