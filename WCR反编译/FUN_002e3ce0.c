// FUN_002e3ce0 @ 002e3ce0

void FUN_002e3ce0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_160;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100;
  ulong local_f8;
  ulong local_f0;
  long local_d8;
  undefined4 local_cc;
  ulong local_c8;
  undefined *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  if (local_c8 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_c0 = puVar1;
  }
  else {
    local_d8 = 0;
    _CTFontManagerRegisterFontsForURL(local_c8,1,&local_d8);
    if (local_d8 != 0) {
      _CFRelease(local_d8);
    }
    uVar2 = local_c8;
    _CTFontManagerCreateFontDescriptorsFromURL();
    local_f0 = uVar2;
    if (uVar2 == 0) {
      puVar1 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_cc = 1;
      local_c0 = puVar1;
    }
    else {
      local_b0 = uVar2;
      _objc_autoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_f8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_100 = puVar1;
      _memset(auStack_148,0,0x40);
      uVar2 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      if (local_1b8 != 0) {
        lVar3 = *local_138;
        local_1c0 = 0;
        do {
          do {
            if (*local_138 - lVar3 != 0) {
              _objc_enumerationMutation(*local_138 - lVar3,uVar2);
            }
            uVar4 = *(ulong *)(local_140 + local_1c0 * 8);
            local_150 = uVar4;
            local_108 = uVar4;
            if (uVar4 != 0) {
              _CTFontDescriptorCopyAttributes();
              local_b8 = uVar4;
              _objc_autoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_158 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar4 & 1) == 0) {
                local_cc = 3;
              }
              else {
                puVar1 = PTR__OBJC_CLASS___UIFontDescriptor_026ce4f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIFontDescriptor_026ce4f8,
                           PTR_s_fontDescriptorWithFontAttributes_026a1d40,local_158);
                _objc_retainAutoreleasedReturnValue();
                local_160 = puVar1;
                if (puVar1 != (undefined *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addObject__0269d180,puVar1);
                }
                _objc_storeStrong(&local_160,0);
                local_cc = 0;
              }
              _objc_storeStrong(&local_158,0);
            }
            local_1c0 = local_1c0 + 1;
          } while (local_1c0 < local_1b8);
          local_1b8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1c0 = 0;
        } while (local_1b8 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_copy_0269d150);
      local_cc = 1;
      local_c0 = puVar1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

