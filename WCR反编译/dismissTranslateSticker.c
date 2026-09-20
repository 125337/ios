// dismissTranslateSticker @ 016778f4

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::dismissTranslateSticker(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_translateStickerView_026b1df8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTranslateStickerView__026b24c0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTranslateResultImage__026b26c8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTranslateResultText__026b26d0,0);
  return;
}

