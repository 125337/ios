// FUN_016ca70c @ 016ca70c

void FUN_016ca70c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined *local_1d0;
  undefined *local_1c8;
  uint local_16c;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  cfstringStruct *local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  undefined *local_f0;
  uint local_e8;
  byte local_e1;
  undefined *local_e0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_e1 = 0;
  lVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  local_16c = 1;
  if (lVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_16c = (uint)puVar3 ^ 1;
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  if ((local_16c & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = 0;
    local_f0 = puVar3;
    _CTFontManagerRegisterFontsForURL(puVar3,1,&local_f8);
    if (local_f8 != 0) {
      _CFRelease(local_f8);
    }
    puVar3 = local_f0;
    _CTFontManagerCreateFontDescriptorsFromURL();
    local_100 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = &cf___;
      local_e8 = 1;
    }
    else {
      local_b0 = puVar3;
      _objc_autoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_108 = puVar3;
      _memset(auStack_150,0,0x40);
      puVar3 = local_108;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10)
      ;
      if (local_1c8 != (undefined *)0x0) {
        lVar4 = *local_140;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar4 != 0) {
              _objc_enumerationMutation(*local_140 - lVar4,puVar3);
            }
            pcVar5 = *(cfstringStruct **)(local_148 + (long)local_1d0 * 8);
            local_158 = pcVar5;
            local_110 = pcVar5;
            _CTFontDescriptorCopyAttribute(pcVar5,*(undefined8 *)PTR__kCTFontNameAttribute_02578310)
            ;
            local_b8 = pcVar5;
            _objc_autoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_160 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
            pcVar1 = local_160;
            bVar2 = pcVar5 != (cfstringStruct *)0x0;
            if (bVar2) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c0 = pcVar1;
            }
            local_e8 = (uint)bVar2;
            _objc_storeStrong(bVar2,&local_160,0);
            if (local_e8 != 0) goto LAB_016cabb8;
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      local_e8 = 0;
LAB_016cabb8:
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_e8 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = &cf___;
        local_e8 = 1;
      }
      _objc_storeStrong(&local_108,0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_e8 = 1;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

