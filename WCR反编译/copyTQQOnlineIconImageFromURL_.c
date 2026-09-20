// copyTQQOnlineIconImageFromURL: @ 01c6bcb4

/* Function Stack Size: 0x18 bytes */

void WCRefineNavigationAvatarViewController::copyTQQOnlineIconImageFromURL_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined8 local_1a8;
  undefined1 local_199;
  undefined8 local_198;
  ID local_190;
  undefined *local_188;
  byte *local_180;
  byte *local_178;
  long local_170;
  long local_168;
  ID local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  undefined *local_108;
  ID local_100;
  undefined *local_f8;
  ID local_f0;
  ID local_e8;
  long local_e0;
  SEL local_d8;
  ID local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  _objc_storeStrong(&local_e0,param_3);
  IVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tqqOnlineIconFolderPath_026c2008);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = IVar1;
  if ((IVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0), IVar1 == 0)) {
    IVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_getTQQOnlineIconBasePath_026c1e18);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_stringByAppendingPathComponent__026cab30,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e8;
    local_e8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_e8,1,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
  }
  IVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_100 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_jpg;
  local_40 = &cf_jpeg;
  local_38 = &cf_png;
  local_30 = &cf_gif;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_108 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar4;
  _memset(auStack_158,0,0x40);
  puVar3 = local_110;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10);
  if (local_1e0 != (undefined *)0x0) {
    lVar10 = *local_148;
    local_1e8 = (undefined *)0x0;
    do {
      do {
        if (*local_148 - lVar10 != 0) {
          _objc_enumerationMutation(*local_148 - lVar10,puVar3);
        }
        IVar1 = local_e8;
        local_118 = *(undefined8 *)(local_150 + (long)local_1e8 * 8);
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_160 = IVar1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_fileExistsAtPath__026ca630,local_160);
        if (((ulong)puVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_removeItemAtPath_error__0269f910,local_160,0);
        }
        _objc_storeStrong(&local_160,0);
        local_1e8 = local_1e8 + 1;
      } while (local_1e8 < local_1e0);
      local_1e0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_c8,0x10)
      ;
      local_1e8 = (undefined *)0x0;
    } while (local_1e0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  lVar10 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_168 = lVar10;
  (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  local_170 = lVar10;
  if ((lVar10 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_length_0269cca0), lVar10 == 0)) {
    pbVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = pbVar5;
    if ((pbVar5 == (byte *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pbVar5,PTR_s_length_0269cca0), pbVar5 == (byte *)0x0))
    {
      _objc_storeStrong(0,&local_170,&cf_jpg);
    }
    else {
      puVar3 = PTR_WCRefineEmoticonUtil_026ce1c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_isGifData__0269e0a8,local_178);
      if (((ulong)puVar3 & 1) == 0) {
        pbVar6 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0);
        pbVar5 = local_178;
        if (pbVar6 < &MACH_HEADER.cputype) {
          _objc_storeStrong(pbVar6 + -4,&local_170,&cf_jpg);
        }
        else {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(pbVar5,PTR_s_bytes_026a9630);
          iVar9 = 0;
          local_180 = pbVar5;
          if ((((pbVar5 == (byte *)0x0) || (iVar9 = *pbVar5 - 0x89, iVar9 != 0)) ||
              (iVar9 = pbVar5[1] - 0x50, iVar9 != 0)) ||
             ((iVar9 = pbVar5[2] - 0x4e, iVar9 != 0 || (iVar9 = pbVar5[3] - 0x47, iVar9 != 0)))) {
            _objc_storeStrong(iVar9,&local_170,&cf_jpg);
          }
          else {
            _objc_storeStrong(0,&local_170,&cf_png);
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
    lVar7 = local_170;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = local_170;
    local_170 = lVar7;
    (*(code *)PTR__objc_release_02578630)(lVar10);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_e8;
  local_188 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_stringByAppendingPathComponent__026cab30,puVar3);
  _objc_retainAutoreleasedReturnValue();
  local_198 = 0;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_190 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = local_e0;
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_190);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = local_198;
  puVar8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_copyItemAtURL_toURL_error__026a22c8,lVar10,puVar4,&local_1a8);
  _objc_storeStrong(&local_198,local_1a8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_199 = SUB81(puVar8,0);
  if (((ulong)puVar8 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setTqqOnlineIconFolderPath__026c1e20,local_e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_saveSettings_026b9548);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_198);
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

