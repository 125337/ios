// viewDidDisappear: @0xa2844

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::viewDidDisappear_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 local_40;
  ID local_38;
  class_t *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = &objc::class_t::WCMTOCropViewController;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"viewDidDisappear:",param_3 & 1);
  _objc_msgSend_setInTransition_(local_18,local_40,0);
  _objc_msgSend_setNeedsStatusBarAppearanceUpdate(local_18,local_40);
  return;
}

