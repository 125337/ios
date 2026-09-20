// FUN_00152a30 @ 00152a30

void FUN_00152a30(undefined8 param_1)

{
  long *plVar1;
  cfstringStruct **ppcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_58;
  long *local_40;
  cfstringStruct *local_38 [3];
  long *local_20;
  cfstringStruct *local_18;
  
  ppcVar2 = &local_18;
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar2,param_1);
  FUN_0015523c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_18;
  local_20 = (long *)ppcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_58 = &cf__;
  }
  else {
    local_58 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = local_58;
  ppcVar2 = (cfstringStruct **)local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_40 = (long *)ppcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  plVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(plVar1);
  return;
}

