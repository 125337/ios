// setAspectRatioLockEnabled: @0xaa8e4

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setAspectRatioLockEnabled_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_30;
  
  _objc_msgSend_toolbar(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setClampButtonGlowing_(uVar3,local_30,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_cropView(param_1,local_30);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAspectRatioLockEnabled_(uVar3,local_30,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar4 = _objc_msgSend_aspectRatioPickerButtonHidden(param_1,local_30);
  if ((uVar4 & 1) == 0) {
    bVar1 = false;
    if ((param_3 & 1) != 0) {
      iVar2 = _objc_msgSend_resetAspectRatioEnabled(param_1,local_30);
      bVar1 = iVar2 == 0;
    }
    _objc_msgSend_setAspectRatioPickerButtonHidden_(param_1,local_30,bVar1);
  }
  return;
}

