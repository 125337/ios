// viewSafeAreaInsetsDidChange @0xa4490

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::viewSafeAreaInsetsDidChange(ID param_1,SEL param_2)

{
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMTOCropViewController;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"viewSafeAreaInsetsDidChange");
  _objc_msgSend_adjustCropViewInsets(local_18,local_38);
  _objc_msgSend_adjustToolbarInsets(local_18,local_38);
  return;
}

