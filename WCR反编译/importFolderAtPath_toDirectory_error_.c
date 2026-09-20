// importFolderAtPath:toDirectory:error: @ 015bd254

/* Function Stack Size: 0x28 bytes */

ID WCRefineVoicePackStore::importFolderAtPath_toDirectory_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  byte bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_168;
  ID local_140;
  undefined8 local_d8;
  ID local_d0;
  long local_c8;
  ID local_c0;
  undefined *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  ID local_90;
  ID local_88;
  byte local_7d;
  undefined4 local_7c;
  ID *local_78;
  ID local_70;
  cfstringStruct *local_68;
  SEL local_60;
  ID local_58;
  ID local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = (cfstringStruct *)0x0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_4);
  pcVar3 = local_68;
  local_78 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  if (pcVar3 == (cfstringStruct *)0x0) {
    if (local_78 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_neN9YeHe;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_78 = (ID)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_50 = 0;
    local_7c = 1;
  }
  else {
    local_7d = 0;
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = 1;
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = local_7d ^ 1;
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
    if ((bVar1 & 1) == 0) {
      IVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_91 = 0;
      if (IVar6 == 0) {
        local_140 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rootAbsolutePath_026ae1f8);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_140;
      }
      else {
        local_140 = local_70;
      }
      local_91 = IVar6 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_140;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_ensureRootDirectoryExists__026a3c70);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a9 = false;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_168 = &cf__eQeN9Y;
      }
      else {
        local_168 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = local_168;
      }
      local_a9 = pcVar7 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_168;
      if ((local_a9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_88;
      local_b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_stringByAppendingPathComponent__026cab30,local_a0);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = 1;
      local_c0 = IVar6;
      while( true ) {
        puVar4 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_fileExistsAtPath__026ca630,local_c0);
        IVar6 = local_88;
        if (((ulong)puVar4 & 1) == 0) break;
        local_c8 = local_c8 + 1;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____ld);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_c0;
        local_c0 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_d0 = 0;
      local_d8 = 0;
      puVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_c0,1,0,&local_d8);
      _objc_storeStrong(&local_d0,local_d8);
      IVar6 = local_d0;
      if (((ulong)puVar4 & 1) == 0) {
        if (local_78 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_78 = IVar6;
        }
        local_50 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_wcr_copyAudioTreeFrom_to_error__026b0d60,local_68,local_c0,
                   local_78);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_88);
        IVar6 = local_c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_50 = IVar6;
      }
      local_7c = 1;
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_88,0);
    }
    else {
      if (local_78 != (ID *)0x0) {
        local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_40 = &cf_N_feN9Y;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,5);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_78 = (ID)puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      local_50 = 0;
      local_7c = 1;
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_50;
}

