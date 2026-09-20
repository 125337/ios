// FUN_008fda78 @ 008fda78

void FUN_008fda78(undefined8 param_1)

{
  long *plVar1;
  cfstringStruct **ppcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct **ppcVar4;
  undefined *puVar5;
  cfstringStruct *local_50;
  long *local_20;
  cfstringStruct *local_18;
  
  ppcVar2 = &local_18;
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar2,param_1);
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_50 = &cf_WCRefineVoiceTools;
  }
  else {
    local_50 = local_18;
  }
  ppcVar4 = ppcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (ppcVar2,PTR_s_stringByAppendingPathComponent__026cab30,local_50);
  _objc_retainAutoreleasedReturnValue();
  local_20 = (long *)ppcVar4;
  (*(code *)PTR__objc_release_02578630)(ppcVar2);
  puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  plVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(plVar1);
  return;
}

