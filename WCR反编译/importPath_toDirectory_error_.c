// importPath:toDirectory:error: @ 015bd9ec

/* WARNING: Removing unreachable block (ram,0x015bdc80) */
/* Function Stack Size: 0x28 bytes */

ID WCRefineVoicePackStore::importPath_toDirectory_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 local_60;
  long local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_4);
  lVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  if (lVar1 == 0) {
    if (param_5 != (ID *)0x0) {
      local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_20 = &cf__eHe;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,5);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = (ID)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_40 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
    if (((ulong)puVar3 & 1) == 0) {
      if (param_5 != (ID *)0x0) {
        local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_30 = &cf_nNX__W;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,5);
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_5 = (ID)puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      local_40 = 0;
    }
    else {
      IVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_importFileAtPath_toDirectory_pre_026a9d68,local_58,local_60,0,
                 param_5);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar4;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

