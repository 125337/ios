// ___43-[WCMTOCropViewController_doneButtonTapped]_block_invoke.65 @0xa99bc

void ___43__WCMTOCropViewController_doneButtonTapped__block_invoke_65(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    _objc_msgSend_delegate(*(undefined8 *)(param_1 + 0x20),local_38);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_cropViewController_didCropToImage_withRect_angle_
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),uVar1,local_38,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x50));
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
    _objc_msgSend_onDidCropToRect(*(undefined8 *)(param_1 + 0x20),local_38);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),lVar2,
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x50));
    (*(code *)PTR__objc_release_00110458)(lVar2);
  }
  _objc_msgSend_setDoneButtonsEnabled_(*(undefined8 *)(param_1 + 0x20),local_38,1);
  return;
}

