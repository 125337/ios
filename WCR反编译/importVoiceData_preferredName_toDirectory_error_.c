// importVoiceData:preferredName:toDirectory:error: @ 015bdd54

/* Function Stack Size: 0x30 bytes */

bool WCRefineVoicePackStore::importVoiceData_preferredName_toDirectory_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID *param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_100;
  ID local_e0;
  ID local_a0;
  cfstringStruct *local_98;
  byte local_89;
  ID local_88;
  ID local_80;
  undefined4 local_74;
  ID *local_70;
  ID local_68;
  cfstringStruct *local_60;
  ulong local_58;
  SEL local_50;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_4);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  uVar1 = local_58;
  local_70 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  if (uVar1 == 0) {
    if (local_70 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_penc_Nzz;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,6);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_70 = (ID)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_39 = 0;
    local_74 = 1;
  }
  else {
    IVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    local_89 = 0;
    if (IVar3 == 0) {
      local_e0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rootAbsolutePath_026ae1f8);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_e0;
    }
    else {
      local_e0 = local_68;
    }
    local_89 = IVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_e0;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_ensureRootDirectoryExists__026a3c70);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_100 = &cf_voice_silk;
    }
    else {
      local_100 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(local_100);
    if (pcVar5 == (cfstringStruct *)0x0) {
      pcVar6 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_stringByAppendingPathExtension__026a4580,&cf_silk);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_98;
      local_98 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    IVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_uniquePathInDirectory_preferredN_026b0d30,local_80,local_98);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_58;
    local_a0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_writeToFile_options_error__026a0a68,IVar3,1,local_70);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_invalidateFolderStatsCacheForPat_026b0d20,local_80);
    }
    local_39 = (byte)uVar1 & 1;
    local_74 = 1;
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_39 & 1;
}

