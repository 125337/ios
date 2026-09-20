// FUN_008b9bdc @ 008b9bdc

void FUN_008b9bdc(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_178;
  cfstringStruct *local_140;
  byte local_131;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  cfstringStruct *local_f0;
  undefined *local_e8;
  int local_dc;
  cfstringStruct *local_d8 [3];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_b8;
  local_c0 = &cf___;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar4 = local_b8;
    FUN_008b7d64();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_c0;
    local_c0 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasPrefix__0269d320,&cf_file___);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_c0);
      _objc_retainAutoreleasedReturnValue();
      local_d8[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1a8 = local_c0;
      }
      _objc_storeStrong(&local_c0,local_1a8);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(local_d8,0);
    }
  }
  else {
    pcVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_178 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_178 = &cf___;
    }
    _objc_storeStrong(&local_c0,local_178);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByRemovingPercentEncoding_0269d840);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1c0 = local_c0;
  }
  _objc_storeStrong(&local_c0,local_1c0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (((pcVar2 == (cfstringStruct *)0x0) ||
      (pcVar2 = local_c0,
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasPrefix__0269d320,&cf_http___),
      ((ulong)pcVar2 & 1) != 0)) ||
     (pcVar2 = local_c0,
     (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasPrefix__0269d320,&cf_https___),
     ((ulong)pcVar2 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_dc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar1;
    _memset(auStack_130,0,0x40);
    pcVar2 = local_c0;
    FUN_008b80a8();
    _objc_retainAutoreleasedReturnValue();
    local_200 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_200 != (cfstringStruct *)0x0) {
      lVar3 = *local_120;
      local_208 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,pcVar2);
          }
          pcVar4 = *(cfstringStruct **)(local_128 + (long)local_208 * 8);
          local_131 = 0;
          local_f0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByExpandingTildeInPath_026a1420);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_e8;
          local_140 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_fileExistsAtPath_isDirectory__026ca638,pcVar4,&local_131);
          pcVar4 = local_140;
          if ((((ulong)puVar1 & 1) == 0) || ((local_131 & 1) != 0)) {
            local_dc = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar4;
            local_dc = 1;
          }
          _objc_storeStrong(&local_140,0);
          if (local_dc != 0) goto LAB_008ba1e0;
          local_208 = (cfstringStruct *)((long)&local_208->field0_0x0 + 1);
        } while (local_208 < local_200);
        local_200 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_208 = (cfstringStruct *)0x0;
      } while (local_200 != (cfstringStruct *)0x0);
    }
    local_dc = 0;
LAB_008ba1e0:
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_dc == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_dc = 1;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

