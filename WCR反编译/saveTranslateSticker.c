// saveTranslateSticker @ 0167a5d0

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::saveTranslateSticker(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_translateResultImage_026b26f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_translateResultImage_026b26f0);
    _objc_retainAutoreleasedReturnValue();
    _UIImageWriteToSavedPhotosAlbum();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

