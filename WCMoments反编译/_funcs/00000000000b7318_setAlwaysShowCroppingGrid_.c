// setAlwaysShowCroppingGrid: @0xb7318

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setAlwaysShowCroppingGrid_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  if ((param_3 & 1) != (*(byte *)(param_1 + (long)_alwaysShowCroppingGrid) & 1)) {
    *(byte *)(param_1 + (long)_alwaysShowCroppingGrid) = (byte)param_3 & 1;
    _objc_msgSend_gridOverlayView(param_1,local_40);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setGridHidden_animated_
              (uVar1,local_40,(*(byte *)(param_1 + (long)_alwaysShowCroppingGrid) ^ 1) & 1,1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}

