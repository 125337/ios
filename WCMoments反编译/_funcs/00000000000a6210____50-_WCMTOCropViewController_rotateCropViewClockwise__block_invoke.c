// ___50-[WCMTOCropViewController_rotateCropViewClockwise]_block_invoke @0xa6210

void ___50__WCMTOCropViewController_rotateCropViewClockwise__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  _objc_msgSend_toolbar(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDisableRotationButtons_(uVar1,local_38,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

