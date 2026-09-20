// copyMediaFromURL:variant:error: @ 01aedf40

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

ID WCRefineHomeAvatarStripSettingsViewController::copyMediaFromURL_variant_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *local_230;
  undefined *local_228;
  undefined *local_210;
  uint local_1ec;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1b8;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  ID local_140;
  undefined *local_138;
  byte local_129;
  cfstringStruct *local_128;
  byte local_11a;
  bool local_119;
  cfstringStruct *local_118;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  bool local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  ID local_e0;
  ID *local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  IVar1 = local_b8;
  local_d8 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_currentBackgroundFolderPath_026be4f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  local_e0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_f1 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_1b8 = &cf_dat;
  }
  else {
    local_1b8 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = local_1b8;
  }
  local_f1 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_1b8;
  if ((local_f1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_109 = 0;
  local_119 = false;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_1d8 = &cf_u4YPag;
  }
  else {
    local_1d8 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_109 = 1;
    local_108 = local_1d8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_118 = local_1d8;
  }
  local_119 = pcVar4 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = local_1d8;
  if ((local_119 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  if ((local_109 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  uVar5 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,&cf_dark);
  local_11a = (byte)uVar5;
  local_129 = 0;
  local_1ec = 0;
  if ((uVar5 & 1) != 0) {
    pcVar2 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_129 = 1;
    local_128 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1ec = (uint)pcVar2 ^ 1;
  }
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  if ((local_1ec & 1) != 0) {
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_stringByAppendingString__0269d398,&cf__dark);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_100;
    local_100 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_e0;
  local_138 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,puVar6);
  _objc_retainAutoreleasedReturnValue();
  local_140 = IVar1;
  _memset(auStack_188,0,0x40);
  puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_210 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    local_210 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_228 = local_210;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_210,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
  if (local_228 != (undefined *)0x0) {
    lVar9 = *local_178;
    local_230 = (undefined *)0x0;
    do {
      do {
        if (*local_178 - lVar9 != 0) {
          _objc_enumerationMutation(*local_178 - lVar9,local_210);
        }
        local_148 = *(ulong *)(local_180 + (long)local_230 * 8);
        IVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_isSupportedMediaFileName__026be4f8,local_148);
        if ((((IVar1 & 1) != 0) &&
            (uVar5 = local_148,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_148,PTR_s_isEqualToString__0269ccc8,local_138), (uVar5 & 1) == 0)) &&
           (IVar1 = local_b8,
           (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isDarkFileName__026be500,local_148),
           (uint)IVar1 == (local_11a & 1))) {
          puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          IVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,local_148);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_removeItemAtPath_error__0269f910,IVar1,0);
          (*(code *)PTR__objc_release_02578630)(IVar1);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = local_210;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_210,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                 0x10);
      local_230 = (undefined *)0x0;
    } while (local_228 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_210);
  puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_140);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar6,PTR_s_copyItemAtURL_toURL_error__026a22c8,pcVar2,puVar7,local_d8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  local_b0 = local_140;
  if (((ulong)puVar8 & 1) == 0) {
    local_b0 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

