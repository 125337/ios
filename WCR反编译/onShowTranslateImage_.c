// onShowTranslateImage: @ 01677724

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::onShowTranslateImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showTranslateSticker__026b26c0,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

