// FUN_0091ba30 @ 0091ba30

void FUN_0091ba30(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_currentNSLogLocalFilePath_026aa408);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fileExistsAtPath__026ca630,local_30);
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_removeItemAtPath_error__0269f910,local_30,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCurrentNSLogLocalFilePath__026aa410);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

