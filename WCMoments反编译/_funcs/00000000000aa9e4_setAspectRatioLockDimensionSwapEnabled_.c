// setAspectRatioLockDimensionSwapEnabled: @0xaa9e4

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setAspectRatioLockDimensionSwapEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  *(byte *)(param_1 + (long)_aspectRatioLockDimensionSwapEnabled) = (byte)param_3 & 1;
  _objc_msgSend_cropView(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAspectRatioLockDimensionSwapEnabled_(uVar1,local_40,param_3 & 1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

