// unzipFileAtPath:toDirectory:error: @ 015be6cc

/* Function Stack Size: 0x28 bytes */

bool WCRefineVoicePackStore::unzipFileAtPath_toDirectory_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  long local_60;
  long local_58;
  SEL local_50;
  ID local_48;
  byte local_39;
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
  if ((lVar1 == 0) ||
     (lVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
    if (param_5 != (ID *)0x0) {
      local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_20 = &cf_SSpeeHe;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,8);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = (ID)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_39 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = "MZipUtil";
    _objc_getClass();
    if ((pcVar3 == (char *)0x0) ||
       ((pcVar4 = pcVar3,
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_UnZipFile_toPath__0269f918),
        ((ulong)pcVar4 & 1) == 0 ||
        ((*(code *)PTR__objc_msgSend_02578628)
                   (pcVar3,PTR_s_UnZipFile_toPath__0269f918,local_58,local_60),
        ((ulong)pcVar3 & 1) == 0)))) {
      pcVar3 = "SSZipArchive";
      _objc_getClass();
      if (((pcVar3 == (char *)0x0) ||
          (pcVar4 = pcVar3,
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_respondsToSelector__026ca818,
                     PTR_s_unzipFileAtPath_toDestination__026ae480), ((ulong)pcVar4 & 1) == 0)) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_unzipFileAtPath_toDestination__026ae480,local_58,local_60),
         ((ulong)pcVar3 & 1) == 0)) {
        puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
        if (param_5 != (ID *)0x0) {
          local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
          local_30 = &cf_S1Y_;
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,9);
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_5 = (ID)puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        local_39 = 0;
      }
      else {
        local_39 = 1;
      }
    }
    else {
      local_39 = 1;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_39 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

