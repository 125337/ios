// exportDirectoryAsZip:zipName:error: @ 015be224

/* Function Stack Size: 0x28 bytes */

ID WCRefineVoicePackStore::exportDirectoryAsZip_zipName_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_c8;
  ID local_b8;
  byte local_99;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  ID local_78;
  ID local_70;
  ID *local_68;
  cfstringStruct *local_60;
  ID local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
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
  IVar1 = local_58;
  local_68 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  local_79 = 0;
  if (IVar1 == 0) {
    local_b8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rootAbsolutePath_026ae1f8);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_b8;
  }
  else {
    local_b8 = local_58;
  }
  local_79 = IVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_b8;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c8 = &::cf_W;
  }
  else {
    local_c8 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(local_c8);
  pcVar3 = (cfstringStruct *)((ulong)pcVar2 & 0xffffffff);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_stringByAppendingPathExtension__026a4580,&cf_zip);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_88;
    local_88 = pcVar2;
    (*(code *)PTR__objc_release_02578630)();
  }
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_90 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar5 = "WCRefineFrameZipCreator";
  _objc_getClass();
  local_99 = 0;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar5,PTR_s_respondsToSelector__026ca818,
               PTR_s_createZipFileAtPath_withContents_026ae420);
    if (((ulong)pcVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_createZipFileAtPath_withContents_026ae420,local_90,local_70);
      local_99 = (byte)pcVar5;
    }
  }
  pcVar2 = local_90;
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  if ((local_99 & 1) == 0) {
    if (local_68 != (ID *)0x0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_SbS;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineVoicePack,7);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_68 = (ID)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    local_40 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = pcVar2;
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

