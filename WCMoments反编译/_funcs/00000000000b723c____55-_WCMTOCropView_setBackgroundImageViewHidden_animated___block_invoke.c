// ___55-[WCMTOCropView_setBackgroundImageViewHidden:animated:]_block_invoke @0xb723c

void ___55__WCMTOCropView_setBackgroundImageViewHidden_animated___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_msgSend_backgroundImageView(*(undefined8 *)(param_1 + 0x20));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(uVar2,uVar1,local_38);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

