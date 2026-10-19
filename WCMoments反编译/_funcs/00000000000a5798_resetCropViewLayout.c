// resetCropViewLayout @0xa5798

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::resetCropViewLayout(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_30;
  
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend_angle(uVar1,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar3 = _objc_msgSend_resetAspectRatioEnabled(param_1,local_30);
  if ((uVar3 & 1) != 0) {
    _objc_msgSend_setAspectRatioLockEnabled_(param_1,local_30,0);
  }
  _objc_msgSend_cropView(param_1,local_30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_resetLayoutToDefaultAnimated_(uVar1,local_30,lVar2 == 0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

