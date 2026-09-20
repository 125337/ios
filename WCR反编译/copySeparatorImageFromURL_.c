// copySeparatorImageFromURL: @ 01c6ac60

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::copySeparatorImageFromURL_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  byte *local_180;
  byte *local_178;
  long local_170;
  long local_168;
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
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_e8 == (undefined *)0x0) ||
     (puVar1 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_getSeparatorBasePath_026c24b8);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_stringByAppendingPathComponent__026cab30,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_e8;
    local_e8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_e8,1,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
  }
  puVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_100 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_jpg;
  local_40 = &cf_jpeg;
  local_38 = &cf_png;
  local_30 = &cf_gif;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_108 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar1;
  _memset(auStack_158,0,0x40);
  puVar1 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10);
  if (local_1e0 != (undefined *)0x0) {
    lVar8 = *local_148;
    local_1e8 = (undefined *)0x0;
    do {
      do {
        if (*local_148 - lVar8 != 0) {
          _objc_enumerationMutation(*local_148 - lVar8,puVar1);
        }
        puVar2 = local_e8;
        local_118 = *(undefined8 *)(local_150 + (long)local_1e8 * 8);
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_160 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_fileExistsAtPath__026ca630,local_160);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_removeItemAtPath_error__0269f910,local_160,0);
        }
        _objc_storeStrong(&local_160,0);
        local_1e8 = local_1e8 + 1;
      } while (local_1e8 < local_1e0);
      local_1e0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10)
      ;
      local_1e8 = (undefined *)0x0;
    } while (local_1e0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar8 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_168 = lVar8;
  (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  local_170 = lVar8;
  if ((lVar8 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0), lVar8 == 0)) {
    pbVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = pbVar4;
    if (pbVar4 == (byte *)0x0) {
      _objc_storeStrong(&local_170,&cf_jpg);
    }
    else {
      puVar1 = PTR_WCRefineEmoticonUtil_026ce1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_isGifData__0269e0a8,pbVar4);
      if (((ulong)puVar1 & 1) == 0) {
        pbVar5 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
        pbVar4 = local_178;
        if (pbVar5 < &MACH_HEADER.cputype) {
          _objc_storeStrong(pbVar5 + -4,&local_170,&cf_jpg);
        }
        else {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(pbVar4,PTR_s_bytes_026a9630);
          iVar7 = *pbVar4 - 0x89;
          local_180 = pbVar4;
          if ((((iVar7 == 0) && (iVar7 = pbVar4[1] - 0x50, iVar7 == 0)) &&
              (iVar7 = pbVar4[2] - 0x4e, iVar7 == 0)) && (iVar7 = pbVar4[3] - 0x47, iVar7 == 0)) {
            _objc_storeStrong(0,&local_170,&cf_png);
          }
          else {
            _objc_storeStrong(iVar7,&local_170,&cf_jpg);
          }
        }
      }
      else {
        _objc_storeStrong(&local_170,&cf_gif);
      }
    }
    _objc_storeStrong(&local_178,0);
  }
  else {
    lVar6 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = local_170;
    local_170 = lVar6;
    (*(code *)PTR__objc_release_02578630)(lVar8);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_e8;
  local_188 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_stringByAppendingPathComponent__026cab30,puVar1);
  _objc_retainAutoreleasedReturnValue();
  local_198 = 0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_190 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_e0;
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_190);
  _objc_retainAutoreleasedReturnValue();
  local_1a0 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_copyItemAtURL_toURL_error__026a22c8,lVar8,puVar2,&local_1a0);
  _objc_storeStrong(&local_198,local_1a0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_saveSettings_026b9548);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
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

