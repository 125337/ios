// setDoneButtonColor: @0xc32c0

/* Function Stack Size: 0x18 bytes */

void WCMTOCropToolbar::setDoneButtonColor_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_38;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    _objc_msgSend_colorWithRed_green_blue_alpha_
              (0x3ff0000000000000,0x3fe99999a0000000,0,&_OBJC_CLASS___UIColor,local_38);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_00110458)(lVar1);
  }
  if (local_28 != *(long *)(local_18 + (long)_doneButtonColor)) {
    _objc_storeStrong(local_18 + (long)_doneButtonColor,local_28);
    _objc_msgSend_setTitleColor_forState_
              (*(undefined8 *)(local_18 + (long)_doneTextButton),local_38,
               *(undefined8 *)(local_18 + (long)_doneButtonColor),0);
    _objc_msgSend_setTintColor_
              (*(undefined8 *)(local_18 + (long)_doneIconButton),local_38,
               *(undefined8 *)(local_18 + (long)_doneButtonColor));
    _objc_msgSend_sizeToFit(*(undefined8 *)(local_18 + (long)_doneTextButton),local_38);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

