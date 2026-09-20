// FUN_002f5868 @ 002f5868

void FUN_002f5868(long param_1)

{
  undefined *puVar1;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (*(long *)(param_1 + 0x28) == 3) {
    puVar1 = PTR_WCRefineScreenshotSaveHelper_026ce520;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScreenshotSaveHelper_026ce520,PTR_s_sharedHelper_026a1f30);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    _UIImageWriteToSavedPhotosAlbum
              (*(undefined8 *)(param_1 + 0x20),puVar1,
               PTR_s_framedScreenshotSaved_didFinishS_026a1f40,0);
    _objc_storeStrong(&local_28,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    FUN_002eefbc(&cf_WYX_bV_Y6R0RjR4_g);
  }
  return;
}

