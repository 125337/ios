// setDoneTextButtonTitle: @0xc3110

/* Function Stack Size: 0x18 bytes */

void WCMTOCropToolbar::setDoneTextButtonTitle_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 local_40;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_storeStrong(local_18 + (long)_doneTextButtonTitle,local_28);
  _objc_msgSend_setTitle_forState_
            (*(undefined8 *)(local_18 + (long)_doneTextButton),local_40,
             *(undefined8 *)(local_18 + (long)_doneTextButtonTitle),0);
  _objc_msgSend_sizeToFit(*(undefined8 *)(local_18 + (long)_doneTextButton),local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

