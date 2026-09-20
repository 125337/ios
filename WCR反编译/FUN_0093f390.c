// FUN_0093f390 @ 0093f390

void FUN_0093f390(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_8c;
  char *local_58;
  undefined *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (char *)0x0;
  _objc_storeStrong(&local_40,param_1);
  pcVar2 = "CMessageWrap";
  _objc_getClass();
  local_50 = PTR_s_GetPathOfAppData__0269e218;
  local_48 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetPathOfAppData__0269e218),
     ((ulong)pcVar2 & 1) != 0)) {
    local_58 = (char *)0x0;
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar3 = local_58;
    FUN_009407ac();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_8c = 0;
    if (pcVar2 != (char *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_8c = (uint)puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar2 = local_58;
    bVar1 = (local_8c & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = pcVar2;
    }
    _objc_storeStrong(&local_58,0);
    if (bVar1) goto LAB_0093f698;
  }
  pcVar2 = local_40;
  local_30 = &cf_GetAppAttachmentPath;
  local_28 = &cf_getFilePath;
  local_20 = &cf_m_nsFilePath;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_0094148c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
LAB_0093f698:
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_38);
  return;
}

