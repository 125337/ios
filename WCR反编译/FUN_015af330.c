// FUN_015af330 @ 015af330

void FUN_015af330(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_ensureRootDirectoryExists__026a3c70,0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_durationCacheFilePath_026b0c00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_writeToFile_atomically__0269f928,uVar1,1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

