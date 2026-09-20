// FUN_01d65fb4 @ 01d65fb4

void FUN_01d65fb4(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    _objc_storeStrong(lVar1 + WCRefineScreenshotFrameLibraryViewController::_selectedImagePath,
                      *(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewSelectedFrame_026c49e8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

