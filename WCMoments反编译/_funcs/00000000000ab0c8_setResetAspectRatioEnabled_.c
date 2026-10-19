// setResetAspectRatioEnabled: @0xab0c8

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setResetAspectRatioEnabled_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 local_40;
  undefined8 local_30;
  
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setResetAspectRatioEnabled_(uVar1,local_30,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar2 = _objc_msgSend_aspectRatioPickerButtonHidden(param_1,local_30);
  if ((uVar2 & 1) == 0) {
    local_40 = 0;
    if ((param_3 & 1) == 0) {
      local_40 = _objc_msgSend_aspectRatioLockEnabled(param_1,local_30);
    }
    _objc_msgSend_setAspectRatioPickerButtonHidden_(param_1,local_30,local_40 & 1);
  }
  return;
}

