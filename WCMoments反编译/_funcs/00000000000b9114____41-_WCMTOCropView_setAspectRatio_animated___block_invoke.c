// ___41-[WCMTOCropView_setAspectRatio:animated:]_block_invoke @0xb9114

void ___41__WCMTOCropView_setAspectRatio_animated___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_90;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSend_scrollView(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setContentOffset_(uVar2,uVar3,uVar1,local_90);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setCropBoxFrame_
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x20),local_90);
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    _objc_msgSend_scrollView(*(undefined8 *)(param_1 + 0x20),local_90);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_minimumZoomScale(uVar1,local_90);
    _objc_msgSend_scrollView(*(undefined8 *)(param_1 + 0x20),local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setZoomScale_(uVar3,uVar2,local_90);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_msgSend_moveCroppedContentToCenterAnimated_(*(undefined8 *)(param_1 + 0x20),local_90,0);
  _objc_msgSend_checkForCanReset(*(undefined8 *)(param_1 + 0x20),local_90);
  return;
}

