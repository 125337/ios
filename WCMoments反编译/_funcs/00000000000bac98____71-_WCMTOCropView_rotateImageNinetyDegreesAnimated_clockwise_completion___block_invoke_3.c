// ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke_3 @0xbac98

void ___71__WCMTOCropView_rotateImageNinetyDegreesAnimated_clockwise_completion___block_invoke_3
               (long param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  _objc_msgSend_setAlpha_(0,*(undefined8 *)(param_1 + 0x20));
  _objc_msgSend_backgroundContainerView(*(undefined8 *)(param_1 + 0x28),local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_gridOverlayView(*(undefined8 *)(param_1 + 0x28),local_38);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0x3ff0000000000000,uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

