// copyWorkingImageToPasteboard: @ 01661578

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::copyWorkingImageToPasteboard_
               (ID param_1,SEL param_2,bool param_3)

{
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_croppedImage_026b2310);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if ((param_1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_writeImageToPasteboardPreserving_026b2318,param_1),
     (local_21 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Y6R0RjR4_g);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

