// saveSeparatorImage: @ 01c6a4bc

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::saveSeparatorImage_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *local_1e0;
  undefined *local_1d8;
  long local_198;
  undefined *local_190;
  undefined *local_188;
  cfstringStruct *local_180;
  int local_174;
  long local_170;
  byte local_161;
  undefined *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  SEL local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = (undefined *)param_1;
  _objc_storeStrong(&local_e0,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_e8 == (undefined *)0x0) ||
     (puVar2 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_getSeparatorBasePath_026c24b8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_stringByAppendingPathComponent__026cab30,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_e8;
    local_e8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_e8,1,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
  }
  puVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_100 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_jpg;
  local_40 = &cf_jpeg;
  local_38 = &cf_png;
  local_30 = &cf_gif;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_108 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar2;
  _memset(auStack_158,0,0x40);
  puVar2 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10);
  if (local_1d8 != (undefined *)0x0) {
    lVar6 = *local_148;
    local_1e0 = (undefined *)0x0;
    do {
      do {
        if (*local_148 - lVar6 != 0) {
          _objc_enumerationMutation(*local_148 - lVar6,puVar2);
        }
        puVar3 = local_e8;
        local_118 = *(undefined8 *)(local_150 + (long)local_1e0 * 8);
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_160 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar3 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_fileExistsAtPath__026ca630,local_160);
        if (((ulong)puVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_removeItemAtPath_error__0269f910,local_160,0);
        }
        _objc_storeStrong(&local_160,0);
        local_1e0 = local_1e0 + 1;
      } while (local_1e0 < local_1d8);
      local_1d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10)
      ;
      local_1e0 = (undefined *)0x0;
    } while (local_1d8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar6 = local_e0;
  local_161 = 0;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_CGImage_0269e0e8);
  local_170 = lVar6;
  if (lVar6 != 0) {
    _CGImageGetAlphaInfo();
    local_174 = (int)lVar6;
    local_161 = 1;
    if ((((local_174 != 4) && (local_161 = 1, local_174 != 3)) && (local_161 = 1, local_174 != 2))
       && (local_161 = 1, local_174 != 1)) {
      local_161 = local_174 == 7;
    }
  }
  pcVar1 = &cf_png;
  if ((local_161 & 1) == 0) {
    pcVar1 = &cf_jpg;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_180 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_e8;
  local_188 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_stringByAppendingPathComponent__026cab30,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_198 = 0;
  local_190 = puVar3;
  if ((local_161 & 1) == 0) {
    lVar5 = local_e0;
    _UIImageJPEGRepresentation(DAT_02323c60);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_198;
    local_198 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  else {
    lVar5 = local_e0;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_198;
    local_198 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar6);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_198,PTR_s_writeToFile_atomically__0269f928,local_190,1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_198);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

