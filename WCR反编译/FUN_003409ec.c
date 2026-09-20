// FUN_003409ec @ 003409ec

byte FUN_003409ec(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *local_320;
  undefined *local_2b0;
  undefined *local_2a8;
  cfstringStruct *local_250;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  cfstringStruct *local_160;
  byte local_151;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  byte local_139;
  cfstringStruct *local_138;
  byte local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  int local_104;
  cfstringStruct *local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_100,param_1);
  if ((local_100 == (cfstringStruct *)0x0) ||
     (local_100 < (cfstringStruct *)(section_00000ff8.sectname + 8))) {
    local_f1 = 0;
    local_104 = 1;
    goto LAB_00341534;
  }
  pcVar1 = local_100;
  FUN_0033d258(local_100 + -0x80,local_100,&cf_phAsset);
  _objc_retainAutoreleasedReturnValue();
  local_129 = 0;
  local_139 = 0;
  local_1d8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_1f0 = local_100;
    FUN_0033d258(local_100,&cf_m_phAsset);
    _objc_retainAutoreleasedReturnValue();
    local_129 = 1;
    local_128 = local_1f0;
    if (local_1f0 == (cfstringStruct *)0x0) {
      local_1f0 = local_100;
      FUN_0033d258(local_100,&cf_asset);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 1;
      local_138 = local_1f0;
    }
    local_1d8 = local_1f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = local_1d8;
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_110;
  puVar2 = PTR__OBJC_CLASS___PHAsset_026ce530;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar1 & 1) == 0) ||
     (pcVar1 = local_110, (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_mediaType_026a21f8),
     pcVar1 != (cfstringStruct *)0x2)) {
    pcVar1 = local_100;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_objectForKey__0269e048,&cf_UIImagePickerControllerMediaType);
      _objc_retainAutoreleasedReturnValue();
      local_151 = 0;
      local_250 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_250 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_objectForKey__0269e048,&cf_mediaType);
        _objc_retainAutoreleasedReturnValue();
        local_150 = local_250;
      }
      local_151 = pcVar1 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_250;
      if ((local_151 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_148;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
LAB_00340fac:
        local_104 = 0;
      }
      else {
        pcVar1 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_160 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_containsString__0269d0b0,&cf_movie);
        if ((((ulong)pcVar1 & 1) == 0) &&
           (pcVar1 = local_160,
           (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_containsString__0269d0b0,&cf_video)
           , ((ulong)pcVar1 & 1) == 0)) {
          local_104 = 0;
        }
        else {
          local_f1 = 1;
          local_104 = 1;
        }
        _objc_storeStrong(&local_160,0);
        if (local_104 == 0) goto LAB_00340fac;
      }
      _objc_storeStrong(&local_148,0);
      if (local_104 != 0) goto LAB_00341514;
    }
    _memset(auStack_1a8,0,0x40);
    local_d0 = &cf_isVideo;
    local_c8 = &cf_m_isVideo;
    local_c0 = &cf_mIsVideo;
    local_b8 = &cf_m_isVideoType;
    local_b0 = &cf_isVideoType;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_2a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2a8 != (undefined *)0x0) {
      lVar3 = *local_198;
      local_2b0 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar3 != 0) {
            _objc_enumerationMutation(*local_198 - lVar3,puVar2);
          }
          local_168 = *(undefined8 *)(local_1a0 + (long)local_2b0 * 8);
          pcVar1 = local_100;
          FUN_0033d258(local_100,local_168);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
          if ((((ulong)pcVar1 & 1) == 0) ||
             (pcVar1 = local_1b0,
             (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_boolValue_026ca540),
             ((ulong)pcVar1 & 1) == 0)) {
            local_104 = 0;
          }
          else {
            local_f1 = 1;
            local_104 = 1;
          }
          _objc_storeStrong(&local_1b0,0);
          if (local_104 != 0) goto LAB_00341260;
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_2b0 = (undefined *)0x0;
      } while (local_2a8 != (undefined *)0x0);
    }
    local_104 = 0;
LAB_00341260:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar1 = local_100;
    if (local_104 == 0) {
      local_f0 = &cf_videoDuration;
      local_e8 = &cf_m_videoDuration;
      local_e0 = &cf_duration;
      local_d8 = &cf_m_duration;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f0
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_0033dbe4();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_1b8 = pcVar1;
      if ((long)pcVar1 < 0x1f5) {
        pcVar1 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        local_320 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_320 = &cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_320,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = local_320;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        pcVar1 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_containsString__0269d0b0,&cf_sight);
        if ((((ulong)pcVar1 & 1) == 0) ||
           (pcVar1 = local_1c0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_1c0,PTR_s_containsString__0269d0b0,&cf_insight),
           ((ulong)pcVar1 & 1) != 0)) {
          local_f1 = 0;
        }
        else {
          local_f1 = 1;
        }
        local_104 = 1;
        _objc_storeStrong(&local_1c0,0);
      }
      else {
        local_f1 = 1;
        local_104 = 1;
      }
    }
  }
  else {
    local_f1 = 1;
    local_104 = 1;
  }
LAB_00341514:
  _objc_storeStrong(&local_110,0);
LAB_00341534:
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_f1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

