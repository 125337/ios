// refreshBackgroundMediaFromSelectedFolder @ 01aec348

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineHomeAvatarStripSettingsViewController::refreshBackgroundMediaFromSelectedFolder
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  ID local_240;
  ID local_228;
  undefined1 *local_208;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1a0;
  undefined *local_178;
  undefined *local_168;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  ID local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentBackgroundFolderPath_026be4f0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_1a0 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_1a0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = &::cf___;
  local_e8 = 0;
  local_f0 = 0;
  _memset(auStack_138,0,0x40);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_1d0 != (undefined *)0x0) {
    lVar6 = *local_128;
    local_1d8 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar6 != 0) {
          _objc_enumerationMutation(*local_128 - lVar6,puVar1);
        }
        local_f8 = *(undefined8 *)(local_130 + (long)local_1d8 * 8);
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_isSupportedMediaFileName__026be4f8,local_f8);
        if ((IVar3 & 1) != 0) {
          IVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_140 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar4 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_objectForKeyedSubscript__0269d098,
                     *(undefined8 *)PTR__NSFileModificationDate_02578020);
          _objc_retainAutoreleasedReturnValue();
          local_208 = puVar4;
          if (puVar4 == (undefined1 *)0x0) {
            local_158 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
            _objc_retainAutoreleasedReturnValue();
            local_208 = local_158;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_208;
          if (puVar4 == (undefined1 *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isDarkFileName__026be500,local_f8);
          if ((IVar3 & 1) == 0) {
            pcVar5 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
            if ((pcVar5 == (cfstringStruct *)0x0) ||
               (puVar4 = local_150,
               (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_compare__0269cd10,local_e8),
               puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
              _objc_storeStrong(&local_d8,local_140);
              _objc_storeStrong(&local_e8,local_150);
            }
          }
          else {
            pcVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
            if ((pcVar5 == (cfstringStruct *)0x0) ||
               (puVar4 = local_150,
               (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_compare__0269cd10,local_f0),
               puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
              _objc_storeStrong(&local_e0,local_140);
              _objc_storeStrong(&local_f0,local_150);
            }
          }
          _objc_storeStrong(&local_150);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
        }
        local_1d8 = local_1d8 + 1;
      } while (local_1d8 < local_1d0);
      local_1d0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_1d8 = (undefined *)0x0;
    } while (local_1d0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_relativeBackgroundPathFromAbsolu_026be508,local_d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHomeAvatarStripBackgroundMedi_026be510);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  pcVar5 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  local_228 = local_b0;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_228 = 0;
  }
  else {
    local_168 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_228,PTR_s_mediaTypeForURL__026be518);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_setHomeAvatarStripBackgroundMedi_026be520,local_228);
  if (pcVar5 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_168);
  }
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_relativeBackgroundPathFromAbsolu_026be508,local_e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setHomeAvatarStripBackgroundMedi_026be528);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  pcVar5 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  local_240 = local_b0;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_240 = 0;
  }
  else {
    local_178 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_mediaTypeForURL__026be518);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_setHomeAvatarStripBackgroundMedi_026be530,local_240);
  if (pcVar5 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_178);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

