// ___55-[WCMTOCropView_setBackgroundImageViewHidden:animated:]_block_invoke.17 @0xb729c

void ___55__WCMTOCropView_setBackgroundImageViewHidden_animated___block_invoke_17(long param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    _objc_msgSend_backgroundImageView(*(undefined8 *)(param_1 + 0x20),local_40);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar1,local_40,1);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  return;
}

