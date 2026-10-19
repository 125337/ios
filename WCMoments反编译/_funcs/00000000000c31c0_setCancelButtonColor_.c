// setCancelButtonColor: @0xc31c0

/* Function Stack Size: 0x18 bytes */

void WCMTOCropToolbar::setCancelButtonColor_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_38;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 != *(long *)(local_18 + (long)_cancelButtonColor)) {
    _objc_storeStrong(local_18 + (long)_cancelButtonColor,local_28);
    _objc_msgSend_setTitleColor_forState_
              (*(undefined8 *)(local_18 + (long)_cancelTextButton),local_38,
               *(undefined8 *)(local_18 + (long)_cancelButtonColor),0);
    _objc_msgSend_setTintColor_
              (*(undefined8 *)(local_18 + (long)_cancelIconButton),local_38,
               *(undefined8 *)(local_18 + (long)_cancelButtonColor));
    _objc_msgSend_sizeToFit(*(undefined8 *)(local_18 + (long)_cancelTextButton),local_38);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

