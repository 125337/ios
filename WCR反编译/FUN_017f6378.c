// FUN_017f6378 @ 017f6378

void FUN_017f6378(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint local_30;
  
  local_30 = 1;
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (uint)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((local_30 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),PTR_s_invokeScreenRecordingVideoProces_026b5988,
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38));
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_Y6R1Y__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  return;
}

