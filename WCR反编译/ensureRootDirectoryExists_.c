// ensureRootDirectoryExists: @ 015b29f4

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoicePackStore::ensureRootDirectoryExists_(ID param_1,SEL param_2,ID *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte local_71;
  undefined *local_70;
  undefined4 local_64;
  ID local_60;
  ID *local_58;
  SEL local_50;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rootAbsolutePath_026ae1f8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  if (param_1 == 0) {
    if (local_58 != (ID *)0x0) {
      local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_20 = &cf_S_eHe;
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_58 = (ID)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    local_39 = 0;
    local_64 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_70 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_60,&local_71);
    puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_60,1,0,local_58);
      local_39 = (byte)puVar2 & 1;
    }
    else if ((local_71 & 1) == 0) {
      if (local_58 != (ID *)0x0) {
        local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_30 = &cf___eN_S_u;
        puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,2);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *local_58 = (ID)puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      local_39 = 0;
    }
    else {
      local_39 = 1;
    }
    local_64 = 1;
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_39 & 1;
}

