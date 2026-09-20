// FUN_017f99f0 @ 017f99f0

void FUN_017f99f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_30 = 0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeItemAtURL_error__026a7188,puVar2,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar3 = local_20;
  puVar1 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_copyItemAtURL_toURL_error__026a22c8,uVar3,puVar2,&local_40);
  _objc_storeStrong(&local_30,local_40);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
               *(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = **(undefined8 **)(param_1 + 0x28);
    **(undefined8 **)(param_1 + 0x28) = puVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    **(undefined1 **)(param_1 + 0x30) = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

