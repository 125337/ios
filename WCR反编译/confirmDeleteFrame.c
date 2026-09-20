// confirmDeleteFrame @ 01d707ec

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::confirmDeleteFrame(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_removeItemAtPath_error__0269f910,
               *(undefined8 *)(local_18 + (long)_selectedImagePath));
    _objc_storeStrong(local_18 + (long)_selectedImagePath,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showToast__026b3a18,&cf__Rd);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadFrames_026b63c0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

