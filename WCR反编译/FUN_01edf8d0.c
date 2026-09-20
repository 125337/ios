// FUN_01edf8d0 @ 01edf8d0

void FUN_01edf8d0(byte param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_20;
  byte local_12;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  local_12 = param_2;
  local_11 = param_1;
  _objc_alloc();
  uVar2 = (ulong)(local_12 & 1);
  FUN_01f0f958();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithDocumentTypes_inMode__026a2270,uVar2,0)
  ;
  local_20 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setAllowsMultipleSelection__026ae558,local_11 & 1);
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

