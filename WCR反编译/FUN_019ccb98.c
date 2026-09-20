// FUN_019ccb98 @ 019ccb98

void FUN_019ccb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_1c8;
  undefined *local_1c0;
  uint local_174;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  int local_e8;
  byte local_e1;
  undefined *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_3);
  lVar3 = local_c8;
  local_d8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  local_e1 = 0;
  local_174 = 1;
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_174 = (uint)puVar1 ^ 1;
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_174 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar1;
    _CTFontManagerCreateFontDescriptorsFromURL();
    local_f8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_c0 = 0;
      local_e8 = 1;
    }
    else {
      local_b0 = puVar1;
      _objc_autoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_108 = 0;
      local_100 = puVar1;
      _memset(auStack_150,0,0x40);
      puVar1 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      if (local_1c0 != (undefined *)0x0) {
        lVar3 = *local_140;
        local_1c8 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar3 != 0) {
              _objc_enumerationMutation(*local_140 - lVar3,puVar1);
            }
            uVar4 = *(ulong *)(local_148 + (long)local_1c8 * 8);
            local_158 = uVar4;
            local_110 = uVar4;
            _CTFontDescriptorCopyAttribute(uVar4,*(undefined8 *)PTR__kCTFontNameAttribute_02578310);
            local_b8 = uVar4;
            _objc_autoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            lVar2 = local_d0;
            local_160 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
            if ((lVar2 == 0) ||
               (uVar4 = local_160,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_160,PTR_s_isEqualToString__0269ccc8,local_d0), (uVar4 & 1) == 0)) {
              if (local_108 == 0) {
                local_108 = local_158;
              }
              local_e8 = 0;
            }
            else {
              local_108 = local_158;
              local_e8 = 2;
            }
            _objc_storeStrong(&local_160,0);
            if (local_e8 != 0) goto LAB_019ccf44;
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1c8 = (undefined *)0x0;
        } while (local_1c0 != (undefined *)0x0);
      }
      local_e8 = 0;
LAB_019ccf44:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (local_108 == 0) {
        local_c0 = 0;
        local_e8 = 1;
      }
      else {
        uVar4 = local_108;
        _CTFontCreateWithFontDescriptor(local_d8,local_108,0);
        local_168 = uVar4;
        if (uVar4 == 0) {
          local_c0 = 0;
          local_e8 = 1;
        }
        else {
          local_170 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_e8 = 1;
          local_c0 = uVar4;
          _objc_storeStrong(&local_170,0);
        }
      }
      _objc_storeStrong(&local_100,0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  else {
    local_c0 = 0;
    local_e8 = 1;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c0);
  return;
}

