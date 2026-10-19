// rotateCropViewCounterclockwise @0xa6274

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::rotateCropViewCounterclockwise(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_toolbar(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDisableRotationButtons_(uVar1,local_70,1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_cropView(local_18,local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_28 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_msgSend_rotateImageNinetyDegreesAnimated_clockwise_completion_(uVar1,local_70,1,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

