// importThemeZipAtPath:error: @ 015d0a8c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineWechatThemeStore::importThemeZipAtPath_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID local_190;
  uint local_c8;
  ID local_c0;
  undefined8 local_b8;
  byte local_a9;
  ID local_a8;
  ID local_a0;
  ID local_98;
  byte local_89;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  ID *local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = (undefined1 *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = local_40;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_51 = 0;
  local_c8 = 1;
  if (((ulong)puVar4 & 1) != 0) {
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = (uint)puVar5 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_c8 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar5;
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar7 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_wcr_theme___);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_68,1,0);
    puVar2 = local_40;
    FUN_015d1548(local_40,local_68);
    if (((ulong)puVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_removeItemAtPath_error__0269f910,local_68,0);
      if (local_48 != (ID *)0x0) {
        IVar6 = 2;
        FUN_015d140c(2,&cf_Z);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_48 = IVar6;
      }
      local_28 = 0;
      local_58 = 1;
    }
    else {
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_68,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithBlock__026ab6e0,
                 &PTR___NSConcreteGlobalBlock_02587298);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_filteredArrayUsingPredicate__026b0178);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = puVar3;
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
      puVar3 = local_68;
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_88 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_89 = 0;
        puVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_88,&local_89);
        if ((((ulong)puVar3 & 1) != 0) && ((local_89 & 1) != 0)) {
          _objc_storeStrong(&local_78,local_88);
          puVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_80;
          local_80 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _objc_storeStrong(&local_88,0);
      }
      IVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_safeThemeName__026b0f90,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0);
      if (IVar6 == 0) {
        _objc_storeStrong(&local_98,&cf__eQ_N);
      }
      puVar3 = local_60;
      IVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_repositoryPath_026aeb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar6,1,0);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      IVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_uniqueThemePathForName__026b0f98,local_98);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = 0;
      local_b8 = 0;
      puVar3 = local_60;
      local_a0 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_copyItemAtPath_toPath_error__026a1758,local_78,IVar6,&local_b8);
      _objc_storeStrong(&local_a8,local_b8);
      local_a9 = (byte)puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_removeItemAtPath_error__0269f910,local_68,0);
      if ((local_a9 & 1) == 0) {
        if (local_48 != (ID *)0x0) {
          bVar1 = local_a8 == 0;
          if (bVar1) {
            local_190 = 3;
            FUN_015d140c(3,&cf__NQeQ1Y_);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = local_190;
          }
          else {
            local_190 = local_a8;
          }
          _objc_retainAutorelease();
          *local_48 = local_190;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
        }
        local_28 = 0;
      }
      else {
        IVar6 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        IVar6 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_28 = IVar6;
      }
      local_58 = 1;
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  else {
    if (local_48 != (ID *)0x0) {
      IVar6 = 1;
      FUN_015d140c(1,&cf_bgHev);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_48 = IVar6;
    }
    local_28 = 0;
    local_58 = 1;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

