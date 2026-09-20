// currentSelfAvatarImageForPreview @ 018278fc

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFrameLibraryViewController::currentSelfAvatarImageForPreview
             (ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined8 local_18;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionContextEnabled_026b6410);
  bVar1 = false;
  if ((IVar2 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionContextAvatarImage_026b6418);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectionContextAvatarImage_026b6418);
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewSelfAvatarImage_026b60a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureSelfAvatarLoadedForPreview_026b60b0)
      ;
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewSelfAvatarImage_026b60a8);
      _objc_retainAutoreleasedReturnValue();
      local_18 = param_1;
    }
  }
  _objc_autoreleaseReturnValue();
  return local_18;
}

