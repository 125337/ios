// performInitialSetup @0xb1004

/* Function Stack Size: 0x10 bytes */

void WCMTOCropView::performInitialSetup(ID param_1,SEL param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_c8;
  
  uVar1 = _objc_msgSend_initialSetupPerformed(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_setInitialSetupPerformed_(param_1,local_c8,1);
    _objc_msgSend_layoutInitialImage(param_1,local_c8);
    lVar2 = _objc_msgSend_restoreAngle(param_1,local_c8);
    if (lVar2 != 0) {
      uVar3 = _objc_msgSend_restoreAngle(param_1,local_c8);
      _objc_msgSend_setAngle_(param_1,local_c8,uVar3);
      _objc_msgSend_setRestoreAngle_(param_1,local_c8,0);
      uVar3 = _objc_msgSend_angle(param_1,local_c8);
      _objc_msgSend_setCropBoxLastEditedAngle_(param_1,local_c8,uVar3);
    }
    uVar3 = _objc_msgSend_restoreImageCropFrame(param_1,local_c8);
    uVar1 = _CGRectIsEmpty(uVar3);
    if ((uVar1 & 1) == 0) {
      uVar3 = _objc_msgSend_restoreImageCropFrame(param_1,local_c8);
      _objc_msgSend_setImageCropFrame_(uVar3,in_d1,in_d2,in_d3,param_1,local_c8);
      _objc_msgSend_setRestoreImageCropFrame_
                (*(undefined8 *)PTR__CGRectZero_001108d8,
                 *(undefined8 *)(PTR__CGRectZero_001108d8 + 8),
                 *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_001108d8 + 0x18),param_1,local_c8);
    }
    _objc_msgSend_captureStateForImageRotation(param_1,local_c8);
    _objc_msgSend_checkForCanReset(param_1,local_c8);
  }
  return;
}

