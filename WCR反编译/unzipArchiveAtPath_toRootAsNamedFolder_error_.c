// unzipArchiveAtPath:toRootAsNamedFolder:error: @ 015bf750

/* Function Stack Size: 0x28 bytes */

ID WCRefineVoicePackStore::unzipArchiveAtPath_toRootAsNamedFolder_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined *puVar6;
  long local_100;
  uint local_c4;
  ID local_b8;
  ID local_b0;
  byte local_a1;
  long local_a0;
  byte local_91;
  long local_90;
  long local_88;
  ID local_80;
  undefined4 local_78;
  byte local_71;
  undefined *local_70;
  ID *local_68;
  long local_60;
  long local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  lVar2 = local_58;
  local_68 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  local_71 = 0;
  local_c4 = 1;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c4 = (uint)puVar3 ^ 1;
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
  if ((local_c4 & 1) == 0) {
    IVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_ensureRootDirectoryExists__026a3c70,local_68);
    if ((IVar4 & 1) == 0) {
      local_40 = 0;
      local_78 = 1;
    }
    else {
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rootAbsolutePath_026ae1f8);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_60;
      local_80 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      local_91 = 0;
      local_a1 = 0;
      if (lVar2 == 0) {
        local_100 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_100;
      }
      else {
        local_100 = local_60;
      }
      local_a1 = lVar2 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_100;
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      lVar2 = local_88;
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_88;
      local_88 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        _objc_storeStrong(&local_88,&::cf_S);
      }
      lVar2 = local_88;
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf____);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_88;
      local_88 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_uniquePathInDirectory_preferredN_026b0d30,local_80,local_88);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = 0;
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_b0 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_b8;
      puVar6 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_storeStrong(&local_b8,IVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar4 = local_b8;
      if (((ulong)puVar6 & 1) == 0) {
        if (local_68 != (ID *)0x0) {
          _objc_retainAutorelease();
          *local_68 = IVar4;
        }
        local_40 = 0;
      }
      else {
        IVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_unzipFileAtPath_toDirectory_erro_026b0d50,local_58,local_b0,
                   local_68);
        if ((IVar4 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_40 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_wcr_flattenSingleRootFolderIfNee_026b0d58,local_b0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_80);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_b0);
          IVar4 = local_b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_40 = IVar4;
        }
      }
      local_78 = 1;
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
    }
  }
  else {
    if (local_68 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_S__SNX__Wb_gN__b;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,8);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_68 = (ID)puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    local_40 = 0;
    local_78 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_40;
}

