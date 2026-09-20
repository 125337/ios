// FUN_010c441c @ 010c441c

void FUN_010c441c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  byte local_34;
  undefined8 local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_mediaCopyQueue_026ae670);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_sync();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  _objc_alloc_init();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_prepareBrowseIndexMutation_026ae690);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_browseRecords_026ae688);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  FUN_010b8aa8(uVar3,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeObjectForKey__0269d700);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_scheduleBrowseIndexSave_026ae698);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_fileExistsAtPath__026ca630,*(undefined8 *)(param_1 + 0x38));
  local_34 = 1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_fileExistsAtPath__026ca630,*(undefined8 *)(param_1 + 0x40));
    local_34 = (byte)puVar2;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x18) = local_34 & 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeItemAtPath_error__0269f910,*(undefined8 *)(param_1 + 0x38));
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeItemAtPath_error__0269f910,*(undefined8 *)(param_1 + 0x40),0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_stringByAppendingPathComponent__026cab30,&cf_media);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_contentsOfDirectoryAtPath_error__0269e088,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeItemAtPath_error__0269f910,local_30,0);
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_contentsOfDirectoryAtPath_error__0269e088,
             *(undefined8 *)(param_1 + 0x48),0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeItemAtPath_error__0269f910,*(undefined8 *)(param_1 + 0x48),0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

