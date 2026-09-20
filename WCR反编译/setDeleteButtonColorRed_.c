// setDeleteButtonColorRed: @ 01d6e868

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameLibraryViewController::setDeleteButtonColorRed_
               (ID param_1,SEL param_2,ID param_3)

{
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_traverseViewsAndSetDeleteButtonC_026c4a30,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

